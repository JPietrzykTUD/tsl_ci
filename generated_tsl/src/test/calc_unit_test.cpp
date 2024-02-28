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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/src/test/calc_unit_test.cpp
 * \date 2024-02-28
 * \brief Unit test file for TSL Primitives using Catch2
 * \note
 *
 */

#include <tslintrin.hpp>
#include <cstddef>
#include <algorithm>
#include <limits>
#include "test_functions.hpp"

namespace tsl {
    template<VectorProcessingStyle Vec>
    bool test_hadd_default() {
        using namespace tsl;
        using T = typename Vec::base_type;
        testing::test_memory_helper_t<Vec> test_helper{1, false};
        bool allOk = true;
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();
        const std::size_t limit = std::min( (size_t) 4096, (size_t) std::numeric_limits<T>::max() / Vec::vector_element_count() );
        for(std::size_t i = 0; i < limit; ++i) {
          *reference_result_ptr =  Vec::vector_element_count() * i;
          auto vec = set1<Vec>(i);
          *test_result_ptr = hadd<Vec>(vec);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_mod_constant_with_check_barrett_reduction_constraint() {
        using namespace tsl;
        using T = typename Vec::base_type;
        testing::test_memory_helper_t<Vec> test_helper{Vec::vector_element_count(), false};
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();
        auto vec = set1<Vec>(73);
        storeu<Vec>(reference_result_ptr, set1<Vec>(1));
        auto result_vec = mod<Vec>(vec, 8);
        storeu<Vec>(test_result_ptr, result_vec);
        test_helper.synchronize();
        return test_helper.validate();

    }
    template<VectorProcessingStyle Vec>
    bool test_mod_constant_with_modulo_one() {
        using namespace tsl;
        using T = typename Vec::base_type;
        testing::test_memory_helper_t<Vec> test_helper{Vec::vector_element_count(), false};
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();
        auto vec = set1<Vec>(0);
        storeu<Vec>(reference_result_ptr, vec);
        storeu<Vec>(test_result_ptr, mod<Vec>(vec, 1));
        test_helper.synchronize();
        return test_helper.validate();

    }
    template<VectorProcessingStyle Vec>
    bool test_mod_constant_with_modulo_rand() {
        using namespace tsl;
        using T = typename Vec::base_type;
        using IntType = std::conditional_t<std::is_same_v<T, float>, int32_t, std::conditional_t<std::is_same_v<T, double>, int64_t, T>>;
        std::size_t element_count = 1024 + (1024 / Vec::vector_element_count());
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false, testing::alternate_init_no_zero<T>};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        auto offset = 1024;
        for(std::size_t i = 0; i < (element_count - offset); i +=Vec::vector_element_count()){
          std::size_t tester_idx = 0;
          for(std::size_t j = i; j < i + Vec::vector_element_count(); j++){
            reference_result_ptr[tester_idx++] = reference_data_ptr[j] % reference_data_ptr[offset];
          }
          auto vec = loadu<Vec>(&test_data_ptr[i]);
          auto val = test_data_ptr[offset];
          auto vec_result = mod<Vec>(vec, val);
          storeu<Vec>(test_result_ptr, vec_result);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_mod_safe_with_modulo_one() {
        using namespace tsl;
        using T = typename Vec::base_type;
        testing::test_memory_helper_t<Vec> test_helper{Vec::vector_element_count(), false};
        auto reference_result_ptr = test_helper.result_ref();
        auto test_result_ptr = test_helper.result_target();
        auto vec = set1<Vec>(0);
        storeu<Vec>(reference_result_ptr, vec);
        storeu<Vec>(test_result_ptr, mod_safe<Vec>(vec, 1));
        test_helper.synchronize();
        return test_helper.validate();

    }
    template<VectorProcessingStyle Vec>
    bool test_mod_safe_with_modulo_rand() {
        using namespace tsl;
        using T = typename Vec::base_type;
        using IntType = std::conditional_t<std::is_same_v<T, float>, int32_t, std::conditional_t<std::is_same_v<T, double>, int64_t, T>>;
        std::size_t element_count = 1024 + (1024 / Vec::vector_element_count());
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false, testing::alternate_init_no_zero<T>};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        auto offset = 1024;
        for(std::size_t i = 0; i < (element_count - offset); i +=Vec::vector_element_count()){
          std::size_t tester_idx = 0;
          for(std::size_t j = i; j < i + Vec::vector_element_count(); j++){
            reference_result_ptr[tester_idx++] = reference_data_ptr[j] % reference_data_ptr[offset];
          }
          auto vec = loadu<Vec>(&test_data_ptr[i]);
          auto val = test_data_ptr[offset];
          auto vec_result = mod_safe<Vec>(vec, val);
          storeu<Vec>(test_result_ptr, vec_result);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_mod_safe_check_float_limits() {
        using namespace tsl;
        using base_t = typename Vec::base_type;
        if constexpr(!(std::is_same_v<uint32_t, base_t> || std::is_same_v<int32_t, base_t>)){
          return true;
        }else{
          testing::test_memory_helper_t<Vec> test_helper{Vec::vector_element_count(), false};
          auto ref_result_ptr = test_helper.result_ref();
          auto test_result_ptr = test_helper.result_target();

          int threshold = 16777217;
          base_t mod;
          testing::rnd_init(&mod, 1);
          auto vec = custom_sequence<Vec>(threshold);
          for(int i = 0; i < Vec::vector_element_count(); i++){
            ref_result_ptr[i] = (threshold + i) % mod;
          }
          storeu<Vec>(test_result_ptr, mod_safe<Vec>(vec, mod));
          test_helper.synchronize();
          return test_helper.validate();
        }

    }
    template<VectorProcessingStyle Vec>
    bool test_mul_multiply_neg_and_neg() {
        using namespace tsl;
        using T = typename Vec::base_type;

        if(std::is_unsigned<T>::value){
          return true;
        }else{
          testing::test_memory_helper_t<Vec> test_helper{ Vec::vector_element_count(), false };
          auto reference_result_ptr = test_helper.result_ref();
          auto test_result_ptr = test_helper.result_target();

          storeu<Vec>(reference_result_ptr, set1<Vec>(1));
          auto vec = set1<Vec>(-1);
          storeu<Vec>(test_result_ptr, mul<Vec>(vec,vec));

          test_helper.synchronize();
          return test_helper.validate();
        }

    }
    template<VectorProcessingStyle Vec>
    bool test_mul_multiply_neg_and_pos() {
        using namespace tsl;
        using T = typename Vec::base_type;

        if(std::is_unsigned<T>::value){
          return true;
        }else{
          testing::test_memory_helper_t<Vec> test_helper{ Vec::vector_element_count(), Vec::vector_element_count(), false, testing::seq_init<T>, 1 };
          auto reference_result_ptr = test_helper.result_ref();
          auto test_result_ptr = test_helper.result_target();
          auto test_data_ptr = test_helper.data_target();
          auto reference_data_ptr = test_helper.data_ref();

          auto neg = tsl::set1<Vec>(-1);
          auto pos_ref = tsl::loadu<Vec>(reference_data_ptr);
          auto pos_target = tsl::loadu<Vec>(test_data_ptr);

          storeu<Vec>(reference_result_ptr, tsl::mul<Vec>(pos_ref, neg));
          storeu<Vec>(test_result_ptr, tsl::mul<Vec>(pos_target, neg));
          //std::cout << "========Multiply neg * pos" << tsl::type_name<Vec>() << "==================" << std::endl;
          //for (size_t i = 0; i < Vec::vector_element_count(); ++i) {
          //  std::cerr << reference_data_ptr[i] << " * -1 = " << test_result_ptr[i] << " !=?== " << reference_result_ptr[i] << std::endl;
          //}
          //std::cerr << "=======================================================" << std::endl;

          test_helper.synchronize();
          return test_helper.validate();
        }

    }
    template<VectorProcessingStyle Vec>
    bool test_mul_default() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false };
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - (2*Vec::vector_element_count()); i+=(2*Vec::vector_element_count())) {
          std::size_t j = i;
          for(; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[j-i] = reference_data_ptr[j];
          }
          for(; j < i + (2*Vec::vector_element_count()); ++j) {
              reference_result_ptr[j-(i+Vec::vector_element_count())] *= reference_data_ptr[j];
          }
          auto vec_a = loadu<Vec>(&test_data_ptr[i]);
          auto vec_b = loadu<Vec>(&test_data_ptr[i+Vec::vector_element_count()]);
          auto vec_result = mul<Vec>(vec_a, vec_b);
          storeu<Vec>(test_result_ptr, vec_result);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_mul_multiply_by_zero() {
        using namespace tsl;
        using T = typename Vec::base_type;
        using reg_t = typename Vec::register_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false };
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        reg_t vec_zero = set1<Vec>(0);
        for(std::size_t i = 0; i < (element_count - Vec::vector_element_count()); i += Vec::vector_element_count()){
          std::size_t tester_idx = 0;
          for(size_t j = i; j < i + Vec::vector_element_count(); j++) {
            reference_result_ptr[tester_idx++] = 0;
          }
          auto vec = loadu<Vec>(&test_data_ptr[i]);
          auto vec_result = mul<Vec>(vec, vec_zero);
          storeu<Vec>(test_result_ptr, vec_result);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_add_running_sum_w_epsilon() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false };
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - 2*Vec::vector_element_count(); i+=2*Vec::vector_element_count()) {
          std::size_t tester_idx = 0;
          for(size_t j = i; j < i + Vec::vector_element_count(); j++) {
              reference_result_ptr[tester_idx++] = reference_data_ptr[j]+reference_data_ptr[j+Vec::vector_element_count()];
          }
          auto elements_vec1 = loadu<Vec>(&test_data_ptr[i]);
          auto elements_vec2 = loadu<Vec>(&test_data_ptr[i+Vec::vector_element_count()]);
          auto vec = add<Vec>(elements_vec1, elements_vec2);
          storeu<Vec>( test_result_ptr, vec );
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_add_zero_cornercase() {
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
          std::size_t tester_idx = 0;
          for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[tester_idx++] = reference_data_ptr[j];
          }
          auto vec = set1<Vec>( 0 );
          auto elements = loadu<Vec>(&test_data_ptr[i]);
          vec = add<Vec>(vec, elements);
          storeu<Vec>( test_result_ptr, vec );
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_div_vec_with_itself() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false, testing::alternate_init_no_zero<T>};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i += Vec::vector_element_count()){
          auto vec = set1<Vec>(1);
          storeu<Vec>(reference_result_ptr, vec);
          auto vec_a = loadu<Vec>(&test_data_ptr[i]);
          vec = div<Vec>(vec_a, vec_a);
          storeu<Vec>(test_result_ptr, vec);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_div_vec_with_one() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false, testing::alternate_init_no_zero<T>};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - Vec::vector_element_count(); i += Vec::vector_element_count()){
          std::size_t tester_idx = 0;
          for(size_t j=i; j < i + Vec::vector_element_count(); j++){
            reference_result_ptr[tester_idx++] = reference_data_ptr[j];
          }
          auto vec = set1<Vec>(1);
          auto vec_a = loadu<Vec>(&test_data_ptr[i]);
          auto vec_result = div<Vec>(vec_a, vec);
          storeu<Vec>(test_result_ptr, vec_result);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_hmax_default() {
        using namespace tsl;
        size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, 1, false};
        auto reference_result_ptr = test_helper.result_ref();
        auto reference_data_ptr = test_helper.data_ref();
        auto test_result_ptr = test_helper.result_target();
        auto test_data_ptr = test_helper.data_target();
        bool allOk = true;
        for(size_t i = 0; i < element_count; i += Vec::vector_element_count()){
          *reference_result_ptr = *std::max_element(reference_data_ptr + i, reference_data_ptr + i + Vec::vector_element_count());
          auto vec = loadu<Vec>(&test_data_ptr[i]);
          *test_result_ptr = hmax<Vec>(vec);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_hmin_default() {
        using namespace tsl;
        size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, 1, false};
        auto reference_result_ptr = test_helper.result_ref();
        auto reference_data_ptr = test_helper.data_ref();
        auto test_result_ptr = test_helper.result_target();
        auto test_data_ptr = test_helper.data_target();
        bool allOk = true;

        for(size_t i = 0; i < element_count; i += Vec::vector_element_count()){
          *reference_result_ptr = *std::min_element(reference_data_ptr + i, reference_data_ptr + i + Vec::vector_element_count());
          auto vec = loadu<Vec>(&test_data_ptr[i]);
          *test_result_ptr = hmin<Vec>(vec);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_mask_add_all_one_mask() {
        using namespace tsl;
        using T = typename Vec::base_type;
        using reg_t = typename Vec::register_type;

        typename Vec::mask_type mask = to_mask<Vec>(integral_all_true<Vec>());

        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false };
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();

        for(std::size_t i = 0; i < (element_count - (2*Vec::vector_element_count())); i += 2*Vec::vector_element_count()){
          std::size_t tester_idx = 0;
          for(size_t j = i; j < i + Vec::vector_element_count(); j++) {
            reference_result_ptr[tester_idx++] = reference_data_ptr[j] + reference_data_ptr[j + Vec::vector_element_count()];
          }
          auto vec_a = loadu<Vec>(&test_data_ptr[i]);
          auto vec_b = loadu<Vec>(&test_data_ptr[i + Vec::vector_element_count()]);
          auto vec_result = add<Vec>(mask, vec_a, vec_b);
          storeu<Vec>(test_result_ptr, vec_result);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_mask_add_zero_mask() {
        using namespace tsl;
        using T = typename Vec::base_type;
        using reg_t = typename Vec::register_type;

        typename Vec::mask_type zero_mask = to_mask<Vec>(integral_all_false<Vec>());

        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false };
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();

        for(std::size_t i = 0; i < (element_count - Vec::vector_element_count()); i += Vec::vector_element_count()){
          std::size_t tester_idx = 0;
          for(size_t j = i; j < i + Vec::vector_element_count(); j++) {
            reference_result_ptr[tester_idx++] = reference_data_ptr[j];
          }
          auto vec = loadu<Vec>(&test_data_ptr[i]);
          auto vec_result = add<Vec>(zero_mask, vec, vec);
          storeu<Vec>(test_result_ptr, vec_result);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_max_default() {
        using namespace tsl;
        using base_t = typename Vec::base_type;
        using reg_t = typename Vec::register_type;
        auto vec_count = Vec::vector_element_count();
        size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, vec_count, false};
        auto reference_result_ptr = test_helper.result_ref();
        auto reference_data_ptr = test_helper.data_ref();
        auto test_result_ptr = test_helper.result_target();
        auto test_data_ptr = test_helper.data_target();
        bool allOk = true;

        for(size_t i = 0; i < element_count; i += 2*vec_count){
          base_t arr[vec_count];
          for(size_t j = 0; j < vec_count; j++){
            (reference_data_ptr[i+j] < reference_data_ptr[i+j+vec_count]) ? arr[j] = reference_data_ptr[i+j+vec_count] : arr[j] = reference_data_ptr[i+j];
          }
          auto ref_result = loadu<Vec>(arr);

          auto vec_a = loadu<Vec>(&test_data_ptr[i]);
          auto vec_b = loadu<Vec>(&test_data_ptr[i+vec_count]);
          auto result = max<Vec>(vec_a, vec_b);

          storeu<Vec>(test_result_ptr, result);
          storeu<Vec>(reference_result_ptr, ref_result);

          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_min_min_general_case() {
        using namespace tsl;
        using T = typename Vec::base_type;
        const std::size_t element_count = 2048;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        auto vec = set1<Vec>(0);
        for(std::size_t i = 0; i < element_count / 2; i += Vec::vector_element_count()){
          std::size_t tester_idx = 0;
          for(size_t j = i; j < i + Vec::vector_element_count(); j++){
            if(reference_data_ptr[j] < reference_data_ptr[j + (element_count/2)]){
              reference_result_ptr[tester_idx++] = reference_data_ptr[j];
            } else {
              reference_result_ptr[tester_idx++] = reference_data_ptr[j + (element_count/2)];
            }
          }
          auto elements_vec1 = loadu<Vec>(&test_data_ptr[i]);
          auto elements_vec2 = loadu<Vec>(&test_data_ptr[i + (element_count/2)]);
          vec = min<Vec>(elements_vec1, elements_vec2);
          storeu<Vec>(test_result_ptr, vec);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_min_min_zero_case() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false};
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count; i += Vec::vector_element_count()){
          auto vec = set1<Vec>(0);
          storeu<Vec>(reference_result_ptr, vec);
          auto elements_vec = loadu<Vec>(&test_data_ptr[i]);
          vec = min<Vec>(vec, elements_vec);
          storeu<Vec>(test_result_ptr, vec);
          test_helper.synchronize();
          allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_sub_running_sum_w_epsilon() {
        using namespace tsl;
        using T = typename Vec::base_type;
        std::size_t element_count = 1024;
        testing::test_memory_helper_t<Vec> test_helper{element_count, Vec::vector_element_count(), false };
        bool allOk = true;
        auto reference_data_ptr = test_helper.data_ref();
        auto reference_result_ptr = test_helper.result_ref();
        auto test_data_ptr = test_helper.data_target();
        auto test_result_ptr = test_helper.result_target();
        for(std::size_t i = 0; i < element_count - 2*Vec::vector_element_count(); i+=2*Vec::vector_element_count()) {
            std::size_t tester_idx = 0;
            for(size_t j = i; j < i + Vec::vector_element_count(); j++) {
              reference_result_ptr[tester_idx++] = reference_data_ptr[j]-reference_data_ptr[j+Vec::vector_element_count()];
            }
            auto elements_vec1 = loadu<Vec>(&test_data_ptr[i]);
            auto elements_vec2 = loadu<Vec>(&test_data_ptr[i+Vec::vector_element_count()]);
            auto vec = sub<Vec>(elements_vec1, elements_vec2);
            storeu<Vec>( test_result_ptr, vec );
            test_helper.synchronize();
            allOk &= test_helper.validate();
        }
        return allOk;

    }
    template<VectorProcessingStyle Vec>
    bool test_sub_zero_cornercase() {
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
            std::size_t tester_idx = 0;
            for(size_t j = i; j < i + Vec::vector_element_count(); ++j) {
              reference_result_ptr[tester_idx++] = reference_data_ptr[j];
            }
            auto vec = set1<Vec>( 0 );
            auto elements = loadu<Vec>(&test_data_ptr[i]);
            vec = sub<Vec>(elements, vec);
            storeu<Vec>( test_result_ptr, vec );
            test_helper.synchronize();
            allOk &= test_helper.validate();
        }
        return allOk;

    }
}

TEST_CASE("Testing primitive 'hadd' for scalar", "[hadd],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_hadd_default<simd<double, scalar>>());

        CHECK(test_hadd_default<simd<float, scalar>>());

        CHECK(test_hadd_default<simd<int16_t, scalar>>());

        CHECK(test_hadd_default<simd<int32_t, scalar>>());

        CHECK(test_hadd_default<simd<int64_t, scalar>>());

        CHECK(test_hadd_default<simd<int8_t, scalar>>());

        CHECK(test_hadd_default<simd<uint16_t, scalar>>());

        CHECK(test_hadd_default<simd<uint32_t, scalar>>());

        CHECK(test_hadd_default<simd<uint64_t, scalar>>());

        CHECK(test_hadd_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'hadd' for avx2", "[hadd],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        WARN("Primitive hadd<simd<double, avx2>> not implemented.");
        WARN("Primitive hadd<simd<float, avx2>> not implemented.");
        CHECK(test_hadd_default<simd<int16_t, avx2>>());

        WARN("Primitive hadd<simd<int32_t, avx2>> not implemented.");
        WARN("Primitive hadd<simd<int64_t, avx2>> not implemented.");
        CHECK(test_hadd_default<simd<int8_t, avx2>>());

        CHECK(test_hadd_default<simd<uint16_t, avx2>>());

        WARN("Primitive hadd<simd<uint32_t, avx2>> not implemented.");
        WARN("Primitive hadd<simd<uint64_t, avx2>> not implemented.");
        CHECK(test_hadd_default<simd<uint8_t, avx2>>());

    }
}
TEST_CASE("Testing primitive 'mod_constant' for scalar", "[mod_constant],[scalar]") {
    using namespace tsl;
    SECTION("with_check_barrett_reduction_constraint") {
        WARN("Primitive mod_constant<simd<double, scalar>> not implemented.");
        WARN("Primitive mod_constant<simd<float, scalar>> not implemented.");
        CHECK(test_mod_constant_with_check_barrett_reduction_constraint<simd<int16_t, scalar>>());

        CHECK(test_mod_constant_with_check_barrett_reduction_constraint<simd<int32_t, scalar>>());

        CHECK(test_mod_constant_with_check_barrett_reduction_constraint<simd<int64_t, scalar>>());

        CHECK(test_mod_constant_with_check_barrett_reduction_constraint<simd<int8_t, scalar>>());

        CHECK(test_mod_constant_with_check_barrett_reduction_constraint<simd<uint16_t, scalar>>());

        CHECK(test_mod_constant_with_check_barrett_reduction_constraint<simd<uint32_t, scalar>>());

        CHECK(test_mod_constant_with_check_barrett_reduction_constraint<simd<uint64_t, scalar>>());

        CHECK(test_mod_constant_with_check_barrett_reduction_constraint<simd<uint8_t, scalar>>());

    }
    SECTION("with_modulo_one") {
        WARN("Primitive mod_constant<simd<double, scalar>> not implemented.");
        WARN("Primitive mod_constant<simd<float, scalar>> not implemented.");
        CHECK(test_mod_constant_with_modulo_one<simd<int16_t, scalar>>());

        CHECK(test_mod_constant_with_modulo_one<simd<int32_t, scalar>>());

        CHECK(test_mod_constant_with_modulo_one<simd<int64_t, scalar>>());

        CHECK(test_mod_constant_with_modulo_one<simd<int8_t, scalar>>());

        CHECK(test_mod_constant_with_modulo_one<simd<uint16_t, scalar>>());

        CHECK(test_mod_constant_with_modulo_one<simd<uint32_t, scalar>>());

        CHECK(test_mod_constant_with_modulo_one<simd<uint64_t, scalar>>());

        CHECK(test_mod_constant_with_modulo_one<simd<uint8_t, scalar>>());

    }
    SECTION("with_modulo_rand") {
        WARN("Primitive mod_constant<simd<double, scalar>> not implemented.");
        WARN("Primitive mod_constant<simd<float, scalar>> not implemented.");
        CHECK(test_mod_constant_with_modulo_rand<simd<int16_t, scalar>>());

        CHECK(test_mod_constant_with_modulo_rand<simd<int32_t, scalar>>());

        CHECK(test_mod_constant_with_modulo_rand<simd<int64_t, scalar>>());

        CHECK(test_mod_constant_with_modulo_rand<simd<int8_t, scalar>>());

        CHECK(test_mod_constant_with_modulo_rand<simd<uint16_t, scalar>>());

        CHECK(test_mod_constant_with_modulo_rand<simd<uint32_t, scalar>>());

        CHECK(test_mod_constant_with_modulo_rand<simd<uint64_t, scalar>>());

        CHECK(test_mod_constant_with_modulo_rand<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'mod_constant' for avx2", "[mod_constant],[avx2]") {
    using namespace tsl;
    SECTION("with_check_barrett_reduction_constraint") {
        WARN("Primitive mod_constant not implemented for avx2");
    }
    SECTION("with_modulo_one") {
        WARN("Primitive mod_constant not implemented for avx2");
    }
    SECTION("with_modulo_rand") {
        WARN("Primitive mod_constant not implemented for avx2");
    }
}
TEST_CASE("Testing primitive 'mod_safe' for scalar", "[mod_safe],[scalar]") {
    using namespace tsl;
    SECTION("with_modulo_one") {
        WARN("Primitive mod_safe<simd<double, scalar>> not implemented.");
        WARN("Primitive mod_safe<simd<float, scalar>> not implemented.");
        CHECK(test_mod_safe_with_modulo_one<simd<int16_t, scalar>>());

        CHECK(test_mod_safe_with_modulo_one<simd<int32_t, scalar>>());

        CHECK(test_mod_safe_with_modulo_one<simd<int64_t, scalar>>());

        CHECK(test_mod_safe_with_modulo_one<simd<int8_t, scalar>>());

        CHECK(test_mod_safe_with_modulo_one<simd<uint16_t, scalar>>());

        CHECK(test_mod_safe_with_modulo_one<simd<uint32_t, scalar>>());

        CHECK(test_mod_safe_with_modulo_one<simd<uint64_t, scalar>>());

        CHECK(test_mod_safe_with_modulo_one<simd<uint8_t, scalar>>());

    }
    SECTION("with_modulo_rand") {
        WARN("Primitive mod_safe<simd<double, scalar>> not implemented.");
        WARN("Primitive mod_safe<simd<float, scalar>> not implemented.");
        CHECK(test_mod_safe_with_modulo_rand<simd<int16_t, scalar>>());

        CHECK(test_mod_safe_with_modulo_rand<simd<int32_t, scalar>>());

        CHECK(test_mod_safe_with_modulo_rand<simd<int64_t, scalar>>());

        CHECK(test_mod_safe_with_modulo_rand<simd<int8_t, scalar>>());

        CHECK(test_mod_safe_with_modulo_rand<simd<uint16_t, scalar>>());

        CHECK(test_mod_safe_with_modulo_rand<simd<uint32_t, scalar>>());

        CHECK(test_mod_safe_with_modulo_rand<simd<uint64_t, scalar>>());

        CHECK(test_mod_safe_with_modulo_rand<simd<uint8_t, scalar>>());

    }
    SECTION("check_float_limits") {
        WARN("Primitive mod_safe<simd<double, scalar>> not implemented.");
        WARN("Primitive mod_safe<simd<float, scalar>> not implemented.");
        CHECK(test_mod_safe_check_float_limits<simd<int16_t, scalar>>());

        CHECK(test_mod_safe_check_float_limits<simd<int32_t, scalar>>());

        CHECK(test_mod_safe_check_float_limits<simd<int64_t, scalar>>());

        CHECK(test_mod_safe_check_float_limits<simd<int8_t, scalar>>());

        CHECK(test_mod_safe_check_float_limits<simd<uint16_t, scalar>>());

        CHECK(test_mod_safe_check_float_limits<simd<uint32_t, scalar>>());

        CHECK(test_mod_safe_check_float_limits<simd<uint64_t, scalar>>());

        CHECK(test_mod_safe_check_float_limits<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'mod_safe' for avx2", "[mod_safe],[avx2]") {
    using namespace tsl;
    SECTION("with_modulo_one") {
        WARN("Primitive mod_safe not implemented for avx2");
    }
    SECTION("with_modulo_rand") {
        WARN("Primitive mod_safe not implemented for avx2");
    }
    SECTION("check_float_limits") {
        WARN("Primitive mod_safe not implemented for avx2");
    }
}
TEST_CASE("Testing primitive 'mul' for scalar", "[mul],[scalar]") {
    using namespace tsl;
    SECTION("multiply_neg_and_neg") {
        CHECK(test_mul_multiply_neg_and_neg<simd<double, scalar>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<float, scalar>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<int16_t, scalar>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<int32_t, scalar>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<int64_t, scalar>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<int8_t, scalar>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<uint16_t, scalar>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<uint32_t, scalar>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<uint64_t, scalar>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<uint8_t, scalar>>());

    }
    SECTION("multiply_neg_and_pos") {
        CHECK(test_mul_multiply_neg_and_pos<simd<double, scalar>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<float, scalar>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<int16_t, scalar>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<int32_t, scalar>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<int64_t, scalar>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<int8_t, scalar>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<uint16_t, scalar>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<uint32_t, scalar>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<uint64_t, scalar>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<uint8_t, scalar>>());

    }
    SECTION("default") {
        CHECK(test_mul_default<simd<double, scalar>>());

        CHECK(test_mul_default<simd<float, scalar>>());

        CHECK(test_mul_default<simd<int16_t, scalar>>());

        CHECK(test_mul_default<simd<int32_t, scalar>>());

        CHECK(test_mul_default<simd<int64_t, scalar>>());

        CHECK(test_mul_default<simd<int8_t, scalar>>());

        CHECK(test_mul_default<simd<uint16_t, scalar>>());

        CHECK(test_mul_default<simd<uint32_t, scalar>>());

        CHECK(test_mul_default<simd<uint64_t, scalar>>());

        CHECK(test_mul_default<simd<uint8_t, scalar>>());

    }
    SECTION("multiply_by_zero") {
        CHECK(test_mul_multiply_by_zero<simd<double, scalar>>());

        CHECK(test_mul_multiply_by_zero<simd<float, scalar>>());

        CHECK(test_mul_multiply_by_zero<simd<int16_t, scalar>>());

        CHECK(test_mul_multiply_by_zero<simd<int32_t, scalar>>());

        CHECK(test_mul_multiply_by_zero<simd<int64_t, scalar>>());

        CHECK(test_mul_multiply_by_zero<simd<int8_t, scalar>>());

        CHECK(test_mul_multiply_by_zero<simd<uint16_t, scalar>>());

        CHECK(test_mul_multiply_by_zero<simd<uint32_t, scalar>>());

        CHECK(test_mul_multiply_by_zero<simd<uint64_t, scalar>>());

        CHECK(test_mul_multiply_by_zero<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'mul' for avx2", "[mul],[avx2]") {
    using namespace tsl;
    SECTION("multiply_neg_and_neg") {
        CHECK(test_mul_multiply_neg_and_neg<simd<double, avx2>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<float, avx2>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<int16_t, avx2>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<int32_t, avx2>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<int64_t, avx2>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<int8_t, avx2>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<uint16_t, avx2>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<uint32_t, avx2>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<uint64_t, avx2>>());

        CHECK(test_mul_multiply_neg_and_neg<simd<uint8_t, avx2>>());

    }
    SECTION("multiply_neg_and_pos") {
        CHECK(test_mul_multiply_neg_and_pos<simd<double, avx2>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<float, avx2>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<int16_t, avx2>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<int32_t, avx2>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<int64_t, avx2>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<int8_t, avx2>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<uint16_t, avx2>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<uint32_t, avx2>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<uint64_t, avx2>>());

        CHECK(test_mul_multiply_neg_and_pos<simd<uint8_t, avx2>>());

    }
    SECTION("default") {
        CHECK(test_mul_default<simd<double, avx2>>());

        CHECK(test_mul_default<simd<float, avx2>>());

        CHECK(test_mul_default<simd<int16_t, avx2>>());

        CHECK(test_mul_default<simd<int32_t, avx2>>());

        CHECK(test_mul_default<simd<int64_t, avx2>>());

        CHECK(test_mul_default<simd<int8_t, avx2>>());

        CHECK(test_mul_default<simd<uint16_t, avx2>>());

        CHECK(test_mul_default<simd<uint32_t, avx2>>());

        CHECK(test_mul_default<simd<uint64_t, avx2>>());

        CHECK(test_mul_default<simd<uint8_t, avx2>>());

    }
    SECTION("multiply_by_zero") {
        CHECK(test_mul_multiply_by_zero<simd<double, avx2>>());

        CHECK(test_mul_multiply_by_zero<simd<float, avx2>>());

        CHECK(test_mul_multiply_by_zero<simd<int16_t, avx2>>());

        CHECK(test_mul_multiply_by_zero<simd<int32_t, avx2>>());

        CHECK(test_mul_multiply_by_zero<simd<int64_t, avx2>>());

        CHECK(test_mul_multiply_by_zero<simd<int8_t, avx2>>());

        CHECK(test_mul_multiply_by_zero<simd<uint16_t, avx2>>());

        CHECK(test_mul_multiply_by_zero<simd<uint32_t, avx2>>());

        CHECK(test_mul_multiply_by_zero<simd<uint64_t, avx2>>());

        CHECK(test_mul_multiply_by_zero<simd<uint8_t, avx2>>());

    }
}
TEST_CASE("Testing primitive 'add' for scalar", "[add],[scalar]") {
    using namespace tsl;
    SECTION("running_sum_w_epsilon") {
        CHECK(test_add_running_sum_w_epsilon<simd<double, scalar>>());

        CHECK(test_add_running_sum_w_epsilon<simd<float, scalar>>());

        CHECK(test_add_running_sum_w_epsilon<simd<int16_t, scalar>>());

        CHECK(test_add_running_sum_w_epsilon<simd<int32_t, scalar>>());

        CHECK(test_add_running_sum_w_epsilon<simd<int64_t, scalar>>());

        CHECK(test_add_running_sum_w_epsilon<simd<int8_t, scalar>>());

        CHECK(test_add_running_sum_w_epsilon<simd<uint16_t, scalar>>());

        CHECK(test_add_running_sum_w_epsilon<simd<uint32_t, scalar>>());

        CHECK(test_add_running_sum_w_epsilon<simd<uint64_t, scalar>>());

        CHECK(test_add_running_sum_w_epsilon<simd<uint8_t, scalar>>());

    }
    SECTION("zero_cornercase") {
        CHECK(test_add_zero_cornercase<simd<double, scalar>>());

        CHECK(test_add_zero_cornercase<simd<float, scalar>>());

        CHECK(test_add_zero_cornercase<simd<int16_t, scalar>>());

        CHECK(test_add_zero_cornercase<simd<int32_t, scalar>>());

        CHECK(test_add_zero_cornercase<simd<int64_t, scalar>>());

        CHECK(test_add_zero_cornercase<simd<int8_t, scalar>>());

        CHECK(test_add_zero_cornercase<simd<uint16_t, scalar>>());

        CHECK(test_add_zero_cornercase<simd<uint32_t, scalar>>());

        CHECK(test_add_zero_cornercase<simd<uint64_t, scalar>>());

        CHECK(test_add_zero_cornercase<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'add' for avx2", "[add],[avx2]") {
    using namespace tsl;
    SECTION("running_sum_w_epsilon") {
        CHECK(test_add_running_sum_w_epsilon<simd<double, avx2>>());

        CHECK(test_add_running_sum_w_epsilon<simd<float, avx2>>());

        WARN("Primitive add<simd<int16_t, avx2>> not implemented.");
        WARN("Primitive add<simd<int32_t, avx2>> not implemented.");
        WARN("Primitive add<simd<int64_t, avx2>> not implemented.");
        WARN("Primitive add<simd<int8_t, avx2>> not implemented.");
        WARN("Primitive add<simd<uint16_t, avx2>> not implemented.");
        WARN("Primitive add<simd<uint32_t, avx2>> not implemented.");
        WARN("Primitive add<simd<uint64_t, avx2>> not implemented.");
        WARN("Primitive add<simd<uint8_t, avx2>> not implemented.");
    }
    SECTION("zero_cornercase") {
        CHECK(test_add_zero_cornercase<simd<double, avx2>>());

        CHECK(test_add_zero_cornercase<simd<float, avx2>>());

        WARN("Primitive add<simd<int16_t, avx2>> not implemented.");
        WARN("Primitive add<simd<int32_t, avx2>> not implemented.");
        WARN("Primitive add<simd<int64_t, avx2>> not implemented.");
        WARN("Primitive add<simd<int8_t, avx2>> not implemented.");
        WARN("Primitive add<simd<uint16_t, avx2>> not implemented.");
        WARN("Primitive add<simd<uint32_t, avx2>> not implemented.");
        WARN("Primitive add<simd<uint64_t, avx2>> not implemented.");
        WARN("Primitive add<simd<uint8_t, avx2>> not implemented.");
    }
}
TEST_CASE("Testing primitive 'div' for scalar", "[div],[scalar]") {
    using namespace tsl;
    SECTION("vec_with_itself") {
        CHECK(test_div_vec_with_itself<simd<double, scalar>>());

        CHECK(test_div_vec_with_itself<simd<float, scalar>>());

        CHECK(test_div_vec_with_itself<simd<int16_t, scalar>>());

        CHECK(test_div_vec_with_itself<simd<int32_t, scalar>>());

        CHECK(test_div_vec_with_itself<simd<int64_t, scalar>>());

        CHECK(test_div_vec_with_itself<simd<int8_t, scalar>>());

        CHECK(test_div_vec_with_itself<simd<uint16_t, scalar>>());

        CHECK(test_div_vec_with_itself<simd<uint32_t, scalar>>());

        CHECK(test_div_vec_with_itself<simd<uint64_t, scalar>>());

        CHECK(test_div_vec_with_itself<simd<uint8_t, scalar>>());

    }
    SECTION("vec_with_one") {
        CHECK(test_div_vec_with_one<simd<double, scalar>>());

        CHECK(test_div_vec_with_one<simd<float, scalar>>());

        CHECK(test_div_vec_with_one<simd<int16_t, scalar>>());

        CHECK(test_div_vec_with_one<simd<int32_t, scalar>>());

        CHECK(test_div_vec_with_one<simd<int64_t, scalar>>());

        CHECK(test_div_vec_with_one<simd<int8_t, scalar>>());

        CHECK(test_div_vec_with_one<simd<uint16_t, scalar>>());

        CHECK(test_div_vec_with_one<simd<uint32_t, scalar>>());

        CHECK(test_div_vec_with_one<simd<uint64_t, scalar>>());

        CHECK(test_div_vec_with_one<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'div' for avx2", "[div],[avx2]") {
    using namespace tsl;
    SECTION("vec_with_itself") {
        CHECK(test_div_vec_with_itself<simd<double, avx2>>());

        CHECK(test_div_vec_with_itself<simd<float, avx2>>());

        CHECK(test_div_vec_with_itself<simd<int16_t, avx2>>());

        CHECK(test_div_vec_with_itself<simd<int32_t, avx2>>());

        CHECK(test_div_vec_with_itself<simd<int64_t, avx2>>());

        CHECK(test_div_vec_with_itself<simd<int8_t, avx2>>());

        CHECK(test_div_vec_with_itself<simd<uint16_t, avx2>>());

        CHECK(test_div_vec_with_itself<simd<uint32_t, avx2>>());

        CHECK(test_div_vec_with_itself<simd<uint64_t, avx2>>());

        CHECK(test_div_vec_with_itself<simd<uint8_t, avx2>>());

    }
    SECTION("vec_with_one") {
        CHECK(test_div_vec_with_one<simd<double, avx2>>());

        CHECK(test_div_vec_with_one<simd<float, avx2>>());

        CHECK(test_div_vec_with_one<simd<int16_t, avx2>>());

        CHECK(test_div_vec_with_one<simd<int32_t, avx2>>());

        CHECK(test_div_vec_with_one<simd<int64_t, avx2>>());

        CHECK(test_div_vec_with_one<simd<int8_t, avx2>>());

        CHECK(test_div_vec_with_one<simd<uint16_t, avx2>>());

        CHECK(test_div_vec_with_one<simd<uint32_t, avx2>>());

        CHECK(test_div_vec_with_one<simd<uint64_t, avx2>>());

        CHECK(test_div_vec_with_one<simd<uint8_t, avx2>>());

    }
}
TEST_CASE("Testing primitive 'hmax' for scalar", "[hmax],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_hmax_default<simd<double, scalar>>());

        CHECK(test_hmax_default<simd<float, scalar>>());

        CHECK(test_hmax_default<simd<int16_t, scalar>>());

        CHECK(test_hmax_default<simd<int32_t, scalar>>());

        CHECK(test_hmax_default<simd<int64_t, scalar>>());

        CHECK(test_hmax_default<simd<int8_t, scalar>>());

        CHECK(test_hmax_default<simd<uint16_t, scalar>>());

        CHECK(test_hmax_default<simd<uint32_t, scalar>>());

        CHECK(test_hmax_default<simd<uint64_t, scalar>>());

        CHECK(test_hmax_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'hmax' for avx2", "[hmax],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_hmax_default<simd<double, avx2>>());

        CHECK(test_hmax_default<simd<float, avx2>>());

        WARN("Primitive hmax<simd<int16_t, avx2>> not implemented.");
        WARN("Primitive hmax<simd<int32_t, avx2>> not implemented.");
        WARN("Primitive hmax<simd<int64_t, avx2>> not implemented.");
        WARN("Primitive hmax<simd<int8_t, avx2>> not implemented.");
        WARN("Primitive hmax<simd<uint16_t, avx2>> not implemented.");
        WARN("Primitive hmax<simd<uint32_t, avx2>> not implemented.");
        WARN("Primitive hmax<simd<uint64_t, avx2>> not implemented.");
        WARN("Primitive hmax<simd<uint8_t, avx2>> not implemented.");
    }
}
TEST_CASE("Testing primitive 'hmin' for scalar", "[hmin],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_hmin_default<simd<double, scalar>>());

        CHECK(test_hmin_default<simd<float, scalar>>());

        CHECK(test_hmin_default<simd<int16_t, scalar>>());

        CHECK(test_hmin_default<simd<int32_t, scalar>>());

        CHECK(test_hmin_default<simd<int64_t, scalar>>());

        CHECK(test_hmin_default<simd<int8_t, scalar>>());

        CHECK(test_hmin_default<simd<uint16_t, scalar>>());

        CHECK(test_hmin_default<simd<uint32_t, scalar>>());

        CHECK(test_hmin_default<simd<uint64_t, scalar>>());

        CHECK(test_hmin_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'hmin' for avx2", "[hmin],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_hmin_default<simd<double, avx2>>());

        CHECK(test_hmin_default<simd<float, avx2>>());

        WARN("Primitive hmin<simd<int16_t, avx2>> not implemented.");
        WARN("Primitive hmin<simd<int32_t, avx2>> not implemented.");
        WARN("Primitive hmin<simd<int64_t, avx2>> not implemented.");
        WARN("Primitive hmin<simd<int8_t, avx2>> not implemented.");
        WARN("Primitive hmin<simd<uint16_t, avx2>> not implemented.");
        WARN("Primitive hmin<simd<uint32_t, avx2>> not implemented.");
        WARN("Primitive hmin<simd<uint64_t, avx2>> not implemented.");
        WARN("Primitive hmin<simd<uint8_t, avx2>> not implemented.");
    }
}
TEST_CASE("Testing primitive 'mask_add' for scalar", "[mask_add],[scalar]") {
    using namespace tsl;
    SECTION("all_one_mask") {
        CHECK(test_mask_add_all_one_mask<simd<double, scalar>>());

        CHECK(test_mask_add_all_one_mask<simd<float, scalar>>());

        CHECK(test_mask_add_all_one_mask<simd<int16_t, scalar>>());

        CHECK(test_mask_add_all_one_mask<simd<int32_t, scalar>>());

        CHECK(test_mask_add_all_one_mask<simd<int64_t, scalar>>());

        CHECK(test_mask_add_all_one_mask<simd<int8_t, scalar>>());

        CHECK(test_mask_add_all_one_mask<simd<uint16_t, scalar>>());

        CHECK(test_mask_add_all_one_mask<simd<uint32_t, scalar>>());

        CHECK(test_mask_add_all_one_mask<simd<uint64_t, scalar>>());

        CHECK(test_mask_add_all_one_mask<simd<uint8_t, scalar>>());

    }
    SECTION("zero_mask") {
        CHECK(test_mask_add_zero_mask<simd<double, scalar>>());

        CHECK(test_mask_add_zero_mask<simd<float, scalar>>());

        CHECK(test_mask_add_zero_mask<simd<int16_t, scalar>>());

        CHECK(test_mask_add_zero_mask<simd<int32_t, scalar>>());

        CHECK(test_mask_add_zero_mask<simd<int64_t, scalar>>());

        CHECK(test_mask_add_zero_mask<simd<int8_t, scalar>>());

        CHECK(test_mask_add_zero_mask<simd<uint16_t, scalar>>());

        CHECK(test_mask_add_zero_mask<simd<uint32_t, scalar>>());

        CHECK(test_mask_add_zero_mask<simd<uint64_t, scalar>>());

        CHECK(test_mask_add_zero_mask<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'mask_add' for avx2", "[mask_add],[avx2]") {
    using namespace tsl;
    SECTION("all_one_mask") {
        WARN("Can't run. Required primitive(s) ['integral_all_false<uint8_t,avx2>', 'integral_all_false<uint8_t,avx2>', 'to_mask<uint8_t,avx2>', 'add<uint8_t,avx2>', 'to_mask<uint8_t,avx2>', 'integral_all_true<uint8_t,avx2>', 'integral_all_true<uint8_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<int8_t,avx2>', 'integral_all_false<int8_t,avx2>', 'to_mask<int8_t,avx2>', 'add<int8_t,avx2>', 'to_mask<int8_t,avx2>', 'integral_all_true<int8_t,avx2>', 'integral_all_true<int8_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<uint16_t,avx2>', 'integral_all_false<uint16_t,avx2>', 'to_mask<uint16_t,avx2>', 'add<uint16_t,avx2>', 'to_mask<uint16_t,avx2>', 'integral_all_true<uint16_t,avx2>', 'integral_all_true<uint16_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<int16_t,avx2>', 'integral_all_false<int16_t,avx2>', 'to_mask<int16_t,avx2>', 'add<int16_t,avx2>', 'to_mask<int16_t,avx2>', 'integral_all_true<int16_t,avx2>', 'integral_all_true<int16_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<uint32_t,avx2>', 'integral_all_false<uint32_t,avx2>', 'to_mask<uint32_t,avx2>', 'add<uint32_t,avx2>', 'to_mask<uint32_t,avx2>', 'integral_all_true<uint32_t,avx2>', 'integral_all_true<uint32_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<int32_t,avx2>', 'integral_all_false<int32_t,avx2>', 'to_mask<int32_t,avx2>', 'add<int32_t,avx2>', 'to_mask<int32_t,avx2>', 'integral_all_true<int32_t,avx2>', 'integral_all_true<int32_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<uint64_t,avx2>', 'integral_all_false<uint64_t,avx2>', 'to_mask<uint64_t,avx2>', 'add<uint64_t,avx2>', 'to_mask<uint64_t,avx2>', 'integral_all_true<uint64_t,avx2>', 'integral_all_true<uint64_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<int64_t,avx2>', 'integral_all_false<int64_t,avx2>', 'to_mask<int64_t,avx2>', 'add<int64_t,avx2>', 'to_mask<int64_t,avx2>', 'integral_all_true<int64_t,avx2>', 'integral_all_true<int64_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<float,avx2>', 'integral_all_false<float,avx2>', 'to_mask<float,avx2>', 'to_mask<float,avx2>', 'integral_all_true<float,avx2>', 'integral_all_true<float,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<double,avx2>', 'integral_all_false<double,avx2>', 'to_mask<double,avx2>', 'to_mask<double,avx2>', 'integral_all_true<double,avx2>', 'integral_all_true<double,avx2>'] not provided.");
    }
    SECTION("zero_mask") {
        WARN("Can't run. Required primitive(s) ['integral_all_false<uint8_t,avx2>', 'integral_all_false<uint8_t,avx2>', 'to_mask<uint8_t,avx2>', 'add<uint8_t,avx2>', 'to_mask<uint8_t,avx2>', 'integral_all_true<uint8_t,avx2>', 'integral_all_true<uint8_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<int8_t,avx2>', 'integral_all_false<int8_t,avx2>', 'to_mask<int8_t,avx2>', 'add<int8_t,avx2>', 'to_mask<int8_t,avx2>', 'integral_all_true<int8_t,avx2>', 'integral_all_true<int8_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<uint16_t,avx2>', 'integral_all_false<uint16_t,avx2>', 'to_mask<uint16_t,avx2>', 'add<uint16_t,avx2>', 'to_mask<uint16_t,avx2>', 'integral_all_true<uint16_t,avx2>', 'integral_all_true<uint16_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<int16_t,avx2>', 'integral_all_false<int16_t,avx2>', 'to_mask<int16_t,avx2>', 'add<int16_t,avx2>', 'to_mask<int16_t,avx2>', 'integral_all_true<int16_t,avx2>', 'integral_all_true<int16_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<uint32_t,avx2>', 'integral_all_false<uint32_t,avx2>', 'to_mask<uint32_t,avx2>', 'add<uint32_t,avx2>', 'to_mask<uint32_t,avx2>', 'integral_all_true<uint32_t,avx2>', 'integral_all_true<uint32_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<int32_t,avx2>', 'integral_all_false<int32_t,avx2>', 'to_mask<int32_t,avx2>', 'add<int32_t,avx2>', 'to_mask<int32_t,avx2>', 'integral_all_true<int32_t,avx2>', 'integral_all_true<int32_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<uint64_t,avx2>', 'integral_all_false<uint64_t,avx2>', 'to_mask<uint64_t,avx2>', 'add<uint64_t,avx2>', 'to_mask<uint64_t,avx2>', 'integral_all_true<uint64_t,avx2>', 'integral_all_true<uint64_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<int64_t,avx2>', 'integral_all_false<int64_t,avx2>', 'to_mask<int64_t,avx2>', 'add<int64_t,avx2>', 'to_mask<int64_t,avx2>', 'integral_all_true<int64_t,avx2>', 'integral_all_true<int64_t,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<float,avx2>', 'integral_all_false<float,avx2>', 'to_mask<float,avx2>', 'to_mask<float,avx2>', 'integral_all_true<float,avx2>', 'integral_all_true<float,avx2>'] not provided.");
        WARN("Can't run. Required primitive(s) ['integral_all_false<double,avx2>', 'integral_all_false<double,avx2>', 'to_mask<double,avx2>', 'to_mask<double,avx2>', 'integral_all_true<double,avx2>', 'integral_all_true<double,avx2>'] not provided.");
    }
}
TEST_CASE("Testing primitive 'max' for scalar", "[max],[scalar]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_max_default<simd<double, scalar>>());

        CHECK(test_max_default<simd<float, scalar>>());

        CHECK(test_max_default<simd<int16_t, scalar>>());

        CHECK(test_max_default<simd<int32_t, scalar>>());

        CHECK(test_max_default<simd<int64_t, scalar>>());

        CHECK(test_max_default<simd<int8_t, scalar>>());

        CHECK(test_max_default<simd<uint16_t, scalar>>());

        CHECK(test_max_default<simd<uint32_t, scalar>>());

        CHECK(test_max_default<simd<uint64_t, scalar>>());

        CHECK(test_max_default<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'max' for avx2", "[max],[avx2]") {
    using namespace tsl;
    SECTION("default") {
        CHECK(test_max_default<simd<double, avx2>>());

        CHECK(test_max_default<simd<float, avx2>>());

        WARN("Primitive max<simd<int16_t, avx2>> not implemented.");
        WARN("Primitive max<simd<int32_t, avx2>> not implemented.");
        WARN("Primitive max<simd<int64_t, avx2>> not implemented.");
        WARN("Primitive max<simd<int8_t, avx2>> not implemented.");
        WARN("Primitive max<simd<uint16_t, avx2>> not implemented.");
        WARN("Primitive max<simd<uint32_t, avx2>> not implemented.");
        WARN("Primitive max<simd<uint64_t, avx2>> not implemented.");
        WARN("Primitive max<simd<uint8_t, avx2>> not implemented.");
    }
}
TEST_CASE("Testing primitive 'min' for scalar", "[min],[scalar]") {
    using namespace tsl;
    SECTION("min_general_case") {
        CHECK(test_min_min_general_case<simd<double, scalar>>());

        CHECK(test_min_min_general_case<simd<float, scalar>>());

        CHECK(test_min_min_general_case<simd<int16_t, scalar>>());

        CHECK(test_min_min_general_case<simd<int32_t, scalar>>());

        CHECK(test_min_min_general_case<simd<int64_t, scalar>>());

        CHECK(test_min_min_general_case<simd<int8_t, scalar>>());

        CHECK(test_min_min_general_case<simd<uint16_t, scalar>>());

        CHECK(test_min_min_general_case<simd<uint32_t, scalar>>());

        CHECK(test_min_min_general_case<simd<uint64_t, scalar>>());

        CHECK(test_min_min_general_case<simd<uint8_t, scalar>>());

    }
    SECTION("min_zero_case") {
        CHECK(test_min_min_zero_case<simd<double, scalar>>());

        CHECK(test_min_min_zero_case<simd<float, scalar>>());

        CHECK(test_min_min_zero_case<simd<int16_t, scalar>>());

        CHECK(test_min_min_zero_case<simd<int32_t, scalar>>());

        CHECK(test_min_min_zero_case<simd<int64_t, scalar>>());

        CHECK(test_min_min_zero_case<simd<int8_t, scalar>>());

        CHECK(test_min_min_zero_case<simd<uint16_t, scalar>>());

        CHECK(test_min_min_zero_case<simd<uint32_t, scalar>>());

        CHECK(test_min_min_zero_case<simd<uint64_t, scalar>>());

        CHECK(test_min_min_zero_case<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'min' for avx2", "[min],[avx2]") {
    using namespace tsl;
    SECTION("min_general_case") {
        CHECK(test_min_min_general_case<simd<double, avx2>>());

        CHECK(test_min_min_general_case<simd<float, avx2>>());

        WARN("Primitive min<simd<int16_t, avx2>> not implemented.");
        WARN("Primitive min<simd<int32_t, avx2>> not implemented.");
        WARN("Primitive min<simd<int64_t, avx2>> not implemented.");
        WARN("Primitive min<simd<int8_t, avx2>> not implemented.");
        WARN("Primitive min<simd<uint16_t, avx2>> not implemented.");
        WARN("Primitive min<simd<uint32_t, avx2>> not implemented.");
        WARN("Primitive min<simd<uint64_t, avx2>> not implemented.");
        WARN("Primitive min<simd<uint8_t, avx2>> not implemented.");
    }
    SECTION("min_zero_case") {
        CHECK(test_min_min_zero_case<simd<double, avx2>>());

        CHECK(test_min_min_zero_case<simd<float, avx2>>());

        WARN("Primitive min<simd<int16_t, avx2>> not implemented.");
        WARN("Primitive min<simd<int32_t, avx2>> not implemented.");
        WARN("Primitive min<simd<int64_t, avx2>> not implemented.");
        WARN("Primitive min<simd<int8_t, avx2>> not implemented.");
        WARN("Primitive min<simd<uint16_t, avx2>> not implemented.");
        WARN("Primitive min<simd<uint32_t, avx2>> not implemented.");
        WARN("Primitive min<simd<uint64_t, avx2>> not implemented.");
        WARN("Primitive min<simd<uint8_t, avx2>> not implemented.");
    }
}
TEST_CASE("Testing primitive 'sub' for scalar", "[sub],[scalar]") {
    using namespace tsl;
    SECTION("running_sum_w_epsilon") {
        CHECK(test_sub_running_sum_w_epsilon<simd<double, scalar>>());

        CHECK(test_sub_running_sum_w_epsilon<simd<float, scalar>>());

        CHECK(test_sub_running_sum_w_epsilon<simd<int16_t, scalar>>());

        CHECK(test_sub_running_sum_w_epsilon<simd<int32_t, scalar>>());

        CHECK(test_sub_running_sum_w_epsilon<simd<int64_t, scalar>>());

        CHECK(test_sub_running_sum_w_epsilon<simd<int8_t, scalar>>());

        CHECK(test_sub_running_sum_w_epsilon<simd<uint16_t, scalar>>());

        CHECK(test_sub_running_sum_w_epsilon<simd<uint32_t, scalar>>());

        CHECK(test_sub_running_sum_w_epsilon<simd<uint64_t, scalar>>());

        CHECK(test_sub_running_sum_w_epsilon<simd<uint8_t, scalar>>());

    }
    SECTION("zero_cornercase") {
        CHECK(test_sub_zero_cornercase<simd<double, scalar>>());

        CHECK(test_sub_zero_cornercase<simd<float, scalar>>());

        CHECK(test_sub_zero_cornercase<simd<int16_t, scalar>>());

        CHECK(test_sub_zero_cornercase<simd<int32_t, scalar>>());

        CHECK(test_sub_zero_cornercase<simd<int64_t, scalar>>());

        CHECK(test_sub_zero_cornercase<simd<int8_t, scalar>>());

        CHECK(test_sub_zero_cornercase<simd<uint16_t, scalar>>());

        CHECK(test_sub_zero_cornercase<simd<uint32_t, scalar>>());

        CHECK(test_sub_zero_cornercase<simd<uint64_t, scalar>>());

        CHECK(test_sub_zero_cornercase<simd<uint8_t, scalar>>());

    }
}
TEST_CASE("Testing primitive 'sub' for avx2", "[sub],[avx2]") {
    using namespace tsl;
    SECTION("running_sum_w_epsilon") {
        CHECK(test_sub_running_sum_w_epsilon<simd<double, avx2>>());

        CHECK(test_sub_running_sum_w_epsilon<simd<float, avx2>>());

        WARN("Primitive sub<simd<int16_t, avx2>> not implemented.");
        WARN("Primitive sub<simd<int32_t, avx2>> not implemented.");
        WARN("Primitive sub<simd<int64_t, avx2>> not implemented.");
        WARN("Primitive sub<simd<int8_t, avx2>> not implemented.");
        WARN("Primitive sub<simd<uint16_t, avx2>> not implemented.");
        WARN("Primitive sub<simd<uint32_t, avx2>> not implemented.");
        WARN("Primitive sub<simd<uint64_t, avx2>> not implemented.");
        WARN("Primitive sub<simd<uint8_t, avx2>> not implemented.");
    }
    SECTION("zero_cornercase") {
        CHECK(test_sub_zero_cornercase<simd<double, avx2>>());

        CHECK(test_sub_zero_cornercase<simd<float, avx2>>());

        WARN("Primitive sub<simd<int16_t, avx2>> not implemented.");
        WARN("Primitive sub<simd<int32_t, avx2>> not implemented.");
        WARN("Primitive sub<simd<int64_t, avx2>> not implemented.");
        WARN("Primitive sub<simd<int8_t, avx2>> not implemented.");
        WARN("Primitive sub<simd<uint16_t, avx2>> not implemented.");
        WARN("Primitive sub<simd<uint32_t, avx2>> not implemented.");
        WARN("Primitive sub<simd<uint64_t, avx2>> not implemented.");
        WARN("Primitive sub<simd<uint8_t, avx2>> not implemented.");
    }
}

