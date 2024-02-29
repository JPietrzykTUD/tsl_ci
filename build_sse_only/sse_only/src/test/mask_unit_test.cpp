/*==========================================================================*
 * This file is part of the TSL - a template SIMD library.                  *
 *                                                                          *
 * Copyright 2024 TSL-Team, Database Research Group TU Dresden              *
 *                                                                          *
 * Licensed under the Apache License, Version 2.0 (the "License");          *
 * you may not use this file except in compliance with the License.         *
 * You may obtain a copy of the License at                                  *
 *                                                                          *
 *     http://www.apache.org/licenses/LICENSE-2.0                           *
 *                                                                          *
 * Unless required by applicable law or agreed to in writing, software      *
 * distributed under the License is distributed on an "AS IS" BASIS,        *
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
 * See the License for the specific language governing permissions and      *
 * limitations under the License.                                           *
 *==========================================================================*/

/*
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/sse_only/src/test/mask_unit_test.cpp
 * \date 2024-02-29
 * \brief Unit test file for TSL Primitives using Catch2
 * \note
 *
 */

#include <tslintrin.hpp>
#include <cstddef>
#include <array>
#include <iostream>
#include <bitset>
#include "test_functions.hpp"

namespace tsl {
    template<VectorProcessingStyle Vec>
    bool test_imask_population_count_default() {
        using namespace tsl;
        using mask_t = typename Vec::imask_type;
        std::size_t mask_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{ 1, false };
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();
        bool allOk = true;
        if constexpr (std::is_same<bool, typename Vec::mask_type>::value){
          for(std::size_t i = 0; i < mask_count; i++){
            mask_t mask;
            testing::rnd_init(&mask, 1);

            *reference_result_ptr = (mask & 0b1);
            *test_result_ptr = mask_population_count<Vec>(mask);

            test_helper.synchronize();
            allOk &= test_helper.validate();
          }
        }else{
          for(std::size_t i = 0; i < mask_count; i++){
            mask_t mask;
            testing::rnd_init(&mask, 1);

            std::size_t count = 0;
            for(std::size_t j = 0; j < sizeof(mask_t)*8; j++){
              if((mask >> j) & 0b1){
                count++;
              }
            }
            *reference_result_ptr = count;
            *test_result_ptr = mask_population_count<Vec>(mask);

            test_helper.synchronize();
            allOk &= test_helper.validate();
          }
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_to_integral_mask_match_alternate() {
        using namespace tsl;
        if constexpr (std::is_same_v<bool, typename Vec::mask_type>) {
          std::cerr << "implement me" << std::endl;
          return true;
        } else if constexpr (std::is_same_v<typename Vec::mask_type, typename Vec::imask_type>) {
          //we don't need to do anything here since it is a NOP.
          return true;
        } else {
          using T = std::conditional_t<std::is_same_v<typename Vec::base_type, typename Vec::mask_type>, typename Vec::base_type, typename Vec::offset_base_type>;
          using CustomVecT = typename Vec::transform_extension<T>;
          bool allOk = true;
          //e.g., SSE, AVX2, ...
          auto data_create_lambda = [](T* data, std::size_t element_count) {
            for (size_t i = 0; i < element_count; ++i) {
              data[i] = i % 2 == 0 ? -1 : 0;
            }
          };
          testing::test_memory_helper_t<CustomVecT> test_helper{CustomVecT::vector_element_count(), CustomVecT::vector_element_count(), false, data_create_lambda};
          tsl::storeu<CustomVecT>(test_helper.result_target(), tsl::set1<CustomVecT>(0));
          auto reference_result_ptr = reinterpret_cast<typename Vec::imask_type*>(test_helper.result_ref());
          auto reference_data_ptr = test_helper.data_ref();
          typename CustomVecT::imask_type expected_result = 0;
          for (size_t i = 0; i < CustomVecT::vector_element_count(); ++i) {
            expected_result |= (reference_data_ptr[i] & 1) << i;
          }
          *reference_result_ptr = expected_result;
          auto test_data_ptr = test_helper.data_target();
          auto test_result_ptr = reinterpret_cast<typename Vec::imask_type*>(test_helper.result_target());
          auto vec_mask = loadu<CustomVecT>(test_data_ptr);
          auto mask_integral = to_integral<CustomVecT>(vec_mask);
          *test_result_ptr = mask_integral;
          test_helper.synchronize();
          if (!(test_helper.validate())) {
            std::cerr << "FAILED!!!" << std::endl;
            std::cerr << tsl::type_name<Vec>() << std::endl;
            std::cerr << "expected_result: " << std::bitset<64>{(unsigned long long)expected_result} << std::endl;
            std::cerr << "test_result: " << std::bitset<64>{(unsigned long long)mask_integral} << std::endl;
          }
          return test_helper.validate();
        }

    }
    template<VectorProcessingStyle Vec>
    bool test_to_integral_mask_match_zero_to_vec_count() {
        using namespace tsl;
        using T = std::conditional_t<std::is_same_v<typename Vec::base_type, typename Vec::mask_type>, typename Vec::base_type, typename Vec::offset_base_type>;
        using CustomVecT = typename Vec::transform_extension<T>;
        bool allOk = true;
        // For Vec::mask_type == Vec::register_type testing
        std::array< T, CustomVecT::vector_element_count() > pseudo_mask;
        typename CustomVecT::mask_type vec_mask;
        for(std::size_t i = 0; i < CustomVecT::vector_element_count() + 1; i++) {
          // To check if we are at AVX512/Scalar or any register type mask
          if constexpr (std::is_same_v<bool, typename Vec::mask_type>) {
              // e.g. Scalar (bool)
              vec_mask = false;
              for ( std::size_t j = 0; j < i; ++j ) {
                vec_mask = (vec_mask << 1) | 0b1;
              }
          } else if constexpr (std::is_same_v<typename Vec::mask_type, typename Vec::imask_type>) {
              // // e.g. AVX512
              vec_mask = 0;
              typename Vec::mask_type one = 0b1;
              for ( std::size_t j = 0; j < i; ++j ) {
                vec_mask |= one << j;
              }
          } else {
              // e.g. SSE, AVX2
              pseudo_mask.fill( 0 );
              T val = -1;
              for ( std::size_t j = 0; j < i; ++j ) {
                pseudo_mask[ j ] = val;
              }
              vec_mask = loadu<CustomVecT>( pseudo_mask.data() );
          }
          auto mask_integral = to_integral<CustomVecT>( vec_mask );
          std::size_t matches = 0;
          for ( std::size_t k = 0; k < CustomVecT::vector_element_count(); ++k ) {
            if(((mask_integral >> k) & 0b1) == 1 ) {
              ++matches;
            }
          }
          allOk &= (matches == i);
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_to_vector_no_mask() {
        using namespace tsl;
        using T = typename Vec::base_type;
        typename Vec::mask_type mask = to_mask<Vec>(integral_all_false<Vec>());
        auto vec = to_vector<Vec>(mask);

        testing::test_memory_helper_t<Vec> test_helper{Vec::vector_element_count(), false};
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();

        storeu<Vec>(reference_result_ptr, set_zero<Vec>());
        storeu<Vec>(test_result_ptr, vec);
        test_helper.synchronize();
        return test_helper.validate();

    }
    template<VectorProcessingStyle Vec>
    bool test_to_vector_full_mask() {
        using namespace tsl;
        using T = typename Vec::base_type;
        typename Vec::mask_type mask = to_mask<Vec>(integral_all_true<Vec>());
        auto vec = to_vector<Vec>(mask);

        testing::test_memory_helper_t<Vec> test_helper{Vec::vector_element_count(), false};
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();

        storeu<Vec>(reference_result_ptr, inv<Vec>(set_zero<Vec>()));
        storeu<Vec>(test_result_ptr, vec);
        test_helper.synchronize();
        return test_helper.validate();

    }
}

TEST_CASE("Testing primitive 'imask_population_count' for scalar", "[imask_population_count],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_imask_population_count_default<simd<double, scalar>>());

        CHECK(test_imask_population_count_default<simd<float, scalar>>());

        CHECK(test_imask_population_count_default<simd<int16_t, scalar>>());

        CHECK(test_imask_population_count_default<simd<int32_t, scalar>>());

        CHECK(test_imask_population_count_default<simd<int64_t, scalar>>());

        CHECK(test_imask_population_count_default<simd<int8_t, scalar>>());

        CHECK(test_imask_population_count_default<simd<uint16_t, scalar>>());

        CHECK(test_imask_population_count_default<simd<uint32_t, scalar>>());

        CHECK(test_imask_population_count_default<simd<uint64_t, scalar>>());

        CHECK(test_imask_population_count_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'imask_population_count' for sse", "[imask_population_count],[sse]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_imask_population_count_default<simd<double, sse>>());

        CHECK(test_imask_population_count_default<simd<float, sse>>());

        CHECK(test_imask_population_count_default<simd<int16_t, sse>>());

        CHECK(test_imask_population_count_default<simd<int32_t, sse>>());

        CHECK(test_imask_population_count_default<simd<int64_t, sse>>());

        CHECK(test_imask_population_count_default<simd<int8_t, sse>>());

        CHECK(test_imask_population_count_default<simd<uint16_t, sse>>());

        CHECK(test_imask_population_count_default<simd<uint32_t, sse>>());

        CHECK(test_imask_population_count_default<simd<uint64_t, sse>>());

        CHECK(test_imask_population_count_default<simd<uint8_t, sse>>());

    }
}
TEST_CASE("Testing primitive 'to_integral' for scalar", "[to_integral],[scalar]") {
    using namespace tsl;
    SECTION("mask_match_alternate") {
        CHECK(test_to_integral_mask_match_alternate<simd<double, scalar>>());

        CHECK(test_to_integral_mask_match_alternate<simd<float, scalar>>());

        CHECK(test_to_integral_mask_match_alternate<simd<int16_t, scalar>>());

        CHECK(test_to_integral_mask_match_alternate<simd<int32_t, scalar>>());

        CHECK(test_to_integral_mask_match_alternate<simd<int64_t, scalar>>());

        CHECK(test_to_integral_mask_match_alternate<simd<int8_t, scalar>>());

        CHECK(test_to_integral_mask_match_alternate<simd<uint16_t, scalar>>());

        CHECK(test_to_integral_mask_match_alternate<simd<uint32_t, scalar>>());

        CHECK(test_to_integral_mask_match_alternate<simd<uint64_t, scalar>>());

        CHECK(test_to_integral_mask_match_alternate<simd<uint8_t, scalar>>());

    }
    SECTION("mask_match_zero_to_vec_count") {
        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<double, scalar>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<float, scalar>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<int16_t, scalar>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<int32_t, scalar>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<int64_t, scalar>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<int8_t, scalar>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<uint16_t, scalar>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<uint32_t, scalar>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<uint64_t, scalar>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'to_integral' for sse", "[to_integral],[sse]") {
    using namespace tsl;
    SECTION("mask_match_alternate") {
        CHECK(test_to_integral_mask_match_alternate<simd<double, sse>>());

        CHECK(test_to_integral_mask_match_alternate<simd<float, sse>>());

        CHECK(test_to_integral_mask_match_alternate<simd<int16_t, sse>>());

        CHECK(test_to_integral_mask_match_alternate<simd<int32_t, sse>>());

        CHECK(test_to_integral_mask_match_alternate<simd<int64_t, sse>>());

        CHECK(test_to_integral_mask_match_alternate<simd<int8_t, sse>>());

        CHECK(test_to_integral_mask_match_alternate<simd<uint16_t, sse>>());

        CHECK(test_to_integral_mask_match_alternate<simd<uint32_t, sse>>());

        CHECK(test_to_integral_mask_match_alternate<simd<uint64_t, sse>>());

        CHECK(test_to_integral_mask_match_alternate<simd<uint8_t, sse>>());

    }
    SECTION("mask_match_zero_to_vec_count") {
        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<double, sse>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<float, sse>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<int16_t, sse>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<int32_t, sse>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<int64_t, sse>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<int8_t, sse>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<uint16_t, sse>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<uint32_t, sse>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<uint64_t, sse>>());

        CHECK(test_to_integral_mask_match_zero_to_vec_count<simd<uint8_t, sse>>());

    }
}
TEST_CASE("Testing primitive 'to_vector' for scalar", "[to_vector],[scalar]") {
    using namespace tsl;
    SECTION("no_mask") {
        WARN("Primitive to_vector not implemented for scalar");
    }
    SECTION("full_mask") {
        WARN("Primitive to_vector not implemented for scalar");
    }
}
TEST_CASE("Testing primitive 'to_vector' for sse", "[to_vector],[sse]") {
    using namespace tsl;
    SECTION("no_mask") {
        CHECK(test_to_vector_no_mask<simd<double, sse>>());

        CHECK(test_to_vector_no_mask<simd<float, sse>>());

        CHECK(test_to_vector_no_mask<simd<int16_t, sse>>());

        CHECK(test_to_vector_no_mask<simd<int32_t, sse>>());

        CHECK(test_to_vector_no_mask<simd<int64_t, sse>>());

        CHECK(test_to_vector_no_mask<simd<int8_t, sse>>());

        CHECK(test_to_vector_no_mask<simd<uint16_t, sse>>());

        CHECK(test_to_vector_no_mask<simd<uint32_t, sse>>());

        CHECK(test_to_vector_no_mask<simd<uint64_t, sse>>());

        CHECK(test_to_vector_no_mask<simd<uint8_t, sse>>());

    }
    SECTION("full_mask") {
        CHECK(test_to_vector_full_mask<simd<double, sse>>());

        CHECK(test_to_vector_full_mask<simd<float, sse>>());

        CHECK(test_to_vector_full_mask<simd<int16_t, sse>>());

        CHECK(test_to_vector_full_mask<simd<int32_t, sse>>());

        CHECK(test_to_vector_full_mask<simd<int64_t, sse>>());

        CHECK(test_to_vector_full_mask<simd<int8_t, sse>>());

        CHECK(test_to_vector_full_mask<simd<uint16_t, sse>>());

        CHECK(test_to_vector_full_mask<simd<uint32_t, sse>>());

        CHECK(test_to_vector_full_mask<simd<uint64_t, sse>>());

        CHECK(test_to_vector_full_mask<simd<uint8_t, sse>>());

    }
}

