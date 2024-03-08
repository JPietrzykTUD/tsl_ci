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
 * \file /github/workspace/ci/generation/neon/src/test/mask_unit_test.cpp
 * \date 2024-03-08
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
          using T = typename Vec::base_type;
          typename Vec::imask_type expected_result = 0;
          for (size_t i = 0; i < Vec::vector_element_count(); ++i) {
            if ((i % 2) == 0) {
              expected_result |= (1 << i);
            }
          }
          auto transformed = to_integral<Vec>(to_mask<Vec>(expected_result));
          bool ok = (transformed == expected_result);
          if (!ok) {
            std::cerr << "expected: " << std::bitset<sizeof(typename Vec::imask_type) * 8>(expected_result) << std::endl;
            std::cerr << "transformed: " << std::bitset<sizeof(typename Vec::imask_type) * 8>(transformed) << std::endl;
          }
          return ok;
        }

    }
    template<VectorProcessingStyle Vec>
    bool test_to_integral_mask_match_zero_to_vec_count() {
        using namespace tsl;
        if constexpr (std::is_same_v<bool, typename Vec::mask_type>) {
          std::cerr << "implement me" << std::endl;
          return true;
        } else if constexpr (std::is_same_v<typename Vec::mask_type, typename Vec::imask_type>) {
          //we don't need to do anything here since it is a NOP.
          return true;
        } else {
          using T = typename Vec::base_type;
          typename Vec::imask_type expected_result = 0;
          auto transformed = to_integral<Vec>(to_mask<Vec>(expected_result));
          return transformed == expected_result;
        }

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
TEST_CASE("Testing primitive 'imask_population_count' for neon", "[imask_population_count],[neon]") {
    using namespace tsl;
    SECTION("default") {
        WARN("Primitive imask_population_count not implemented for neon");
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
TEST_CASE("Testing primitive 'to_integral' for neon", "[to_integral],[neon]") {
    using namespace tsl;
    SECTION("mask_match_alternate") {
        WARN("Can't run. Required primitive(s) ['to_mask<uint64_t,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<int64_t,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<double,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<int8_t,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<uint8_t,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<int16_t,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<uint16_t,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<int32_t,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<uint32_t,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<float,neon>'] not provided.");
    }
    SECTION("mask_match_zero_to_vec_count") {
        WARN("Can't run. Required primitive(s) ['to_mask<uint64_t,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<int64_t,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<double,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<int8_t,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<uint8_t,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<int16_t,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<uint16_t,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<int32_t,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<uint32_t,neon>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_mask<float,neon>'] not provided.");
    }
}

