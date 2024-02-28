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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/src/test/misc_unit_test.cpp
 * \date 2024-02-28
 * \brief Unit test file for TSL Primitives using Catch2
 * \note
 *
 */

#include <tslintrin.hpp>
#include <cstddef>
#include "test_functions.hpp"

namespace tsl {
    template<VectorProcessingStyle Vec>
    bool test_conflict_default() {
        using namespace tsl;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i += Vec::vector_element_count()){
          std::size_t idx = 0;
          typename Vec::base_type data[Vec::vector_element_count()];
          for (std::size_t k = i; k < i + Vec::vector_element_count(); k++) {
            data[idx] = 0;
            for (std::size_t j = i; j < k; j++) {
              if(reference_data_ptr[j] == reference_data_ptr[k]){
                data[idx] |= (1 << (j - i));
              }
            }
            idx ++;
          }
          auto vec_ref = loadu<Vec>(data);
          storeu<Vec>(reference_result_ptr, vec_ref);

          auto vec = loadu<Vec>(&test_data_ptr[i]);
          auto vec_result = conflict<Vec>(vec);

          storeu<Vec>(test_result_ptr, vec_result);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_imask_conflict_free_default() {
        using namespace tsl;
        using mask_t = typename Vec::imask_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, 1, false};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i += Vec::vector_element_count()){
          mask_t bitmask = 0;
          for (std::size_t k = i; k < i + Vec::vector_element_count(); k++) {
            bool isUnique = true;
            for (std::size_t j = i; j < k; j++) {
              if(reference_data_ptr[j] == reference_data_ptr[k]){
                isUnique = false;
                break;
              }
            }
            if(isUnique) {
              bitmask |= (static_cast<mask_t>(1) << (k - i));
            }
          }
          *reference_result_ptr = bitmask;
          auto vec = loadu<Vec>(&test_data_ptr[i]);
          *test_result_ptr = conflict_free<Vec>(integral_all_true<Vec>(), vec);

          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_imaskz_mov_default() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        bool allOk = true;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();
        auto test_data_ptr = test_helper.data_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
          typename Vec::imask_type random_integral;
          testing::rnd_init(&random_integral, 1);
          auto src = &test_data_ptr[i];
          auto result = maskz_mov<Vec>(random_integral, loadu<Vec>(src));
          for(std::size_t j = 0; j < Vec::vector_element_count(); j++) {
              reference_result_ptr[j] = (random_integral >> j) & 1 ? src[j] : 0;
          }
          allOk &= test_helper.validate_simd_register(result);
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_mask_mov_default() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        bool allOk = true;
        testing::test_memory_helper_t<Vec> test_helper{element_count * 2, Vec::vector_element_count(), false};
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();
        auto test_data_ptr = test_helper.data_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
            typename Vec::imask_type random_integral;
            testing::rnd_init(&random_integral, 1);
            auto src = &test_data_ptr[i];
            auto data = &test_data_ptr[element_count + i];
            auto result = mask_mov<Vec>(loadu<Vec>(src), random_integral, loadu<Vec>(data));
            for(std::size_t j = 0; j < Vec::vector_element_count(); j++) {
                reference_result_ptr[j] = (random_integral >> j) & 1 ? data[j] : src[j];
            }
            allOk &= test_helper.validate_simd_register(result);
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_maskz_mov_default() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        bool allOk = true;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();
        auto test_data_ptr = test_helper.data_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i+=Vec::vector_element_count()) {
          typename Vec::imask_type random_integral;
          testing::rnd_init(&random_integral, 1);
          auto src = &test_data_ptr[i];
          auto result = maskz_mov<Vec>(random_integral, loadu<Vec>(src));
          for(std::size_t j = 0; j < Vec::vector_element_count(); j++) {
              reference_result_ptr[j] = (random_integral >> j) & 1 ? src[j] : 0;
          }
          allOk &= test_helper.validate_simd_register(result);
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_blend_default() {
        using namespace tsl;
        using base_t = typename Vec::base_type;
        using reg_t = typename Vec::register_type;
        auto vec_count = Vec::vector_element_count();
        size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, vec_count, false};
        auto ref_result_ptr = test_helper.result_ref();
        auto ref_data_ptr = test_helper.data_ref();
        auto test_result_ptr = test_helper.result_target();
        auto test_data_ptr = test_helper.data_target();
        bool allOk = true;

        for(size_t i = 0; i < element_count; i += 2*vec_count){
          typename Vec::imask_type mask;
          testing::rnd_init(&mask, 1);
          base_t arr[vec_count];
          for(size_t j = 0; j < vec_count; j++){
            (mask & (1 << j)) ? arr[j] = ref_data_ptr[i+j+vec_count] : arr[j] = ref_data_ptr[j+i];
          }
          auto ref_result = loadu<Vec>(arr);

          auto vec_a = loadu<Vec>(&test_data_ptr[i]);
          auto vec_b = loadu<Vec>(&test_data_ptr[i+vec_count]);
          auto result = blend<Vec>(to_mask<Vec>(mask), vec_a, vec_b);

          storeu<Vec>(test_result_ptr, result);
          storeu<Vec>(ref_result_ptr, ref_result);

          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
}

TEST_CASE("Testing primitive 'conflict' for scalar", "[conflict],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        WARN("Primitive conflict<simd<double, scalar>> not implemented.");
        WARN("Primitive conflict<simd<float, scalar>> not implemented.");
        CHECK(test_conflict_default<simd<int16_t, scalar>>());

        CHECK(test_conflict_default<simd<int32_t, scalar>>());

        CHECK(test_conflict_default<simd<int64_t, scalar>>());

        CHECK(test_conflict_default<simd<int8_t, scalar>>());

        CHECK(test_conflict_default<simd<uint16_t, scalar>>());

        CHECK(test_conflict_default<simd<uint32_t, scalar>>());

        CHECK(test_conflict_default<simd<uint64_t, scalar>>());

        CHECK(test_conflict_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'conflict' for avx2", "[conflict],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        WARN("Primitive conflict not implemented for avx2");
    }
}
TEST_CASE("Testing primitive 'imask_conflict_free' for scalar", "[imask_conflict_free],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        WARN("Primitive imask_conflict_free<simd<double, scalar>> not implemented.");
        WARN("Primitive imask_conflict_free<simd<float, scalar>> not implemented.");
        CHECK(test_imask_conflict_free_default<simd<int16_t, scalar>>());

        CHECK(test_imask_conflict_free_default<simd<int32_t, scalar>>());

        CHECK(test_imask_conflict_free_default<simd<int64_t, scalar>>());

        CHECK(test_imask_conflict_free_default<simd<int8_t, scalar>>());

        CHECK(test_imask_conflict_free_default<simd<uint16_t, scalar>>());

        CHECK(test_imask_conflict_free_default<simd<uint32_t, scalar>>());

        CHECK(test_imask_conflict_free_default<simd<uint64_t, scalar>>());

        CHECK(test_imask_conflict_free_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'imask_conflict_free' for avx2", "[imask_conflict_free],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        WARN("Primitive imask_conflict_free not implemented for avx2");
    }
}
TEST_CASE("Testing primitive 'imaskz_mov' for scalar", "[imaskz_mov],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        WARN("Can't run. Required primitive(s) ['maskz_mov<uint8_t,scalar>'] not provided.");
        WARN("Can't run. Required primitive(s) ['maskz_mov<uint16_t,scalar>'] not provided.");
        WARN("Can't run. Required primitive(s) ['maskz_mov<uint32_t,scalar>'] not provided.");
        WARN("Can't run. Required primitive(s) ['maskz_mov<uint64_t,scalar>'] not provided.");
        WARN("Can't run. Required primitive(s) ['maskz_mov<int8_t,scalar>'] not provided.");
        WARN("Can't run. Required primitive(s) ['maskz_mov<int16_t,scalar>'] not provided.");
        WARN("Can't run. Required primitive(s) ['maskz_mov<int32_t,scalar>'] not provided.");
        WARN("Can't run. Required primitive(s) ['maskz_mov<int64_t,scalar>'] not provided.");
        WARN("Can't run. Required primitive(s) ['maskz_mov<float,scalar>'] not provided.");
        WARN("Can't run. Required primitive(s) ['maskz_mov<double,scalar>'] not provided.");
    }
}
TEST_CASE("Testing primitive 'imaskz_mov' for avx2", "[imaskz_mov],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_imaskz_mov_default<simd<double, avx2>>());

        CHECK(test_imaskz_mov_default<simd<float, avx2>>());

        WARN("Primitive imaskz_mov<simd<int16_t, avx2>> not implemented.");
        WARN("Primitive imaskz_mov<simd<int32_t, avx2>> not implemented.");
        WARN("Primitive imaskz_mov<simd<int64_t, avx2>> not implemented.");
        WARN("Primitive imaskz_mov<simd<int8_t, avx2>> not implemented.");
        WARN("Primitive imaskz_mov<simd<uint16_t, avx2>> not implemented.");
        WARN("Primitive imaskz_mov<simd<uint32_t, avx2>> not implemented.");
        WARN("Primitive imaskz_mov<simd<uint64_t, avx2>> not implemented.");
        WARN("Primitive imaskz_mov<simd<uint8_t, avx2>> not implemented.");
    }
}
TEST_CASE("Testing primitive 'mask_mov' for scalar", "[mask_mov],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_mask_mov_default<simd<double, scalar>>());

        CHECK(test_mask_mov_default<simd<float, scalar>>());

        CHECK(test_mask_mov_default<simd<int16_t, scalar>>());

        CHECK(test_mask_mov_default<simd<int32_t, scalar>>());

        CHECK(test_mask_mov_default<simd<int64_t, scalar>>());

        CHECK(test_mask_mov_default<simd<int8_t, scalar>>());

        CHECK(test_mask_mov_default<simd<uint16_t, scalar>>());

        CHECK(test_mask_mov_default<simd<uint32_t, scalar>>());

        CHECK(test_mask_mov_default<simd<uint64_t, scalar>>());

        CHECK(test_mask_mov_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'mask_mov' for avx2", "[mask_mov],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        WARN("Primitive mask_mov not implemented for avx2");
    }
}
TEST_CASE("Testing primitive 'maskz_mov' for scalar", "[maskz_mov],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        WARN("Primitive maskz_mov not implemented for scalar");
    }
}
TEST_CASE("Testing primitive 'maskz_mov' for avx2", "[maskz_mov],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_maskz_mov_default<simd<double, avx2>>());

        CHECK(test_maskz_mov_default<simd<float, avx2>>());

        WARN("Primitive maskz_mov<simd<int16_t, avx2>> not implemented.");
        WARN("Primitive maskz_mov<simd<int32_t, avx2>> not implemented.");
        WARN("Primitive maskz_mov<simd<int64_t, avx2>> not implemented.");
        WARN("Primitive maskz_mov<simd<int8_t, avx2>> not implemented.");
        WARN("Primitive maskz_mov<simd<uint16_t, avx2>> not implemented.");
        WARN("Primitive maskz_mov<simd<uint32_t, avx2>> not implemented.");
        WARN("Primitive maskz_mov<simd<uint64_t, avx2>> not implemented.");
        WARN("Primitive maskz_mov<simd<uint8_t, avx2>> not implemented.");
    }
}
TEST_CASE("Testing primitive 'blend' for scalar", "[blend],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_blend_default<simd<double, scalar>>());

        CHECK(test_blend_default<simd<float, scalar>>());

        CHECK(test_blend_default<simd<int16_t, scalar>>());

        CHECK(test_blend_default<simd<int32_t, scalar>>());

        CHECK(test_blend_default<simd<int64_t, scalar>>());

        CHECK(test_blend_default<simd<int8_t, scalar>>());

        CHECK(test_blend_default<simd<uint16_t, scalar>>());

        CHECK(test_blend_default<simd<uint32_t, scalar>>());

        CHECK(test_blend_default<simd<uint64_t, scalar>>());

        CHECK(test_blend_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'blend' for avx2", "[blend],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        WARN("Primitive blend not implemented for avx2");
    }
}

