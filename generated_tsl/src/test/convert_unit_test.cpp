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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/src/test/convert_unit_test.cpp
 * \date 2024-02-28
 * \brief Unit test file for TSL Primitives using Catch2
 * \note
 *
 */

#include <tslintrin.hpp>
#include <iostream>
#include "test_functions.hpp"

namespace tsl {
    template<VectorProcessingStyle Vec, VectorProcessingStyle ToType>
    bool test_cast_default_int_float_conversion() {
        using namespace tsl;
        using T = typename Vec::base_type;
        using T_int = typename ToType::base_type;

        if constexpr(std::is_same<typename Vec::target_extension, typename ToType::target_extension>::value){
          std::size_t element_count = 1024 * 8;
          testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
          testing::test_memory_helper_t<ToType> test_helper_float{element_count, Vec::vector_element_count(), false};

          bool allOk = true;
          auto reference_data_ptr = test_helper.data_ref();
          auto reference_result_ptr = test_helper_float.result_ref();
          auto test_data_ptr = test_helper.data_target();
          auto test_result_ptr = test_helper_float.result_target();

          for(std::size_t i = 0; i < element_count; i += Vec::vector_element_count()){
            int idx = 0;
            for(int j = i; j < i + Vec::vector_element_count(); j++){
              reference_result_ptr[idx++] = static_cast<T_int>(reference_data_ptr[j]);
            }
            auto vec = loadu<Vec>(&test_data_ptr[i]);
            storeu<ToType>(test_result_ptr, cast<Vec, ToType>(vec));

            test_helper_float.synchronize();
            allOk &= test_helper_float.validate();
          }
          return allOk;
          }
        else{
          std::cout << "\tPlease implement Testcase for primitive cast with Vec:" << tsl::type_name<Vec>() << " and ToType:"<< tsl::type_name<ToType>() <<"\n"<< std::endl;
          return true;
        }

    }
}

TEST_CASE("Testing primitive 'cast' for scalar", "[cast],[scalar]") {
    using namespace tsl;
    SECTION("default_int_float_conversion") {
        CHECK(test_cast_default_int_float_conversion<simd<double, scalar>, simd<int64_t, scalar>>());

        CHECK(test_cast_default_int_float_conversion<simd<float, scalar>, simd<int32_t, scalar>>());

        WARN("Primitive cast<simd<int16_t, scalar>> not implemented.");
        CHECK(test_cast_default_int_float_conversion<simd<int32_t, scalar>, simd<float, scalar>>());

        CHECK(test_cast_default_int_float_conversion<simd<int64_t, scalar>, simd<double, scalar>>());

        WARN("Primitive cast<simd<int8_t, scalar>> not implemented.");
        WARN("Primitive cast<simd<uint16_t, scalar>> not implemented.");
        CHECK(test_cast_default_int_float_conversion<simd<uint32_t, scalar>, simd<float, scalar>>());

        CHECK(test_cast_default_int_float_conversion<simd<uint64_t, scalar>, simd<double, scalar>>());

        WARN("Primitive cast<simd<uint8_t, scalar>> not implemented.");
    }
}
TEST_CASE("Testing primitive 'cast' for avx2", "[cast],[avx2]") {
    using namespace tsl;
    SECTION("default_int_float_conversion") {
        WARN("Primitive cast<simd<double, avx2>> not implemented.");
        WARN("Primitive cast<simd<float, avx2>> not implemented.");
        WARN("Primitive cast<simd<int16_t, avx2>> not implemented.");
        CHECK(test_cast_default_int_float_conversion<simd<int32_t, avx2>, simd<float, avx2>>());

        WARN("Primitive cast<simd<int64_t, avx2>> not implemented.");
        WARN("Primitive cast<simd<int8_t, avx2>> not implemented.");
        WARN("Primitive cast<simd<uint16_t, avx2>> not implemented.");
        WARN("Primitive cast<simd<uint32_t, avx2>> not implemented.");
        WARN("Primitive cast<simd<uint64_t, avx2>> not implemented.");
        WARN("Primitive cast<simd<uint8_t, avx2>> not implemented.");
    }
}

