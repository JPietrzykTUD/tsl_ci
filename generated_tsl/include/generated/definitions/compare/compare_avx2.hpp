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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/include/generated/definitions/compare/compare_avx2.hpp
 * \date 2024-02-28
 * \brief Compare primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : 48d9b97 (48d9b974aa94a5b73824da4bb473bf36985664c7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_AVX2_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_AVX2_HPP

#include "../../declarations/compare.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "less_than" (primitive less_than).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/compare.yaml::628
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct less_than<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm256_cmp_ps(vec_a, vec_b, _CMP_LT_OQ);
            }
        };
    } // end of namespace functors for template specialization of less_than for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "less_than" (primitive less_than).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/compare.yaml::628
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct less_than<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm256_cmp_pd(vec_a, vec_b, _CMP_LT_OQ);
            }
        };
    } // end of namespace functors for template specialization of less_than for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/compare.yaml::831
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct greater_than<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm256_cmp_ps(vec_a, vec_b, _CMP_GT_OQ);
            }
        };
    } // end of namespace functors for template specialization of greater_than for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/compare.yaml::831
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct greater_than<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm256_cmp_pd(vec_a, vec_b, _CMP_GT_OQ);
            }
        };
    } // end of namespace functors for template specialization of greater_than for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1037
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct less_than_or_equal<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm256_cmp_ps(vec_a, vec_b, _CMP_LE_OQ);
            }
        };
    } // end of namespace functors for template specialization of less_than_or_equal for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1037
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct less_than_or_equal<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm256_cmp_pd(vec_a, vec_b, _CMP_LE_OQ);
            }
        };
    } // end of namespace functors for template specialization of less_than_or_equal for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1255
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct greater_than_or_equal<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm256_cmp_ps(vec_a, vec_b, _CMP_GE_OQ);
            }
        };
    } // end of namespace functors for template specialization of greater_than_or_equal for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1255
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct greater_than_or_equal<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm256_cmp_pd(vec_a, vec_b, _CMP_GE_OQ);
            }
        };
    } // end of namespace functors for template specialization of greater_than_or_equal for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "between_inclusive" (primitive between_inclusive).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1526
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct between_inclusive<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type, typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_min, typename Vec::register_type const vec_max
            ) {
                return _mm256_and_ps(functors::less_than_or_equal<Vec, Idof>::apply(vec_min, vec_data), functors::less_than_or_equal<Vec, Idof>::apply(vec_data, vec_max));
            }
        };
    } // end of namespace functors for template specialization of between_inclusive for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "between_inclusive" (primitive between_inclusive).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1526
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct between_inclusive<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type, typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_min, typename Vec::register_type const vec_max
            ) {
                return _mm256_and_pd(functors::less_than_or_equal<Vec, Idof>::apply(vec_min, vec_data), functors::less_than_or_equal<Vec, Idof>::apply(vec_data, vec_max));
            }
        };
    } // end of namespace functors for template specialization of between_inclusive for avx2 using double.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_AVX2_HPP