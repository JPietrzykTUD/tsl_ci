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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/sse_only/include/generated/definitions/calc/calc_sse.hpp
 * \date 2024-02-29
 * \brief This file contains arithmetic primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : d17f8eb (d17f8eb76bb8c5acffdd50fd389e77f1972f0fa7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_SSE_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_SSE_HPP

#include <array>
#include <cstddef>
#include <cmath>
#include <algorithm>
#include "../../declarations/calc.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::106
         * @note: Signed addition.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_epi8(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of add for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::106
         * @note: Signed addition.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_epi16(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of add for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::106
         * @note: Signed addition.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_epi32(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of add for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::106
         * @note: Signed addition.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_epi64(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of add for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::106
         * @note: Signed addition.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_epi8(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of add for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::106
         * @note: Signed addition.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_epi16(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of add for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::106
         * @note: Signed addition.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_epi32(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of add for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::106
         * @note: Signed addition.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_epi64(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of add for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/calc.yaml::111
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of add for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::115
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of add for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::244
         * @note: Signed addition.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_sub_epi8(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of sub for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::244
         * @note: Signed addition.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_sub_epi16(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of sub for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::244
         * @note: Signed addition.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_sub_epi32(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of sub for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::244
         * @note: Signed addition.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_sub_epi64(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of sub for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::244
         * @note: Signed addition.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_sub_epi8(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of sub for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::244
         * @note: Signed addition.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_sub_epi16(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of sub for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::244
         * @note: Signed addition.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_sub_epi32(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of sub for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::244
         * @note: Signed addition.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_sub_epi64(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of sub for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/calc.yaml::249
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_sub_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of sub for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::253
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_sub_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of sub for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::372
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_epi8(vec_a, _mm_and_si128(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::372
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_epi8(vec_a, _mm_and_si128(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::372
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_epi16(vec_a, _mm_and_si128(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::372
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_epi16(vec_a, _mm_and_si128(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::372
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_epi32(vec_a, _mm_and_si128(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::372
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_epi32(vec_a, _mm_and_si128(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::372
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_epi64(vec_a, _mm_and_si128(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::372
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_epi64(vec_a, _mm_and_si128(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/calc.yaml::376
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_ps(vec_a, _mm_and_ps(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::380
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_add_pd(vec_a, _mm_and_pd(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/calc.yaml::580
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_mul_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of mul for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::584
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_mul_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of mul for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::588
         * @note: Signed multiplication.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_mullo_epi16(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of mul for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::588
         * @note: Signed multiplication.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_mullo_epi16(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of mul for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::603
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= buffer_b[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::603
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= buffer_b[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::603
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= buffer_b[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::603
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= buffer_b[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::603
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= buffer_b[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::603
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= buffer_b[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/calc.yaml::746
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                return _mm_mul_ps(vec_a, tsl::set1<Vec>(mul_var));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::750
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                return _mm_mul_pd(vec_a, tsl::set1<Vec>(mul_var));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::754
         * @note: Signed multiplication.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                return _mm_mullo_epi16(vec_a, tsl::set1<Vec>(mul_var));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::754
         * @note: Signed multiplication.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                return _mm_mullo_epi16(vec_a, tsl::set1<Vec>(mul_var));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::769
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= mul_var;
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::769
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= mul_var;
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::769
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= mul_var;
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::769
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= mul_var;
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::769
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= mul_var;
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::769
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= mul_var;
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::959
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );

                return _mm_cvtsd_f64(value) + _mm_cvtsd_f64(_mm_castsi128_pd(_mm_bsrli_si128(_mm_castpd_si128(value),sizeof(double))));
            }
        };
    } // end of namespace functors for template specialization of hadd for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::988
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
                typename Vec::base_type result = 0;
                _mm_store_si128(reinterpret_cast<__m128i *>(buffer.data()), value);
                for  (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                      result += buffer[i];
                }
                return result;
            }
        };
    } // end of namespace functors for template specialization of hadd for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::988
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
                typename Vec::base_type result = 0;
                _mm_store_si128(reinterpret_cast<__m128i *>(buffer.data()), value);
                for  (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                      result += buffer[i];
                }
                return result;
            }
        };
    } // end of namespace functors for template specialization of hadd for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::988
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
                typename Vec::base_type result = 0;
                _mm_store_si128(reinterpret_cast<__m128i *>(buffer.data()), value);
                for  (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                      result += buffer[i];
                }
                return result;
            }
        };
    } // end of namespace functors for template specialization of hadd for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::988
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
                typename Vec::base_type result = 0;
                _mm_store_si128(reinterpret_cast<__m128i *>(buffer.data()), value);
                for  (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                      result += buffer[i];
                }
                return result;
            }
        };
    } // end of namespace functors for template specialization of hadd for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1118
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_min_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of min for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1122
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_min_epu8(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of min for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1122
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_min_epi16(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of min for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1122
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_min_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of min for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1270
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_div_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of div for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1270
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_div_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of div for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive div is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] /= buffer_b[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of div for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive div is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] /= buffer_b[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of div for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive div is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] /= buffer_b[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of div for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive div is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] /= buffer_b[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of div for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive div is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] /= buffer_b[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of div for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive div is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] /= buffer_b[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of div for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive div is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] /= buffer_b[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of div for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive div is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_a.data()), vec_a);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer_a[i] /= buffer_b[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of div for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod" (primitive mod).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1486
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_mod
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mod is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer1;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer2;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer1.data()), vec_data);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer2.data()), vec_mod);
                for (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer1[i] = buffer1[i] % buffer2[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const*>(buffer1.data()));
            }
        };
    } // end of namespace functors for template specialization of mod for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod" (primitive mod).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1486
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_mod
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mod is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer1;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer2;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer1.data()), vec_data);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer2.data()), vec_mod);
                for (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer1[i] = buffer1[i] % buffer2[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const*>(buffer1.data()));
            }
        };
    } // end of namespace functors for template specialization of mod for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod" (primitive mod).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1486
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_mod
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mod is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer1;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer2;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer1.data()), vec_data);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer2.data()), vec_mod);
                for (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer1[i] = buffer1[i] % buffer2[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const*>(buffer1.data()));
            }
        };
    } // end of namespace functors for template specialization of mod for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod" (primitive mod).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1486
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_mod
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mod is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer1;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer2;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer1.data()), vec_data);
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer2.data()), vec_mod);
                for (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer1[i] = buffer1[i] % buffer2[i];
                }
                return _mm_load_si128(reinterpret_cast<__m128i const*>(buffer1.data()));
            }
        };
    } // end of namespace functors for template specialization of mod for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_constant" (primitive mod).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1719
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_constant<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mod_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer.data()), vec);
                for (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer[i] = buffer[i] % val;
                }
                return _mm_load_si128(reinterpret_cast<__m128i const*>(buffer.data()));
            }
        };
    } // end of namespace functors for template specialization of mod_constant for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_constant" (primitive mod).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1719
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_constant<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mod_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer.data()), vec);
                for (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer[i] = buffer[i] % val;
                }
                return _mm_load_si128(reinterpret_cast<__m128i const*>(buffer.data()));
            }
        };
    } // end of namespace functors for template specialization of mod_constant for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_constant" (primitive mod).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1719
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_constant<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mod_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer.data()), vec);
                for (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer[i] = buffer[i] % val;
                }
                return _mm_load_si128(reinterpret_cast<__m128i const*>(buffer.data()));
            }
        };
    } // end of namespace functors for template specialization of mod_constant for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_constant" (primitive mod).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1719
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_constant<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mod_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer.data()), vec);
                for (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer[i] = buffer[i] % val;
                }
                return _mm_load_si128(reinterpret_cast<__m128i const*>(buffer.data()));
            }
        };
    } // end of namespace functors for template specialization of mod_constant for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_safe" (primitive mod_safe).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1982
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_safe<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mod_safe is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer.data()), vec);
                for (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer[i] = buffer[i] % val;
                }
                return _mm_load_si128(reinterpret_cast<__m128i const*>(buffer.data()));
            }
        };
    } // end of namespace functors for template specialization of mod_safe for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_safe" (primitive mod_safe).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1982
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_safe<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mod_safe is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer.data()), vec);
                for (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer[i] = buffer[i] % val;
                }
                return _mm_load_si128(reinterpret_cast<__m128i const*>(buffer.data()));
            }
        };
    } // end of namespace functors for template specialization of mod_safe for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_safe" (primitive mod_safe).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1982
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_safe<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mod_safe is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer.data()), vec);
                for (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer[i] = buffer[i] % val;
                }
                return _mm_load_si128(reinterpret_cast<__m128i const*>(buffer.data()));
            }
        };
    } // end of namespace functors for template specialization of mod_safe for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_safe" (primitive mod_safe).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1982
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_safe<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mod_safe is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
                _mm_store_si128(reinterpret_cast<__m128i*>(buffer.data()), vec);
                for (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  buffer[i] = buffer[i] % val;
                }
                return _mm_load_si128(reinterpret_cast<__m128i const*>(buffer.data()));
            }
        };
    } // end of namespace functors for template specialization of mod_safe for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse', 'sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2169
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = typename Vec::base_type;
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
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                typename Vec::register_type max1, max2, max3, max4;
                max1 = _mm_shuffle_ps(data, data, _MM_SHUFFLE(0,0,3,2));
                max2 = _mm_max_ps(data,max1);
                max3 = _mm_shuffle_ps(max2, max2, _MM_SHUFFLE(0,0,0,1));
                max4 = _mm_max_ps(max2,max3);
                return tsl::extract_value<Vec, 0>(max4);
            }
        };
    } // end of namespace functors for template specialization of hmax for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2188
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = typename Vec::base_type;
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
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                typename Vec::register_type y, max1;
                y = _mm_shuffle_pd(data, data, 1);
                max1 = _mm_max_pd(data, y);
                return tsl::extract_value<Vec, 0>(max1);
            }
        };
    } // end of namespace functors for template specialization of hmax for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2196
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hmax is not supported by your hardware natively while it is forced by using native" );

                auto arr = tsl::to_array<Vec>(data);
                return *std::max_element(arr.begin(), arr.end());
            }
        };
    } // end of namespace functors for template specialization of hmax for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2196
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hmax is not supported by your hardware natively while it is forced by using native" );

                auto arr = tsl::to_array<Vec>(data);
                return *std::max_element(arr.begin(), arr.end());
            }
        };
    } // end of namespace functors for template specialization of hmax for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2196
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hmax is not supported by your hardware natively while it is forced by using native" );

                auto arr = tsl::to_array<Vec>(data);
                return *std::max_element(arr.begin(), arr.end());
            }
        };
    } // end of namespace functors for template specialization of hmax for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2196
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hmax is not supported by your hardware natively while it is forced by using native" );

                auto arr = tsl::to_array<Vec>(data);
                return *std::max_element(arr.begin(), arr.end());
            }
        };
    } // end of namespace functors for template specialization of hmax for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2196
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hmax is not supported by your hardware natively while it is forced by using native" );

                auto arr = tsl::to_array<Vec>(data);
                return *std::max_element(arr.begin(), arr.end());
            }
        };
    } // end of namespace functors for template specialization of hmax for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2196
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hmax is not supported by your hardware natively while it is forced by using native" );

                auto arr = tsl::to_array<Vec>(data);
                return *std::max_element(arr.begin(), arr.end());
            }
        };
    } // end of namespace functors for template specialization of hmax for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2196
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hmax is not supported by your hardware natively while it is forced by using native" );

                auto arr = tsl::to_array<Vec>(data);
                return *std::max_element(arr.begin(), arr.end());
            }
        };
    } // end of namespace functors for template specialization of hmax for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2196
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hmax is not supported by your hardware natively while it is forced by using native" );

                auto arr = tsl::to_array<Vec>(data);
                return *std::max_element(arr.begin(), arr.end());
            }
        };
    } // end of namespace functors for template specialization of hmax for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse', 'sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2337
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = typename Vec::base_type;
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
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                typename Vec::register_type min1, min2, min3, min4;
                min1 = _mm_shuffle_ps(data, data, _MM_SHUFFLE(0,0,3,2));
                min2 = _mm_min_ps(data,min1);
                min3 = _mm_shuffle_ps(min2, min2, _MM_SHUFFLE(0,0,0,1));
                min4 = _mm_min_ps(min2,min3);
                return tsl::extract_value<Vec, 0>(min4);
            }
        };
    } // end of namespace functors for template specialization of hmin for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2356
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = typename Vec::base_type;
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
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                typename Vec::register_type y, min1;
                y = _mm_shuffle_pd(data, data, 1);
                min1 = _mm_min_pd(data, y);
                return tsl::extract_value<Vec, 0>(min1);
            }
        };
    } // end of namespace functors for template specialization of hmin for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2364
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hmin is not supported by your hardware natively while it is forced by using native" );

                auto arr = tsl::to_array<Vec>(data);
                return *std::min_element(arr.begin(), arr.end());
            }
        };
    } // end of namespace functors for template specialization of hmin for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2364
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hmin is not supported by your hardware natively while it is forced by using native" );

                auto arr = tsl::to_array<Vec>(data);
                return *std::min_element(arr.begin(), arr.end());
            }
        };
    } // end of namespace functors for template specialization of hmin for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2364
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hmin is not supported by your hardware natively while it is forced by using native" );

                auto arr = tsl::to_array<Vec>(data);
                return *std::min_element(arr.begin(), arr.end());
            }
        };
    } // end of namespace functors for template specialization of hmin for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2364
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hmin is not supported by your hardware natively while it is forced by using native" );

                auto arr = tsl::to_array<Vec>(data);
                return *std::min_element(arr.begin(), arr.end());
            }
        };
    } // end of namespace functors for template specialization of hmin for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2364
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hmin is not supported by your hardware natively while it is forced by using native" );

                auto arr = tsl::to_array<Vec>(data);
                return *std::min_element(arr.begin(), arr.end());
            }
        };
    } // end of namespace functors for template specialization of hmin for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2364
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hmin is not supported by your hardware natively while it is forced by using native" );

                auto arr = tsl::to_array<Vec>(data);
                return *std::min_element(arr.begin(), arr.end());
            }
        };
    } // end of namespace functors for template specialization of hmin for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2364
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hmin is not supported by your hardware natively while it is forced by using native" );

                auto arr = tsl::to_array<Vec>(data);
                return *std::min_element(arr.begin(), arr.end());
            }
        };
    } // end of namespace functors for template specialization of hmin for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2364
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hmin is not supported by your hardware natively while it is forced by using native" );

                auto arr = tsl::to_array<Vec>(data);
                return *std::min_element(arr.begin(), arr.end());
            }
        };
    } // end of namespace functors for template specialization of hmin for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2471
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_max_epi16(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of max for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2471
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_max_epu8(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of max for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2471
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_max_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of max for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2475
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return _mm_max_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of max for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse', 'sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2498
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive max is not supported by your hardware natively while it is forced by using native" );

                auto arr_a = tsl::to_array<Vec>(vec_a);
                auto arr_b = tsl::to_array<Vec>(vec_b);
                typename Vec::base_type result[Vec::vector_element_count()];
                for(size_t i = 0; i < Vec::vector_element_count(); i++){
                  (arr_a[i] < arr_b [i]) ? result[i] = arr_b[i] : result[i] = arr_a[i];
                }
                return tsl::loadu<Vec>(result);
            }
        };
    } // end of namespace functors for template specialization of max for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse', 'sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2498
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive max is not supported by your hardware natively while it is forced by using native" );

                auto arr_a = tsl::to_array<Vec>(vec_a);
                auto arr_b = tsl::to_array<Vec>(vec_b);
                typename Vec::base_type result[Vec::vector_element_count()];
                for(size_t i = 0; i < Vec::vector_element_count(); i++){
                  (arr_a[i] < arr_b [i]) ? result[i] = arr_b[i] : result[i] = arr_a[i];
                }
                return tsl::loadu<Vec>(result);
            }
        };
    } // end of namespace functors for template specialization of max for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse', 'sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2498
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive max is not supported by your hardware natively while it is forced by using native" );

                auto arr_a = tsl::to_array<Vec>(vec_a);
                auto arr_b = tsl::to_array<Vec>(vec_b);
                typename Vec::base_type result[Vec::vector_element_count()];
                for(size_t i = 0; i < Vec::vector_element_count(); i++){
                  (arr_a[i] < arr_b [i]) ? result[i] = arr_b[i] : result[i] = arr_a[i];
                }
                return tsl::loadu<Vec>(result);
            }
        };
    } // end of namespace functors for template specialization of max for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse', 'sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2498
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive max is not supported by your hardware natively while it is forced by using native" );

                auto arr_a = tsl::to_array<Vec>(vec_a);
                auto arr_b = tsl::to_array<Vec>(vec_b);
                typename Vec::base_type result[Vec::vector_element_count()];
                for(size_t i = 0; i < Vec::vector_element_count(); i++){
                  (arr_a[i] < arr_b [i]) ? result[i] = arr_b[i] : result[i] = arr_a[i];
                }
                return tsl::loadu<Vec>(result);
            }
        };
    } // end of namespace functors for template specialization of max for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse', 'sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2498
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive max is not supported by your hardware natively while it is forced by using native" );

                auto arr_a = tsl::to_array<Vec>(vec_a);
                auto arr_b = tsl::to_array<Vec>(vec_b);
                typename Vec::base_type result[Vec::vector_element_count()];
                for(size_t i = 0; i < Vec::vector_element_count(); i++){
                  (arr_a[i] < arr_b [i]) ? result[i] = arr_b[i] : result[i] = arr_a[i];
                }
                return tsl::loadu<Vec>(result);
            }
        };
    } // end of namespace functors for template specialization of max for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse', 'sse2']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2498
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive max is not supported by your hardware natively while it is forced by using native" );

                auto arr_a = tsl::to_array<Vec>(vec_a);
                auto arr_b = tsl::to_array<Vec>(vec_b);
                typename Vec::base_type result[Vec::vector_element_count()];
                for(size_t i = 0; i < Vec::vector_element_count(); i++){
                  (arr_a[i] < arr_b [i]) ? result[i] = arr_b[i] : result[i] = arr_a[i];
                }
                return tsl::loadu<Vec>(result);
            }
        };
    } // end of namespace functors for template specialization of max for sse using int64_t.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_SSE_HPP