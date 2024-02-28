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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/src/test/ls_unit_test.cpp
 * \date 2024-02-28
 * \brief Unit test file for TSL Primitives using Catch2
 * \note
 *
 */

#include <tslintrin.hpp>
#include <cstddef>
#include <algorithm>
#include <limits>
#include <cstring>
#include <type_traits>
#include <cmath>
#include "test_functions.hpp"

namespace tsl {
    template<VectorProcessingStyle Vec>
    bool test_set1_default() {
        using namespace tsl;
        std::size_t element_count = 1024;
        bool allOk = true;
        testing::test_memory_helper_t<Vec> test_helper{Vec::vector_element_count(), false};
        const std::size_t limit = std::min((std::size_t) 4096, (std::size_t) std::numeric_limits<typename Vec::base_type>::max());
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < limit; ++i) {
          auto vec = set1<Vec>(i);
          for(std::size_t j = 0; j < Vec::vector_element_count(); j++) {
              reference_result_ptr[j] = i;
          }
          allOk &= test_helper.validate_simd_register(vec);
        }
        const auto maxval = std::numeric_limits<typename Vec::base_type>::max();
        auto max_vec = set1<Vec>(maxval);
        for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
          reference_result_ptr[i] = maxval;
        }
        allOk &= test_helper.validate_simd_register(max_vec);
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_store_default() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{Vec::vector_element_count(), true};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
          for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[j-i] = i;
          }
          auto loaded = set1<Vec>(i);
          store<Vec>(test_result_ptr, loaded);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_storeu_default() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{Vec::vector_element_count(), false};
        bool allOk = true;
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
          for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[j-i] = i;
          }
          auto loaded = set1<Vec>(i);
          storeu<Vec>(test_result_ptr, loaded);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_compress_store_no_mask() {
        using namespace tsl;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
        bool allOk = true;
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        typename Vec::imask_type mask = 0;
        auto zero_vec = set1<Vec>(0);
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i += Vec::vector_element_count()){
          storeu<Vec>(reference_result_ptr, zero_vec);
          storeu<Vec>(test_result_ptr, zero_vec);

          auto vec = loadu<Vec>(&test_data_ptr[i]);
          compress_store<Vec>(mask, test_result_ptr, vec);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_compress_store_full_mask() {
        using namespace tsl;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        typename Vec::imask_type mask = -1;
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i += Vec::vector_element_count()){
          auto vec_a = loadu<Vec>(&reference_data_ptr[i]);
          storeu<Vec>(reference_result_ptr, vec_a);

          auto vec_b = loadu<Vec>(&test_data_ptr[i]);
          compress_store<Vec>(mask, test_result_ptr, vec_b);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_load_default() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), true};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
          for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[j-i] = reference_data_ptr[j];
          }
          auto loaded = load<Vec>(&test_data_ptr[i]);
          storeu<Vec>(test_result_ptr, loaded);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_loadu_default() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); ++i) {
          for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[j-i] = reference_data_ptr[j];
          }
          auto loaded = loadu<Vec>(&test_data_ptr[i]);
          storeu<Vec>(test_result_ptr, loaded);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_set_default() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
          for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[j-i] = reference_data_ptr[j];
          }
          auto loaded = testing::set_call_helper_t<Vec>::call_set(&test_data_ptr[i]);
          storeu<Vec>(test_result_ptr, loaded);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_set_zero_default() {
        using namespace tsl;
        testing::test_memory_helper_t<Vec> test_helper{ Vec::vector_element_count(), false };
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();
        storeu<Vec>(reference_result_ptr, set1<Vec>(0));
        storeu<Vec>(test_result_ptr, set_zero<Vec>());
        test_helper.synchronize();
        return test_helper.validate();

    }
    template<VectorProcessingStyle Vec>
    bool test_extract_value_default() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, 1, false};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count; i += Vec::vector_element_count()){
          *reference_result_ptr = reference_data_ptr[i];

          auto vec = loadu<Vec>(&test_data_ptr[i]);
          *test_result_ptr = extract_value<Vec, 0>(vec);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec, VectorProcessingStyle IndicesType>
    bool test_gather_default() {
        using namespace tsl;
        constexpr size_t test_mem_size = 256;
        constexpr size_t test_mem_offset = test_mem_size / 2;
        constexpr size_t iteration_count = 16;
        testing::test_memory_helper_t<Vec> test_helper{test_mem_size, Vec::vector_element_count(), true, testing::seq_init_start_0<typename Vec::base_type>};
        testing::test_memory_helper_t<IndicesType> test_helper_indices{
            iteration_count * Vec::vector_element_count(), 0, true,
            testing::rnd_init_bounded<typename IndicesType::base_type>,
            (typename IndicesType::base_type)(std::is_signed_v<typename IndicesType::base_type> ? -test_mem_offset : 0),
            (typename IndicesType::base_type)(test_mem_offset - 1)
        };
        for(size_t i = 0; i < iteration_count; i++) {
            for(size_t j = 0; j < Vec::vector_element_count(); j++) {
                test_helper.result_ref()[j] = test_helper.data_ref()[test_helper_indices.data_ref()[i * Vec::vector_element_count() + j] + test_mem_offset];
            }
            auto indices = loadu<IndicesType>(test_helper_indices.data_target() + (i * Vec::vector_element_count()));
            auto result = gather<Vec, IndicesType>(test_helper.data_target() + test_mem_offset, indices);
            store<Vec>(test_helper.result_target(), result);
            test_helper.synchronize();
            if (!test_helper.validate()) return false;
        }
        return true;

    }
    template<VectorProcessingStyle Vec>
    bool test_masked_set1_default() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        bool allOk = true;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();
        auto test_data_ptr = test_helper.data_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
            T random_value;
            testing::rnd_init(&random_value, 1);
            typename Vec::imask_type random_integral;
            testing::rnd_init(&random_integral, 1);
            auto vec_src = loadu<Vec>( &test_data_ptr[i] );
            auto result = masked_set1<Vec>(vec_src, random_integral, random_value);
            for(std::size_t j = 0; j < Vec::vector_element_count(); j++) {
                reference_result_ptr[j] = (random_integral >> j) & 1 ? random_value : test_data_ptr[i + j];
            }
            allOk &= test_helper.validate_simd_register(result);
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_sequence_default() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t count = Vec::vector_element_count();

        testing::test_memory_helper_t<Vec> test_helper{count, false};
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();

        typename Vec::base_type data[count];
        for(std::size_t i = 0; i < count; i++){
          data[i] = i;
        }
        auto vec = loadu<Vec>(data);
        storeu<Vec>(reference_result_ptr, vec);

        auto vec_test = sequence<Vec>();
        storeu<Vec>(test_result_ptr, vec_test);

        test_helper.synchronize();
        return test_helper.validate();

    }
    template<VectorProcessingStyle Vec>
    bool test_to_array_default() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, 1, false};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i += Vec::vector_element_count()){
          *reference_result_ptr = Vec::vector_element_count();
          auto vec = loadu<Vec>(&test_data_ptr[i]);
          auto result_arr = to_array<Vec>(vec);

          std::size_t hit = 0;
          for(std::size_t j = 0, k = i; j < Vec::vector_element_count(); j++, k++){
            if(result_arr[j] == reference_data_ptr[k]){
              hit ++;
            }
          }
          *test_result_ptr = hit;
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_custom_sequence_default() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;

        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
        auto reference_data_ptr = test_helper.data_ref();
        auto test_data_ptr = test_helper.data_target();

        bool allOk = true;
        for(std::size_t i = 0; i < element_count - 1; i++) {
          auto vec = custom_sequence<Vec>(test_data_ptr[i], test_data_ptr[i+1]);
          auto test_arr = to_array<Vec>(vec);
          T data [Vec::vector_element_count()];

          if constexpr (std::is_integral<T>::value){
            std::size_t idx = 0;
            for(T j = reference_data_ptr[i]; idx < Vec::vector_element_count(); j+= reference_data_ptr[i+1]){
              data[idx++] = j;
            }
            for(std::size_t l = 0; l < Vec::vector_element_count(); l++){
              allOk &= (data[l] == test_arr[l]);
            }
          }else{
            // Kahan sum alg
            T sum = reference_data_ptr[i], c = 0.0;
            data[0] = reference_data_ptr[i];
            std::size_t idx = 1;
            while(idx < Vec::vector_element_count()){
              T y  = reference_data_ptr[i+1] - c;
              T t = sum + y;
              c = (t - sum) - y;
              sum = t;
              data[idx++] = sum;
            }
            for(std::size_t l = 0; l < Vec::vector_element_count(); l++){
              // Checking with Tolerance
              allOk &= (std::fabs(data[l] - test_arr[l]) < 1e-3);
            }
          }
        }
        return allOk;

    }
}

TEST_CASE("Testing primitive 'set1' for scalar", "[set1],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_set1_default<simd<double, scalar>>());

        CHECK(test_set1_default<simd<float, scalar>>());

        CHECK(test_set1_default<simd<int16_t, scalar>>());

        CHECK(test_set1_default<simd<int32_t, scalar>>());

        CHECK(test_set1_default<simd<int64_t, scalar>>());

        CHECK(test_set1_default<simd<int8_t, scalar>>());

        CHECK(test_set1_default<simd<uint16_t, scalar>>());

        CHECK(test_set1_default<simd<uint32_t, scalar>>());

        CHECK(test_set1_default<simd<uint64_t, scalar>>());

        CHECK(test_set1_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'set1' for avx2", "[set1],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_set1_default<simd<double, avx2>>());

        CHECK(test_set1_default<simd<float, avx2>>());

        CHECK(test_set1_default<simd<int16_t, avx2>>());

        CHECK(test_set1_default<simd<int32_t, avx2>>());

        CHECK(test_set1_default<simd<int64_t, avx2>>());

        CHECK(test_set1_default<simd<int8_t, avx2>>());

        CHECK(test_set1_default<simd<uint16_t, avx2>>());

        CHECK(test_set1_default<simd<uint32_t, avx2>>());

        CHECK(test_set1_default<simd<uint64_t, avx2>>());

        CHECK(test_set1_default<simd<uint8_t, avx2>>());

    }
}
TEST_CASE("Testing primitive 'store' for scalar", "[store],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_store_default<simd<double, scalar>>());

        CHECK(test_store_default<simd<float, scalar>>());

        CHECK(test_store_default<simd<int16_t, scalar>>());

        CHECK(test_store_default<simd<int32_t, scalar>>());

        CHECK(test_store_default<simd<int64_t, scalar>>());

        CHECK(test_store_default<simd<int8_t, scalar>>());

        CHECK(test_store_default<simd<uint16_t, scalar>>());

        CHECK(test_store_default<simd<uint32_t, scalar>>());

        CHECK(test_store_default<simd<uint64_t, scalar>>());

        CHECK(test_store_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'store' for avx2", "[store],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_store_default<simd<double, avx2>>());

        CHECK(test_store_default<simd<float, avx2>>());

        CHECK(test_store_default<simd<int16_t, avx2>>());

        CHECK(test_store_default<simd<int32_t, avx2>>());

        CHECK(test_store_default<simd<int64_t, avx2>>());

        CHECK(test_store_default<simd<int8_t, avx2>>());

        CHECK(test_store_default<simd<uint16_t, avx2>>());

        CHECK(test_store_default<simd<uint32_t, avx2>>());

        CHECK(test_store_default<simd<uint64_t, avx2>>());

        CHECK(test_store_default<simd<uint8_t, avx2>>());

    }
}
TEST_CASE("Testing primitive 'storeu' for scalar", "[storeu],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_storeu_default<simd<double, scalar>>());

        CHECK(test_storeu_default<simd<float, scalar>>());

        CHECK(test_storeu_default<simd<int16_t, scalar>>());

        CHECK(test_storeu_default<simd<int32_t, scalar>>());

        CHECK(test_storeu_default<simd<int64_t, scalar>>());

        CHECK(test_storeu_default<simd<int8_t, scalar>>());

        CHECK(test_storeu_default<simd<uint16_t, scalar>>());

        CHECK(test_storeu_default<simd<uint32_t, scalar>>());

        CHECK(test_storeu_default<simd<uint64_t, scalar>>());

        CHECK(test_storeu_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'storeu' for avx2", "[storeu],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_storeu_default<simd<double, avx2>>());

        CHECK(test_storeu_default<simd<float, avx2>>());

        CHECK(test_storeu_default<simd<int16_t, avx2>>());

        CHECK(test_storeu_default<simd<int32_t, avx2>>());

        CHECK(test_storeu_default<simd<int64_t, avx2>>());

        CHECK(test_storeu_default<simd<int8_t, avx2>>());

        CHECK(test_storeu_default<simd<uint16_t, avx2>>());

        CHECK(test_storeu_default<simd<uint32_t, avx2>>());

        CHECK(test_storeu_default<simd<uint64_t, avx2>>());

        CHECK(test_storeu_default<simd<uint8_t, avx2>>());

    }
}
TEST_CASE("Testing primitive 'compress_store' for scalar", "[compress_store],[scalar]") {
    using namespace tsl;
    SECTION("no_mask") {
        CHECK(test_compress_store_no_mask<simd<double, scalar>>());

        CHECK(test_compress_store_no_mask<simd<float, scalar>>());

        CHECK(test_compress_store_no_mask<simd<int16_t, scalar>>());

        CHECK(test_compress_store_no_mask<simd<int32_t, scalar>>());

        CHECK(test_compress_store_no_mask<simd<int64_t, scalar>>());

        CHECK(test_compress_store_no_mask<simd<int8_t, scalar>>());

        CHECK(test_compress_store_no_mask<simd<uint16_t, scalar>>());

        CHECK(test_compress_store_no_mask<simd<uint32_t, scalar>>());

        CHECK(test_compress_store_no_mask<simd<uint64_t, scalar>>());

        CHECK(test_compress_store_no_mask<simd<uint8_t, scalar>>());

    }
    SECTION("full_mask") {
        CHECK(test_compress_store_full_mask<simd<double, scalar>>());

        CHECK(test_compress_store_full_mask<simd<float, scalar>>());

        CHECK(test_compress_store_full_mask<simd<int16_t, scalar>>());

        CHECK(test_compress_store_full_mask<simd<int32_t, scalar>>());

        CHECK(test_compress_store_full_mask<simd<int64_t, scalar>>());

        CHECK(test_compress_store_full_mask<simd<int8_t, scalar>>());

        CHECK(test_compress_store_full_mask<simd<uint16_t, scalar>>());

        CHECK(test_compress_store_full_mask<simd<uint32_t, scalar>>());

        CHECK(test_compress_store_full_mask<simd<uint64_t, scalar>>());

        CHECK(test_compress_store_full_mask<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'compress_store' for avx2", "[compress_store],[avx2]") {
    using namespace tsl;
    SECTION("no_mask") {
        WARN("Primitive compress_store not implemented for avx2");
    }
    SECTION("full_mask") {
        WARN("Primitive compress_store not implemented for avx2");
    }
}
TEST_CASE("Testing primitive 'load' for scalar", "[load],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_load_default<simd<double, scalar>>());

        CHECK(test_load_default<simd<float, scalar>>());

        CHECK(test_load_default<simd<int16_t, scalar>>());

        CHECK(test_load_default<simd<int32_t, scalar>>());

        CHECK(test_load_default<simd<int64_t, scalar>>());

        CHECK(test_load_default<simd<int8_t, scalar>>());

        CHECK(test_load_default<simd<uint16_t, scalar>>());

        CHECK(test_load_default<simd<uint32_t, scalar>>());

        CHECK(test_load_default<simd<uint64_t, scalar>>());

        CHECK(test_load_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'load' for avx2", "[load],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_load_default<simd<double, avx2>>());

        CHECK(test_load_default<simd<float, avx2>>());

        CHECK(test_load_default<simd<int16_t, avx2>>());

        CHECK(test_load_default<simd<int32_t, avx2>>());

        CHECK(test_load_default<simd<int64_t, avx2>>());

        CHECK(test_load_default<simd<int8_t, avx2>>());

        CHECK(test_load_default<simd<uint16_t, avx2>>());

        CHECK(test_load_default<simd<uint32_t, avx2>>());

        CHECK(test_load_default<simd<uint64_t, avx2>>());

        CHECK(test_load_default<simd<uint8_t, avx2>>());

    }
}
TEST_CASE("Testing primitive 'loadu' for scalar", "[loadu],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_loadu_default<simd<double, scalar>>());

        CHECK(test_loadu_default<simd<float, scalar>>());

        CHECK(test_loadu_default<simd<int16_t, scalar>>());

        CHECK(test_loadu_default<simd<int32_t, scalar>>());

        CHECK(test_loadu_default<simd<int64_t, scalar>>());

        CHECK(test_loadu_default<simd<int8_t, scalar>>());

        CHECK(test_loadu_default<simd<uint16_t, scalar>>());

        CHECK(test_loadu_default<simd<uint32_t, scalar>>());

        CHECK(test_loadu_default<simd<uint64_t, scalar>>());

        CHECK(test_loadu_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'loadu' for avx2", "[loadu],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_loadu_default<simd<double, avx2>>());

        CHECK(test_loadu_default<simd<float, avx2>>());

        CHECK(test_loadu_default<simd<int16_t, avx2>>());

        CHECK(test_loadu_default<simd<int32_t, avx2>>());

        CHECK(test_loadu_default<simd<int64_t, avx2>>());

        CHECK(test_loadu_default<simd<int8_t, avx2>>());

        CHECK(test_loadu_default<simd<uint16_t, avx2>>());

        CHECK(test_loadu_default<simd<uint32_t, avx2>>());

        CHECK(test_loadu_default<simd<uint64_t, avx2>>());

        CHECK(test_loadu_default<simd<uint8_t, avx2>>());

    }
}
TEST_CASE("Testing primitive 'set' for scalar", "[set],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_set_default<simd<double, scalar>>());

        CHECK(test_set_default<simd<float, scalar>>());

        CHECK(test_set_default<simd<int16_t, scalar>>());

        CHECK(test_set_default<simd<int32_t, scalar>>());

        CHECK(test_set_default<simd<int64_t, scalar>>());

        CHECK(test_set_default<simd<int8_t, scalar>>());

        CHECK(test_set_default<simd<uint16_t, scalar>>());

        CHECK(test_set_default<simd<uint32_t, scalar>>());

        CHECK(test_set_default<simd<uint64_t, scalar>>());

        CHECK(test_set_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'set' for avx2", "[set],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_set_default<simd<double, avx2>>());

        CHECK(test_set_default<simd<float, avx2>>());

        CHECK(test_set_default<simd<int16_t, avx2>>());

        CHECK(test_set_default<simd<int32_t, avx2>>());

        CHECK(test_set_default<simd<int64_t, avx2>>());

        CHECK(test_set_default<simd<int8_t, avx2>>());

        CHECK(test_set_default<simd<uint16_t, avx2>>());

        CHECK(test_set_default<simd<uint32_t, avx2>>());

        CHECK(test_set_default<simd<uint64_t, avx2>>());

        CHECK(test_set_default<simd<uint8_t, avx2>>());

    }
}
TEST_CASE("Testing primitive 'set_zero' for scalar", "[set_zero],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_set_zero_default<simd<double, scalar>>());

        CHECK(test_set_zero_default<simd<float, scalar>>());

        CHECK(test_set_zero_default<simd<int16_t, scalar>>());

        CHECK(test_set_zero_default<simd<int32_t, scalar>>());

        CHECK(test_set_zero_default<simd<int64_t, scalar>>());

        CHECK(test_set_zero_default<simd<int8_t, scalar>>());

        CHECK(test_set_zero_default<simd<uint16_t, scalar>>());

        CHECK(test_set_zero_default<simd<uint32_t, scalar>>());

        CHECK(test_set_zero_default<simd<uint64_t, scalar>>());

        CHECK(test_set_zero_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'set_zero' for avx2", "[set_zero],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_set_zero_default<simd<double, avx2>>());

        CHECK(test_set_zero_default<simd<float, avx2>>());

        CHECK(test_set_zero_default<simd<int16_t, avx2>>());

        CHECK(test_set_zero_default<simd<int32_t, avx2>>());

        CHECK(test_set_zero_default<simd<int64_t, avx2>>());

        CHECK(test_set_zero_default<simd<int8_t, avx2>>());

        CHECK(test_set_zero_default<simd<uint16_t, avx2>>());

        CHECK(test_set_zero_default<simd<uint32_t, avx2>>());

        CHECK(test_set_zero_default<simd<uint64_t, avx2>>());

        CHECK(test_set_zero_default<simd<uint8_t, avx2>>());

    }
}
TEST_CASE("Testing primitive 'extract_value' for scalar", "[extract_value],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_extract_value_default<simd<double, scalar>>());

        CHECK(test_extract_value_default<simd<float, scalar>>());

        CHECK(test_extract_value_default<simd<int16_t, scalar>>());

        CHECK(test_extract_value_default<simd<int32_t, scalar>>());

        CHECK(test_extract_value_default<simd<int64_t, scalar>>());

        CHECK(test_extract_value_default<simd<int8_t, scalar>>());

        CHECK(test_extract_value_default<simd<uint16_t, scalar>>());

        CHECK(test_extract_value_default<simd<uint32_t, scalar>>());

        CHECK(test_extract_value_default<simd<uint64_t, scalar>>());

        CHECK(test_extract_value_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'extract_value' for avx2", "[extract_value],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_extract_value_default<simd<double, avx2>>());

        CHECK(test_extract_value_default<simd<float, avx2>>());

        CHECK(test_extract_value_default<simd<int16_t, avx2>>());

        CHECK(test_extract_value_default<simd<int32_t, avx2>>());

        CHECK(test_extract_value_default<simd<int64_t, avx2>>());

        CHECK(test_extract_value_default<simd<int8_t, avx2>>());

        CHECK(test_extract_value_default<simd<uint16_t, avx2>>());

        CHECK(test_extract_value_default<simd<uint32_t, avx2>>());

        CHECK(test_extract_value_default<simd<uint64_t, avx2>>());

        CHECK(test_extract_value_default<simd<uint8_t, avx2>>());

    }
}
TEST_CASE("Testing primitive 'gather' for scalar", "[gather],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_gather_default<simd<double, scalar>, simd<int8_t, scalar>>());
        CHECK(test_gather_default<simd<double, scalar>, simd<uint8_t, scalar>>());
        CHECK(test_gather_default<simd<double, scalar>, simd<int16_t, scalar>>());
        CHECK(test_gather_default<simd<double, scalar>, simd<uint16_t, scalar>>());
        CHECK(test_gather_default<simd<double, scalar>, simd<int32_t, scalar>>());
        CHECK(test_gather_default<simd<double, scalar>, simd<uint32_t, scalar>>());
        CHECK(test_gather_default<simd<double, scalar>, simd<int64_t, scalar>>());
        CHECK(test_gather_default<simd<double, scalar>, simd<uint64_t, scalar>>());

        CHECK(test_gather_default<simd<float, scalar>, simd<int8_t, scalar>>());
        CHECK(test_gather_default<simd<float, scalar>, simd<uint8_t, scalar>>());
        CHECK(test_gather_default<simd<float, scalar>, simd<int16_t, scalar>>());
        CHECK(test_gather_default<simd<float, scalar>, simd<uint16_t, scalar>>());
        CHECK(test_gather_default<simd<float, scalar>, simd<int32_t, scalar>>());
        CHECK(test_gather_default<simd<float, scalar>, simd<uint32_t, scalar>>());
        CHECK(test_gather_default<simd<float, scalar>, simd<int64_t, scalar>>());
        CHECK(test_gather_default<simd<float, scalar>, simd<uint64_t, scalar>>());

        CHECK(test_gather_default<simd<int16_t, scalar>, simd<int8_t, scalar>>());
        CHECK(test_gather_default<simd<int16_t, scalar>, simd<uint8_t, scalar>>());
        CHECK(test_gather_default<simd<int16_t, scalar>, simd<int16_t, scalar>>());
        CHECK(test_gather_default<simd<int16_t, scalar>, simd<uint16_t, scalar>>());
        CHECK(test_gather_default<simd<int16_t, scalar>, simd<int32_t, scalar>>());
        CHECK(test_gather_default<simd<int16_t, scalar>, simd<uint32_t, scalar>>());
        CHECK(test_gather_default<simd<int16_t, scalar>, simd<int64_t, scalar>>());
        CHECK(test_gather_default<simd<int16_t, scalar>, simd<uint64_t, scalar>>());

        CHECK(test_gather_default<simd<int32_t, scalar>, simd<int8_t, scalar>>());
        CHECK(test_gather_default<simd<int32_t, scalar>, simd<uint8_t, scalar>>());
        CHECK(test_gather_default<simd<int32_t, scalar>, simd<int16_t, scalar>>());
        CHECK(test_gather_default<simd<int32_t, scalar>, simd<uint16_t, scalar>>());
        CHECK(test_gather_default<simd<int32_t, scalar>, simd<int32_t, scalar>>());
        CHECK(test_gather_default<simd<int32_t, scalar>, simd<uint32_t, scalar>>());
        CHECK(test_gather_default<simd<int32_t, scalar>, simd<int64_t, scalar>>());
        CHECK(test_gather_default<simd<int32_t, scalar>, simd<uint64_t, scalar>>());

        CHECK(test_gather_default<simd<int64_t, scalar>, simd<int8_t, scalar>>());
        CHECK(test_gather_default<simd<int64_t, scalar>, simd<uint8_t, scalar>>());
        CHECK(test_gather_default<simd<int64_t, scalar>, simd<int16_t, scalar>>());
        CHECK(test_gather_default<simd<int64_t, scalar>, simd<uint16_t, scalar>>());
        CHECK(test_gather_default<simd<int64_t, scalar>, simd<int32_t, scalar>>());
        CHECK(test_gather_default<simd<int64_t, scalar>, simd<uint32_t, scalar>>());
        CHECK(test_gather_default<simd<int64_t, scalar>, simd<int64_t, scalar>>());
        CHECK(test_gather_default<simd<int64_t, scalar>, simd<uint64_t, scalar>>());

        CHECK(test_gather_default<simd<int8_t, scalar>, simd<int8_t, scalar>>());
        CHECK(test_gather_default<simd<int8_t, scalar>, simd<uint8_t, scalar>>());
        CHECK(test_gather_default<simd<int8_t, scalar>, simd<int16_t, scalar>>());
        CHECK(test_gather_default<simd<int8_t, scalar>, simd<uint16_t, scalar>>());
        CHECK(test_gather_default<simd<int8_t, scalar>, simd<int32_t, scalar>>());
        CHECK(test_gather_default<simd<int8_t, scalar>, simd<uint32_t, scalar>>());
        CHECK(test_gather_default<simd<int8_t, scalar>, simd<int64_t, scalar>>());
        CHECK(test_gather_default<simd<int8_t, scalar>, simd<uint64_t, scalar>>());

        CHECK(test_gather_default<simd<uint16_t, scalar>, simd<int8_t, scalar>>());
        CHECK(test_gather_default<simd<uint16_t, scalar>, simd<uint8_t, scalar>>());
        CHECK(test_gather_default<simd<uint16_t, scalar>, simd<int16_t, scalar>>());
        CHECK(test_gather_default<simd<uint16_t, scalar>, simd<uint16_t, scalar>>());
        CHECK(test_gather_default<simd<uint16_t, scalar>, simd<int32_t, scalar>>());
        CHECK(test_gather_default<simd<uint16_t, scalar>, simd<uint32_t, scalar>>());
        CHECK(test_gather_default<simd<uint16_t, scalar>, simd<int64_t, scalar>>());
        CHECK(test_gather_default<simd<uint16_t, scalar>, simd<uint64_t, scalar>>());

        CHECK(test_gather_default<simd<uint32_t, scalar>, simd<int8_t, scalar>>());
        CHECK(test_gather_default<simd<uint32_t, scalar>, simd<uint8_t, scalar>>());
        CHECK(test_gather_default<simd<uint32_t, scalar>, simd<int16_t, scalar>>());
        CHECK(test_gather_default<simd<uint32_t, scalar>, simd<uint16_t, scalar>>());
        CHECK(test_gather_default<simd<uint32_t, scalar>, simd<int32_t, scalar>>());
        CHECK(test_gather_default<simd<uint32_t, scalar>, simd<uint32_t, scalar>>());
        CHECK(test_gather_default<simd<uint32_t, scalar>, simd<int64_t, scalar>>());
        CHECK(test_gather_default<simd<uint32_t, scalar>, simd<uint64_t, scalar>>());

        CHECK(test_gather_default<simd<uint64_t, scalar>, simd<int8_t, scalar>>());
        CHECK(test_gather_default<simd<uint64_t, scalar>, simd<uint8_t, scalar>>());
        CHECK(test_gather_default<simd<uint64_t, scalar>, simd<int16_t, scalar>>());
        CHECK(test_gather_default<simd<uint64_t, scalar>, simd<uint16_t, scalar>>());
        CHECK(test_gather_default<simd<uint64_t, scalar>, simd<int32_t, scalar>>());
        CHECK(test_gather_default<simd<uint64_t, scalar>, simd<uint32_t, scalar>>());
        CHECK(test_gather_default<simd<uint64_t, scalar>, simd<int64_t, scalar>>());
        CHECK(test_gather_default<simd<uint64_t, scalar>, simd<uint64_t, scalar>>());

        CHECK(test_gather_default<simd<uint8_t, scalar>, simd<int8_t, scalar>>());
        CHECK(test_gather_default<simd<uint8_t, scalar>, simd<uint8_t, scalar>>());
        CHECK(test_gather_default<simd<uint8_t, scalar>, simd<int16_t, scalar>>());
        CHECK(test_gather_default<simd<uint8_t, scalar>, simd<uint16_t, scalar>>());
        CHECK(test_gather_default<simd<uint8_t, scalar>, simd<int32_t, scalar>>());
        CHECK(test_gather_default<simd<uint8_t, scalar>, simd<uint32_t, scalar>>());
        CHECK(test_gather_default<simd<uint8_t, scalar>, simd<int64_t, scalar>>());
        CHECK(test_gather_default<simd<uint8_t, scalar>, simd<uint64_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'gather' for avx2", "[gather],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        WARN("Primitive gather not implemented for avx2");
    }
}
TEST_CASE("Testing primitive 'masked_set1' for scalar", "[masked_set1],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_masked_set1_default<simd<double, scalar>>());

        CHECK(test_masked_set1_default<simd<float, scalar>>());

        CHECK(test_masked_set1_default<simd<int16_t, scalar>>());

        CHECK(test_masked_set1_default<simd<int32_t, scalar>>());

        CHECK(test_masked_set1_default<simd<int64_t, scalar>>());

        CHECK(test_masked_set1_default<simd<int8_t, scalar>>());

        CHECK(test_masked_set1_default<simd<uint16_t, scalar>>());

        CHECK(test_masked_set1_default<simd<uint32_t, scalar>>());

        CHECK(test_masked_set1_default<simd<uint64_t, scalar>>());

        CHECK(test_masked_set1_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'masked_set1' for avx2", "[masked_set1],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        WARN("Primitive masked_set1 not implemented for avx2");
    }
}
TEST_CASE("Testing primitive 'sequence' for scalar", "[sequence],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_sequence_default<simd<double, scalar>>());

        CHECK(test_sequence_default<simd<float, scalar>>());

        CHECK(test_sequence_default<simd<int16_t, scalar>>());

        CHECK(test_sequence_default<simd<int32_t, scalar>>());

        CHECK(test_sequence_default<simd<int64_t, scalar>>());

        CHECK(test_sequence_default<simd<int8_t, scalar>>());

        CHECK(test_sequence_default<simd<uint16_t, scalar>>());

        CHECK(test_sequence_default<simd<uint32_t, scalar>>());

        CHECK(test_sequence_default<simd<uint64_t, scalar>>());

        CHECK(test_sequence_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'sequence' for avx2", "[sequence],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_sequence_default<simd<double, avx2>>());

        CHECK(test_sequence_default<simd<float, avx2>>());

        CHECK(test_sequence_default<simd<int16_t, avx2>>());

        CHECK(test_sequence_default<simd<int32_t, avx2>>());

        CHECK(test_sequence_default<simd<int64_t, avx2>>());

        CHECK(test_sequence_default<simd<int8_t, avx2>>());

        CHECK(test_sequence_default<simd<uint16_t, avx2>>());

        CHECK(test_sequence_default<simd<uint32_t, avx2>>());

        CHECK(test_sequence_default<simd<uint64_t, avx2>>());

        CHECK(test_sequence_default<simd<uint8_t, avx2>>());

    }
}
TEST_CASE("Testing primitive 'to_array' for scalar", "[to_array],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_to_array_default<simd<double, scalar>>());

        CHECK(test_to_array_default<simd<float, scalar>>());

        CHECK(test_to_array_default<simd<int16_t, scalar>>());

        CHECK(test_to_array_default<simd<int32_t, scalar>>());

        CHECK(test_to_array_default<simd<int64_t, scalar>>());

        CHECK(test_to_array_default<simd<int8_t, scalar>>());

        CHECK(test_to_array_default<simd<uint16_t, scalar>>());

        CHECK(test_to_array_default<simd<uint32_t, scalar>>());

        CHECK(test_to_array_default<simd<uint64_t, scalar>>());

        CHECK(test_to_array_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'to_array' for avx2", "[to_array],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        WARN("Primitive to_array not implemented for avx2");
    }
}
TEST_CASE("Testing primitive 'custom_sequence' for scalar", "[custom_sequence],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_custom_sequence_default<simd<double, scalar>>());

        CHECK(test_custom_sequence_default<simd<float, scalar>>());

        CHECK(test_custom_sequence_default<simd<int16_t, scalar>>());

        CHECK(test_custom_sequence_default<simd<int32_t, scalar>>());

        CHECK(test_custom_sequence_default<simd<int64_t, scalar>>());

        CHECK(test_custom_sequence_default<simd<int8_t, scalar>>());

        CHECK(test_custom_sequence_default<simd<uint16_t, scalar>>());

        CHECK(test_custom_sequence_default<simd<uint32_t, scalar>>());

        CHECK(test_custom_sequence_default<simd<uint64_t, scalar>>());

        CHECK(test_custom_sequence_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'custom_sequence' for avx2", "[custom_sequence],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        WARN("Can't run. Required primitive(s) ['to_array<uint8_t,avx2>', 'to_array<uint8_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_array<int8_t,avx2>', 'to_array<int8_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_array<uint16_t,avx2>', 'to_array<uint16_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_array<int16_t,avx2>', 'to_array<int16_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_array<uint32_t,avx2>', 'to_array<uint32_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_array<int32_t,avx2>', 'to_array<int32_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_array<uint64_t,avx2>', 'to_array<uint64_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_array<int64_t,avx2>', 'to_array<int64_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_array<float,avx2>', 'to_array<float,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['to_array<double,avx2>', 'to_array<double,avx2>'] not provided.");
    }
}

