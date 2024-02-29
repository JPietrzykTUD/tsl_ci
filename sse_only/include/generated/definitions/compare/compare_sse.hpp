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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/sse_only/include/generated/definitions/compare/compare_sse.hpp
 * \date 2024-02-29
 * \brief Compare primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : d17f8eb (d17f8eb76bb8c5acffdd50fd389e77f1972f0fa7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_SSE_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_SSE_HPP

#include "../../declarations/compare.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::114
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
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
                return _mm_cmpeq_epi8(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of equal for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::114
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
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
                return _mm_cmpeq_epi8(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of equal for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::114
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
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
                return _mm_cmpeq_epi16(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of equal for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::114
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
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
                return _mm_cmpeq_epi16(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of equal for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::114
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
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
                return _mm_cmpeq_epi32(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of equal for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::114
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
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
                return _mm_cmpeq_epi32(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of equal for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::123
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
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
                return _mm_cmpeq_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of equal for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::127
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
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
                return _mm_cmpeq_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of equal for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::253
         * @note: Signed comparison.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_equal<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const typename Vec::register_type>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_and_si128(functors::equal<Vec, Idof>::apply(vec_a, vec_b), mask);
            }
        };
    } // end of namespace functors for template specialization of mask_equal for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::253
         * @note: Signed comparison.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_equal<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const typename Vec::register_type>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_and_si128(functors::equal<Vec, Idof>::apply(vec_a, vec_b), mask);
            }
        };
    } // end of namespace functors for template specialization of mask_equal for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::253
         * @note: Signed comparison.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_equal<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const typename Vec::register_type>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_and_si128(functors::equal<Vec, Idof>::apply(vec_a, vec_b), mask);
            }
        };
    } // end of namespace functors for template specialization of mask_equal for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::253
         * @note: Signed comparison.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_equal<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const typename Vec::register_type>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_and_si128(functors::equal<Vec, Idof>::apply(vec_a, vec_b), mask);
            }
        };
    } // end of namespace functors for template specialization of mask_equal for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::253
         * @note: Signed comparison.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_equal<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const typename Vec::register_type>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_and_si128(functors::equal<Vec, Idof>::apply(vec_a, vec_b), mask);
            }
        };
    } // end of namespace functors for template specialization of mask_equal for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::253
         * @note: Signed comparison.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_equal<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const typename Vec::register_type>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_and_si128(functors::equal<Vec, Idof>::apply(vec_a, vec_b), mask);
            }
        };
    } // end of namespace functors for template specialization of mask_equal for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::253
         * @note: Signed comparison.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_equal<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const typename Vec::register_type>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_and_si128(functors::equal<Vec, Idof>::apply(vec_a, vec_b), mask);
            }
        };
    } // end of namespace functors for template specialization of mask_equal for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::253
         * @note: Signed comparison.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_equal<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const typename Vec::register_type>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_and_si128(functors::equal<Vec, Idof>::apply(vec_a, vec_b), mask);
            }
        };
    } // end of namespace functors for template specialization of mask_equal for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::253
         * @note: Signed comparison.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_equal<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const typename Vec::register_type>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_and_si128(functors::equal<Vec, Idof>::apply(vec_a, vec_b), mask);
            }
        };
    } // end of namespace functors for template specialization of mask_equal for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_equal" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::253
         * @note: Signed comparison.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_equal<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const typename Vec::register_type>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_and_si128(functors::equal<Vec, Idof>::apply(vec_a, vec_b), mask);
            }
        };
    } // end of namespace functors for template specialization of mask_equal for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_masks" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::290
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_masks<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a == mask_b;
            }
        };
    } // end of namespace functors for template specialization of equal_masks for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_masks" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::290
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_masks<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a == mask_b;
            }
        };
    } // end of namespace functors for template specialization of equal_masks for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_masks" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::290
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_masks<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a == mask_b;
            }
        };
    } // end of namespace functors for template specialization of equal_masks for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_masks" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::290
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_masks<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a == mask_b;
            }
        };
    } // end of namespace functors for template specialization of equal_masks for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_masks" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::290
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_masks<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a == mask_b;
            }
        };
    } // end of namespace functors for template specialization of equal_masks for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_masks" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::290
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_masks<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a == mask_b;
            }
        };
    } // end of namespace functors for template specialization of equal_masks for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_masks" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::290
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_masks<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a == mask_b;
            }
        };
    } // end of namespace functors for template specialization of equal_masks for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_masks" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::290
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_masks<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a == mask_b;
            }
        };
    } // end of namespace functors for template specialization of equal_masks for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_masks" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::290
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_masks<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a == mask_b;
            }
        };
    } // end of namespace functors for template specialization of equal_masks for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_masks" (primitive equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::290
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_masks<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a == mask_b;
            }
        };
    } // end of namespace functors for template specialization of equal_masks for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "nequal" (primitive nequal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::424
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct nequal<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
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
                auto const all_set = _mm_cmpeq_epi8(vec_a,vec_a);
                return _mm_andnot_si128(_mm_cmpeq_epi8(vec_a, vec_b), all_set);
            }
        };
    } // end of namespace functors for template specialization of nequal for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "nequal" (primitive nequal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::424
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct nequal<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
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
                auto const all_set = _mm_cmpeq_epi8(vec_a,vec_a);
                return _mm_andnot_si128(_mm_cmpeq_epi8(vec_a, vec_b), all_set);
            }
        };
    } // end of namespace functors for template specialization of nequal for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "nequal" (primitive nequal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::424
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct nequal<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
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
                auto const all_set = _mm_cmpeq_epi16(vec_a,vec_a);
                return _mm_andnot_si128(_mm_cmpeq_epi16(vec_a, vec_b), all_set);
            }
        };
    } // end of namespace functors for template specialization of nequal for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "nequal" (primitive nequal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::424
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct nequal<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
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
                auto const all_set = _mm_cmpeq_epi16(vec_a,vec_a);
                return _mm_andnot_si128(_mm_cmpeq_epi16(vec_a, vec_b), all_set);
            }
        };
    } // end of namespace functors for template specialization of nequal for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "nequal" (primitive nequal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::424
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct nequal<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
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
                auto const all_set = _mm_cmpeq_epi32(vec_a,vec_a);
                return _mm_andnot_si128(_mm_cmpeq_epi32(vec_a, vec_b), all_set);
            }
        };
    } // end of namespace functors for template specialization of nequal for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "nequal" (primitive nequal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::424
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct nequal<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
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
                auto const all_set = _mm_cmpeq_epi32(vec_a,vec_a);
                return _mm_andnot_si128(_mm_cmpeq_epi32(vec_a, vec_b), all_set);
            }
        };
    } // end of namespace functors for template specialization of nequal for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_as_imask" (primitive equal_as_imask).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::501
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_as_imask<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return functors::to_integral<Vec, Idof>::apply(functors::equal<Vec, Idof>::apply(vec_a, vec_b));
            }
        };
    } // end of namespace functors for template specialization of equal_as_imask for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_as_imask" (primitive equal_as_imask).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::501
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_as_imask<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return functors::to_integral<Vec, Idof>::apply(functors::equal<Vec, Idof>::apply(vec_a, vec_b));
            }
        };
    } // end of namespace functors for template specialization of equal_as_imask for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_as_imask" (primitive equal_as_imask).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::501
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_as_imask<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return functors::to_integral<Vec, Idof>::apply(functors::equal<Vec, Idof>::apply(vec_a, vec_b));
            }
        };
    } // end of namespace functors for template specialization of equal_as_imask for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_as_imask" (primitive equal_as_imask).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::501
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_as_imask<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return functors::to_integral<Vec, Idof>::apply(functors::equal<Vec, Idof>::apply(vec_a, vec_b));
            }
        };
    } // end of namespace functors for template specialization of equal_as_imask for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_as_imask" (primitive equal_as_imask).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::501
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_as_imask<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return functors::to_integral<Vec, Idof>::apply(functors::equal<Vec, Idof>::apply(vec_a, vec_b));
            }
        };
    } // end of namespace functors for template specialization of equal_as_imask for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_as_imask" (primitive equal_as_imask).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::501
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_as_imask<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return functors::to_integral<Vec, Idof>::apply(functors::equal<Vec, Idof>::apply(vec_a, vec_b));
            }
        };
    } // end of namespace functors for template specialization of equal_as_imask for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_as_imask" (primitive equal_as_imask).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::501
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_as_imask<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return functors::to_integral<Vec, Idof>::apply(functors::equal<Vec, Idof>::apply(vec_a, vec_b));
            }
        };
    } // end of namespace functors for template specialization of equal_as_imask for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_as_imask" (primitive equal_as_imask).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::501
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_as_imask<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return functors::to_integral<Vec, Idof>::apply(functors::equal<Vec, Idof>::apply(vec_a, vec_b));
            }
        };
    } // end of namespace functors for template specialization of equal_as_imask for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_as_imask" (primitive equal_as_imask).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::501
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_as_imask<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return functors::to_integral<Vec, Idof>::apply(functors::equal<Vec, Idof>::apply(vec_a, vec_b));
            }
        };
    } // end of namespace functors for template specialization of equal_as_imask for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "equal_as_imask" (primitive equal_as_imask).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::501
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct equal_as_imask<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return functors::to_integral<Vec, Idof>::apply(functors::equal<Vec, Idof>::apply(vec_a, vec_b));
            }
        };
    } // end of namespace functors for template specialization of equal_as_imask for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "nequal_masks" (primitive nequal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::551
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct nequal_masks<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a != mask_b;
            }
        };
    } // end of namespace functors for template specialization of nequal_masks for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "nequal_masks" (primitive nequal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::551
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct nequal_masks<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a != mask_b;
            }
        };
    } // end of namespace functors for template specialization of nequal_masks for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "nequal_masks" (primitive nequal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::551
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct nequal_masks<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a != mask_b;
            }
        };
    } // end of namespace functors for template specialization of nequal_masks for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "nequal_masks" (primitive nequal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::551
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct nequal_masks<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a != mask_b;
            }
        };
    } // end of namespace functors for template specialization of nequal_masks for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "nequal_masks" (primitive nequal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::551
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct nequal_masks<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a != mask_b;
            }
        };
    } // end of namespace functors for template specialization of nequal_masks for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "nequal_masks" (primitive nequal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::551
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct nequal_masks<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a != mask_b;
            }
        };
    } // end of namespace functors for template specialization of nequal_masks for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "nequal_masks" (primitive nequal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::551
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct nequal_masks<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a != mask_b;
            }
        };
    } // end of namespace functors for template specialization of nequal_masks for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "nequal_masks" (primitive nequal).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::551
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct nequal_masks<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a != mask_b;
            }
        };
    } // end of namespace functors for template specialization of nequal_masks for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "nequal_masks" (primitive nequal).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::551
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct nequal_masks<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a != mask_b;
            }
        };
    } // end of namespace functors for template specialization of nequal_masks for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "nequal_masks" (primitive nequal).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/compare.yaml::551
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct nequal_masks<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
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
            static bool apply(
                const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
            ) {
                return mask_a != mask_b;
            }
        };
    } // end of namespace functors for template specialization of nequal_masks for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "less_than" (primitive less_than).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::678
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct less_than<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
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
                return _mm_cmplt_epi8(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of less_than for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "less_than" (primitive less_than).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::678
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct less_than<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
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
                return _mm_cmplt_epi16(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of less_than for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "less_than" (primitive less_than).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::678
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct less_than<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
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
                return _mm_cmplt_epi32(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of less_than for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "less_than" (primitive less_than).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::678
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct less_than<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
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
                return _mm_cmplt_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of less_than for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "less_than" (primitive less_than).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::678
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct less_than<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
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
                return _mm_cmplt_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of less_than for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::881
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct greater_than<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
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
                return _mm_cmpgt_epi8(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of greater_than for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::881
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct greater_than<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
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
                return _mm_cmpgt_epi16(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of greater_than for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::881
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct greater_than<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
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
                return _mm_cmpgt_epi32(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of greater_than for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::881
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct greater_than<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
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
                return _mm_cmpgt_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of greater_than for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "greater_than" (primitive greater_than).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::881
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct greater_than<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
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
                return _mm_cmpgt_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of greater_than for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1079
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct less_than_or_equal<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
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
                return _mm_or_si128(_mm_cmpeq_epi8(vec_a, vec_b), _mm_cmpgt_epi8(vec_b, vec_a));
            }
        };
    } // end of namespace functors for template specialization of less_than_or_equal for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1079
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct less_than_or_equal<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
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
                return _mm_or_si128(_mm_cmpeq_epi16(vec_a, vec_b), _mm_cmpgt_epi16(vec_b, vec_a));
            }
        };
    } // end of namespace functors for template specialization of less_than_or_equal for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1079
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct less_than_or_equal<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
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
                return _mm_or_si128(_mm_cmpeq_epi32(vec_a, vec_b), _mm_cmpgt_epi32(vec_b, vec_a));
            }
        };
    } // end of namespace functors for template specialization of less_than_or_equal for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1085
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct less_than_or_equal<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
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
                return _mm_cmple_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of less_than_or_equal for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "less_than_or_equal" (primitive less_than_or_equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1085
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct less_than_or_equal<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
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
                return _mm_cmple_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of less_than_or_equal for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1303
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct greater_than_or_equal<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
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
                return _mm_or_si128(_mm_cmpeq_epi8(vec_a, vec_b), _mm_cmpgt_epi8(vec_a, vec_b));
            }
        };
    } // end of namespace functors for template specialization of greater_than_or_equal for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1303
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct greater_than_or_equal<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
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
                return _mm_or_si128(_mm_cmpeq_epi16(vec_a, vec_b), _mm_cmpgt_epi16(vec_a, vec_b));
            }
        };
    } // end of namespace functors for template specialization of greater_than_or_equal for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1303
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct greater_than_or_equal<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
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
                return _mm_or_si128(_mm_cmpeq_epi32(vec_a, vec_b), _mm_cmpgt_epi32(vec_a, vec_b));
            }
        };
    } // end of namespace functors for template specialization of greater_than_or_equal for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1315
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct greater_than_or_equal<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
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
                return _mm_cmpge_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of greater_than_or_equal for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "greater_than_or_equal" (primitive greater_than_or_equal).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1315
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct greater_than_or_equal<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
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
                return _mm_cmpge_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of greater_than_or_equal for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "between_inclusive" (primitive between_inclusive).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1554
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct between_inclusive<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
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
                return _mm_and_ps(functors::less_than_or_equal<Vec, Idof>::apply(vec_min, vec_data), functors::less_than_or_equal<Vec, Idof>::apply(vec_data, vec_max));
            }
        };
    } // end of namespace functors for template specialization of between_inclusive for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "between_inclusive" (primitive between_inclusive).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1554
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct between_inclusive<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
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
                return _mm_and_pd(functors::less_than_or_equal<Vec, Idof>::apply(vec_min, vec_data), functors::less_than_or_equal<Vec, Idof>::apply(vec_data, vec_max));
            }
        };
    } // end of namespace functors for template specialization of between_inclusive for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "unequal_zero" (primitive unequal_zero).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1664
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct unequal_zero<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
            static bool apply(
                const typename Vec::register_type vec
            ) {
                return (_mm_movemask_ps(_mm_cmpneq_ps(vec, _mm_setzero_ps())) != 0);
            }
        };
    } // end of namespace functors for template specialization of unequal_zero for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "unequal_zero" (primitive unequal_zero).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1664
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct unequal_zero<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
            static bool apply(
                const typename Vec::register_type vec
            ) {
                return (_mm_movemask_pd(_mm_cmpneq_pd(vec, _mm_setzero_pd())) != 0);
            }
        };
    } // end of namespace functors for template specialization of unequal_zero for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "count_matches" (primitive count_matches).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1890
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct count_matches<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
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
            static typename Vec::base_type apply(
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                Vec::base_type result = 0;
                __m128i value = _mm_set1_epi8(val);
                __m128i is_equal = _mm_cmpeq_epi8(vec, value);
                int mask = _mm_movemask_epi8(is_equal);

                for (int i = 0; i < Vec::vector_element_count(); i++){
                  if(mask & (1 << i)){
                    result ++;
                  }
                }
                return result;
            }
        };
    } // end of namespace functors for template specialization of count_matches for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "count_matches" (primitive count_matches).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/compare.yaml::1890
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct count_matches<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
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
            static typename Vec::base_type apply(
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                Vec::base_type result = 0;
                __m128i value = _mm_set1_epi8(val);
                __m128i is_equal = _mm_cmpeq_epi8(vec, value);
                int mask = _mm_movemask_epi8(is_equal);

                for (int i = 0; i < Vec::vector_element_count(); i++){
                  if(mask & (1 << i)){
                    result ++;
                  }
                }
                return result;
            }
        };
    } // end of namespace functors for template specialization of count_matches for sse using int8_t.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_COMPARE_COMPARE_SSE_HPP