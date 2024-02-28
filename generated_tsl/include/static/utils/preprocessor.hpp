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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/include/static/utils/preprocessor.hpp
 * \date 2024-02-28
 * \brief TODO.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : 48d9b97 (48d9b974aa94a5b73824da4bb473bf36985664c7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_STATIC_UTILS_PREPROCESSOR_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_STATIC_UTILS_PREPROCESSOR_HPP

#include <tuple>

namespace tsl {

    #ifndef TSL_FORCE_INLINE
    #   if defined(__clang__) || defined(__GNUC__)
    #       define TSL_FORCE_INLINE inline __attribute__((always_inline))
    #   elif defined(_MSC_VER)
    #       define TSL_FORCE_INLINE inline __forceinline
    #   endif
    #endif
    #ifndef TSL_NO_NATIVE_SUPPORT_WARNING
    #   define TSL_NO_NATIVE_SUPPORT_WARNING [[deprecated("This primitive is not supported by your hardware natively. Thus, a workaround is used.")]]
    #endif
    #ifndef TSL_DEP_TYPE
    #   define TSL_DEP_TYPE(CONDITION, IFBRANCH, ELSEBRANCH) std::conditional_t<CONDITION, IFBRANCH, ELSEBRANCH>
    #endif
    #ifndef TSL_CVAL
    #   define TSL_CVAL(type, value) std::integral_constant<type,value>{}
    #endif
    #define TSL_TO_STRING_HELPER(X) #X
    #define TSL_TO_STRING(X) TSL_TO_STRING_HELPER(X)
    #define TSL_DEFAULT_OR_PARAM(...) TSL_DEFAULT_OR_PARAM_(__VA_ARGS__, 2, 1, )
    #define TSL_DEFAULT_OR_PARAM_(_1, _2, X, ...) X
    #define TSL_CAT(A, B) TSL_CAT_(A, B)
    #define TSL_CAT_(A, B) A##B
    #define TSL_UNROLL_IMPL_ ,
    #if defined (__INTEL_LLVM_COMPILER)
    #   define TSL_UNROLL_2(_) _Pragma("unroll (1)")
    #   define TSL_UNROLL_1(X) _Pragma(TSL_TO_STRING(unroll (X)))
    #   define TSL_UNROLL(X) TSL_CAT(TSL_UNROLL_, TSL_DEFAULT_OR_PARAM(TSL_UNROLL_IMPL_##X))(X)
    #elif defined(__clang__)
    #   define TSL_UNROLL_2(_) _Pragma("unroll")
    #   define TSL_UNROLL_1(X) _Pragma(TSL_TO_STRING(unroll(X)))
    #   define TSL_UNROLL(X) TSL_CAT(TSL_UNROLL_, TSL_DEFAULT_OR_PARAM(TSL_UNROLL_IMPL_##X))(X)
    #elif defined(__GNUC__) && !defined(__clang__)
    #   if (__GNUC__ < 14)
    #     pragma message("TSL_UNROLL is disabled. Apparently, GCC<14 does not support pragma unroll based on template parameters, see https://gcc.gnu.org/bugzilla/show_bug.cgi?id=102855.")
    #     define TSL_UNROLL(X)
    #   else
    #     define TSL_UNROLL_2(_) _Pragma(TSL_TO_STRING(GCC unroll (1)))
    #     define TSL_UNROLL_1(X) _Pragma(TSL_TO_STRING(GCC unroll (X)))
    #     define TSL_UNROLL(X) TSL_CAT(TSL_UNROLL_, TSL_DEFAULT_OR_PARAM(TSL_UNROLL_IMPL_##X))(X)
    #   endif
    #elif defined(_MSC_BUILD)
    #pragma message( \
        "Microsoft Visual C++ (MSVC) detected: Loop unrolling not supported!")
    #   define TSL_UNROLL(...)
    #else
    #warning "Unknown compiler: Loop unrolling not supported!"
    #   define TSL_UNROLL(...)
    #endif

    template <typename T, class = void> struct class_declared : std::false_type {};
    template <typename T> struct class_declared<T,decltype(void(sizeof(T)))> : std::true_type {};

    template <class HelperStruct>
    struct tsl_functor_template_defined {
      // Define a helper function that checks if apply can be instantiated with specific arguments.
      template <typename... Args>
      static auto has_valid_apply(Args&&...) -> decltype(std::declval<HelperStruct>().apply(std::declval<Args>()...), std::true_type{});
      // If the helper function is well-formed, it means apply can be instantiated with these arguments.
      template <typename... Args>
      static std::true_type test(int, Args&&...);
      // If the helper function is not well-formed, it means apply cannot be instantiated with these arguments.
      static std::false_type test(...);
      // Combine the results of the tests.
      template <typename... Args>
      using type = decltype(test(0, std::declval<Args>()...));
      static constexpr bool value = type<>::value;
    };

    template <class HelperStruct>
    struct tsl_functor_plain_defined {
      template <class CurrentHelperStruct>
      static auto test(int) -> decltype(std::declval<CurrentHelperStruct>().apply, std::true_type{});
      template <typename>
      static auto test(...) -> std::false_type;
      using type = decltype(test<HelperStruct>(0));
      static constexpr bool value = type::value;
    };

    template <class HelperStruct>
    struct tsl_functor_defined {
      static constexpr bool value =
        tsl_functor_template_defined<HelperStruct>::value ||
        tsl_functor_plain_defined<HelperStruct>::value;
    };

    template<class A, class B>
    constexpr bool tsl_primitive_ambiguous() {
      if constexpr ((class_declared<A>::value)) {
        if constexpr ((tsl_functor_defined<A>::value) && (tsl_functor_defined<B>::value)) {
          return std::is_same_v<typename A::param_tuple_t, typename B::param_tuple_t>;
        } else {
          return false;
        }
      } else {
        return false;
      }
    }

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_STATIC_UTILS_PREPROCESSOR_HPP