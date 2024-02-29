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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/sse_only/include/generated/definitions/binary/binary_sse.hpp
 * \date 2024-02-29
 * \brief Bit manipulation primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : d17f8eb (d17f8eb76bb8c5acffdd50fd389e77f1972f0fa7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_SSE_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_SSE_HPP

#include "../../declarations/binary.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<uint8_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_and_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_and for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<uint16_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_and_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_and for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<uint32_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_and_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_and for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<uint64_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_and_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_and for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<int8_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_and_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_and for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<int16_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_and_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_and for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<int32_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_and_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_and for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<int64_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_and_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_and for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::79
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<float, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_and_ps(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_and for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::83
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<double, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_and_pd(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_and for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::218
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<uint8_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_or_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_or for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::218
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<uint16_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_or_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_or for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::218
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<uint32_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_or_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_or for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::218
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<uint64_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_or_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_or for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::218
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<int8_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_or_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_or for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::218
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<int16_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_or_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_or for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::218
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<int32_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_or_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_or for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::218
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<int64_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_or_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_or for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::222
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<float, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_or_ps(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_or for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::226
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<double, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_or_pd(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_or for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::352
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<uint8_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_xor_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_xor for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::352
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<uint16_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_xor_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_xor for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::352
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<uint32_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_xor_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_xor for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::352
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<uint64_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_xor_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_xor for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::352
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<int8_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_xor_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_xor for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::352
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<int16_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_xor_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_xor for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::352
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<int32_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_xor_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_xor for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::352
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<int64_t, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_xor_si128(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_xor for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::356
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<float, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_xor_ps(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_xor for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::360
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<double, sse>, Idof> {
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                return _mm_xor_pd(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_xor for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::460
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const unsigned int>;
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
                const typename Vec::register_type data, const unsigned int shift
            ) {
                return _mm_slli_epi16(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::460
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const unsigned int>;
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
                const typename Vec::register_type data, const unsigned int shift
            ) {
                return _mm_slli_epi32(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::460
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const unsigned int>;
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
                const typename Vec::register_type data, const unsigned int shift
            ) {
                return _mm_slli_epi64(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::460
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const unsigned int>;
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
                const typename Vec::register_type data, const unsigned int shift
            ) {
                return _mm_slli_epi16(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::460
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const unsigned int>;
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
                const typename Vec::register_type data, const unsigned int shift
            ) {
                return _mm_slli_epi32(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::460
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const unsigned int>;
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
                const typename Vec::register_type data, const unsigned int shift
            ) {
                return _mm_slli_epi64(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::699
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right<simd<uint16_t, sse>, PreserveSign, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const unsigned int>;
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
                const typename Vec::register_type data, const unsigned int shift
            ) {
                if constexpr ((std::is_signed_v<typename Vec::base_type>) && (PreserveSign)) {
                  return _mm_srai_epi16(data, shift);
                } else {
                  return _mm_srli_epi16(data, shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::699
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right<simd<uint32_t, sse>, PreserveSign, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const unsigned int>;
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
                const typename Vec::register_type data, const unsigned int shift
            ) {
                if constexpr ((std::is_signed_v<typename Vec::base_type>) && (PreserveSign)) {
                  return _mm_srai_epi32(data, shift);
                } else {
                  return _mm_srli_epi32(data, shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::699
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right<simd<int16_t, sse>, PreserveSign, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const unsigned int>;
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
                const typename Vec::register_type data, const unsigned int shift
            ) {
                if constexpr ((std::is_signed_v<typename Vec::base_type>) && (PreserveSign)) {
                  return _mm_srai_epi16(data, shift);
                } else {
                  return _mm_srli_epi16(data, shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::699
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right<simd<int32_t, sse>, PreserveSign, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const unsigned int>;
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
                const typename Vec::register_type data, const unsigned int shift
            ) {
                if constexpr ((std::is_signed_v<typename Vec::base_type>) && (PreserveSign)) {
                  return _mm_srai_epi32(data, shift);
                } else {
                  return _mm_srli_epi32(data, shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::699
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right<simd<uint64_t, sse>, PreserveSign, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const unsigned int>;
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
                const typename Vec::register_type data, const unsigned int shift
            ) {
                if constexpr ((std::is_signed_v<typename Vec::base_type>) && (PreserveSign)) {
                  return _mm_srai_epi64(data, shift);
                } else {
                  return _mm_srli_epi64(data, shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1122
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<uint8_t, sse>, PreserveSign, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const unsigned int>;
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
                const typename Vec::imask_type data, const unsigned int shift
            ) {
                if constexpr ((std::is_signed_v<typename Vec::imask_type>) && (!PreserveSign)) {
                  return static_cast<std::make_unsigned_t<typename Vec::imask_type>>(data) >> shift;
                } else {
                  return data >> shift;
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_imask for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1122
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<int8_t, sse>, PreserveSign, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const unsigned int>;
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
                const typename Vec::imask_type data, const unsigned int shift
            ) {
                if constexpr ((std::is_signed_v<typename Vec::imask_type>) && (!PreserveSign)) {
                  return static_cast<std::make_unsigned_t<typename Vec::imask_type>>(data) >> shift;
                } else {
                  return data >> shift;
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_imask for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1122
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<uint16_t, sse>, PreserveSign, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const unsigned int>;
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
                const typename Vec::imask_type data, const unsigned int shift
            ) {
                if constexpr ((std::is_signed_v<typename Vec::imask_type>) && (!PreserveSign)) {
                  return static_cast<std::make_unsigned_t<typename Vec::imask_type>>(data) >> shift;
                } else {
                  return data >> shift;
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_imask for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1122
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<int16_t, sse>, PreserveSign, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const unsigned int>;
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
                const typename Vec::imask_type data, const unsigned int shift
            ) {
                if constexpr ((std::is_signed_v<typename Vec::imask_type>) && (!PreserveSign)) {
                  return static_cast<std::make_unsigned_t<typename Vec::imask_type>>(data) >> shift;
                } else {
                  return data >> shift;
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_imask for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1122
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<uint32_t, sse>, PreserveSign, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const unsigned int>;
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
                const typename Vec::imask_type data, const unsigned int shift
            ) {
                if constexpr ((std::is_signed_v<typename Vec::imask_type>) && (!PreserveSign)) {
                  return static_cast<std::make_unsigned_t<typename Vec::imask_type>>(data) >> shift;
                } else {
                  return data >> shift;
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_imask for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1122
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<int32_t, sse>, PreserveSign, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const unsigned int>;
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
                const typename Vec::imask_type data, const unsigned int shift
            ) {
                if constexpr ((std::is_signed_v<typename Vec::imask_type>) && (!PreserveSign)) {
                  return static_cast<std::make_unsigned_t<typename Vec::imask_type>>(data) >> shift;
                } else {
                  return data >> shift;
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_imask for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1122
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<uint64_t, sse>, PreserveSign, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const unsigned int>;
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
                const typename Vec::imask_type data, const unsigned int shift
            ) {
                if constexpr ((std::is_signed_v<typename Vec::imask_type>) && (!PreserveSign)) {
                  return static_cast<std::make_unsigned_t<typename Vec::imask_type>>(data) >> shift;
                } else {
                  return data >> shift;
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_imask for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1122
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<int64_t, sse>, PreserveSign, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const unsigned int>;
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
                const typename Vec::imask_type data, const unsigned int shift
            ) {
                if constexpr ((std::is_signed_v<typename Vec::imask_type>) && (!PreserveSign)) {
                  return static_cast<std::make_unsigned_t<typename Vec::imask_type>>(data) >> shift;
                } else {
                  return data >> shift;
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_imask for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1122
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<float, sse>, PreserveSign, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const unsigned int>;
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
                const typename Vec::imask_type data, const unsigned int shift
            ) {
                if constexpr ((std::is_signed_v<typename Vec::imask_type>) && (!PreserveSign)) {
                  return static_cast<std::make_unsigned_t<typename Vec::imask_type>>(data) >> shift;
                } else {
                  return data >> shift;
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_imask for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1122
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<double, sse>, PreserveSign, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const unsigned int>;
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
                const typename Vec::imask_type data, const unsigned int shift
            ) {
                if constexpr ((std::is_signed_v<typename Vec::imask_type>) && (!PreserveSign)) {
                  return static_cast<std::make_unsigned_t<typename Vec::imask_type>>(data) >> shift;
                } else {
                  return data >> shift;
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_imask for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1181
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::offset_base_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type>;
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
            static typename Vec::offset_base_type apply(
                const typename Vec::base_type data
            ) {
                return details::clz<typename Vec::base_type, typename Vec::offset_base_type>(data);
            }
        };
    } // end of namespace functors for template specialization of lzc for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1181
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::offset_base_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type>;
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
            static typename Vec::offset_base_type apply(
                const typename Vec::base_type data
            ) {
                return details::clz<typename Vec::base_type, typename Vec::offset_base_type>(data);
            }
        };
    } // end of namespace functors for template specialization of lzc for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1181
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::offset_base_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type>;
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
            static typename Vec::offset_base_type apply(
                const typename Vec::base_type data
            ) {
                return details::clz<typename Vec::base_type, typename Vec::offset_base_type>(data);
            }
        };
    } // end of namespace functors for template specialization of lzc for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1181
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::offset_base_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type>;
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
            static typename Vec::offset_base_type apply(
                const typename Vec::base_type data
            ) {
                return details::clz<typename Vec::base_type, typename Vec::offset_base_type>(data);
            }
        };
    } // end of namespace functors for template specialization of lzc for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1181
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::offset_base_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type>;
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
            static typename Vec::offset_base_type apply(
                const typename Vec::base_type data
            ) {
                return details::clz<typename Vec::base_type, typename Vec::offset_base_type>(data);
            }
        };
    } // end of namespace functors for template specialization of lzc for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1181
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::offset_base_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type>;
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
            static typename Vec::offset_base_type apply(
                const typename Vec::base_type data
            ) {
                return details::clz<typename Vec::base_type, typename Vec::offset_base_type>(data);
            }
        };
    } // end of namespace functors for template specialization of lzc for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1181
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::offset_base_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type>;
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
            static typename Vec::offset_base_type apply(
                const typename Vec::base_type data
            ) {
                return details::clz<typename Vec::base_type, typename Vec::offset_base_type>(data);
            }
        };
    } // end of namespace functors for template specialization of lzc for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1181
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::offset_base_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type>;
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
            static typename Vec::offset_base_type apply(
                const typename Vec::base_type data
            ) {
                return details::clz<typename Vec::base_type, typename Vec::offset_base_type>(data);
            }
        };
    } // end of namespace functors for template specialization of lzc for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_vector" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1257
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_vector<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::offset_base_register_type;
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
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive lzc_vector is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) typename Vec::base_type data_arr[Vec::vector_element_count()];
                tsl::store<Vec>(data_arr, data);
                alignas(Vec::vector_alignment()) typename Vec::base_type result[Vec::vector_element_count()];
                TSL_UNROLL(Vec::vector_element_count())
                for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = details::clz<typename Vec::base_type, typename Vec::offset_base_type>(data_arr[i]);
                }
                return tsl::load<Vec>(result);
            }
        };
    } // end of namespace functors for template specialization of lzc_vector for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_vector" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1257
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_vector<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::offset_base_register_type;
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
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive lzc_vector is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) typename Vec::base_type data_arr[Vec::vector_element_count()];
                tsl::store<Vec>(data_arr, data);
                alignas(Vec::vector_alignment()) typename Vec::base_type result[Vec::vector_element_count()];
                TSL_UNROLL(Vec::vector_element_count())
                for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = details::clz<typename Vec::base_type, typename Vec::offset_base_type>(data_arr[i]);
                }
                return tsl::load<Vec>(result);
            }
        };
    } // end of namespace functors for template specialization of lzc_vector for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_vector" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1257
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_vector<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::offset_base_register_type;
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
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive lzc_vector is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) typename Vec::base_type data_arr[Vec::vector_element_count()];
                tsl::store<Vec>(data_arr, data);
                alignas(Vec::vector_alignment()) typename Vec::base_type result[Vec::vector_element_count()];
                TSL_UNROLL(Vec::vector_element_count())
                for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = details::clz<typename Vec::base_type, typename Vec::offset_base_type>(data_arr[i]);
                }
                return tsl::load<Vec>(result);
            }
        };
    } // end of namespace functors for template specialization of lzc_vector for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_vector" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1257
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_vector<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::offset_base_register_type;
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
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive lzc_vector is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) typename Vec::base_type data_arr[Vec::vector_element_count()];
                tsl::store<Vec>(data_arr, data);
                alignas(Vec::vector_alignment()) typename Vec::base_type result[Vec::vector_element_count()];
                TSL_UNROLL(Vec::vector_element_count())
                for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = details::clz<typename Vec::base_type, typename Vec::offset_base_type>(data_arr[i]);
                }
                return tsl::load<Vec>(result);
            }
        };
    } // end of namespace functors for template specialization of lzc_vector for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_vector" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1257
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_vector<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::offset_base_register_type;
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
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive lzc_vector is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) typename Vec::base_type data_arr[Vec::vector_element_count()];
                tsl::store<Vec>(data_arr, data);
                alignas(Vec::vector_alignment()) typename Vec::base_type result[Vec::vector_element_count()];
                TSL_UNROLL(Vec::vector_element_count())
                for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = details::clz<typename Vec::base_type, typename Vec::offset_base_type>(data_arr[i]);
                }
                return tsl::load<Vec>(result);
            }
        };
    } // end of namespace functors for template specialization of lzc_vector for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_vector" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1257
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_vector<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::offset_base_register_type;
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
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive lzc_vector is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) typename Vec::base_type data_arr[Vec::vector_element_count()];
                tsl::store<Vec>(data_arr, data);
                alignas(Vec::vector_alignment()) typename Vec::base_type result[Vec::vector_element_count()];
                TSL_UNROLL(Vec::vector_element_count())
                for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = details::clz<typename Vec::base_type, typename Vec::offset_base_type>(data_arr[i]);
                }
                return tsl::load<Vec>(result);
            }
        };
    } // end of namespace functors for template specialization of lzc_vector for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_vector" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1257
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_vector<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::offset_base_register_type;
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
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive lzc_vector is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) typename Vec::base_type data_arr[Vec::vector_element_count()];
                tsl::store<Vec>(data_arr, data);
                alignas(Vec::vector_alignment()) typename Vec::base_type result[Vec::vector_element_count()];
                TSL_UNROLL(Vec::vector_element_count())
                for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = details::clz<typename Vec::base_type, typename Vec::offset_base_type>(data_arr[i]);
                }
                return tsl::load<Vec>(result);
            }
        };
    } // end of namespace functors for template specialization of lzc_vector for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_vector" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1257
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_vector<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::offset_base_register_type;
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
            static typename Vec::offset_base_register_type apply(
                const typename Vec::register_type data
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive lzc_vector is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) typename Vec::base_type data_arr[Vec::vector_element_count()];
                tsl::store<Vec>(data_arr, data);
                alignas(Vec::vector_alignment()) typename Vec::base_type result[Vec::vector_element_count()];
                TSL_UNROLL(Vec::vector_element_count())
                for(size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = details::clz<typename Vec::base_type, typename Vec::offset_base_type>(data_arr[i]);
                }
                return tsl::load<Vec>(result);
            }
        };
    } // end of namespace functors for template specialization of lzc_vector for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1572
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type>;
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
                const typename Vec::imask_type data
            ) {
                return details::clz<typename Vec::imask_type, typename Vec::imask_type>(data);
            }
        };
    } // end of namespace functors for template specialization of lzc_imask for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1572
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type>;
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
                const typename Vec::imask_type data
            ) {
                return details::clz<typename Vec::imask_type, typename Vec::imask_type>(data);
            }
        };
    } // end of namespace functors for template specialization of lzc_imask for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1572
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type>;
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
                const typename Vec::imask_type data
            ) {
                return details::clz<typename Vec::imask_type, typename Vec::imask_type>(data);
            }
        };
    } // end of namespace functors for template specialization of lzc_imask for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1572
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type>;
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
                const typename Vec::imask_type data
            ) {
                return details::clz<typename Vec::imask_type, typename Vec::imask_type>(data);
            }
        };
    } // end of namespace functors for template specialization of lzc_imask for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1572
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type>;
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
                const typename Vec::imask_type data
            ) {
                return details::clz<typename Vec::imask_type, typename Vec::imask_type>(data);
            }
        };
    } // end of namespace functors for template specialization of lzc_imask for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1572
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type>;
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
                const typename Vec::imask_type data
            ) {
                return details::clz<typename Vec::imask_type, typename Vec::imask_type>(data);
            }
        };
    } // end of namespace functors for template specialization of lzc_imask for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1572
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type>;
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
                const typename Vec::imask_type data
            ) {
                return details::clz<typename Vec::imask_type, typename Vec::imask_type>(data);
            }
        };
    } // end of namespace functors for template specialization of lzc_imask for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1572
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type>;
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
                const typename Vec::imask_type data
            ) {
                return details::clz<typename Vec::imask_type, typename Vec::imask_type>(data);
            }
        };
    } // end of namespace functors for template specialization of lzc_imask for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1616
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type>;
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
                const typename Vec::imask_type data
            ) {
                return details::ctz<typename Vec::imask_type, typename Vec::imask_type>(data);
            }
        };
    } // end of namespace functors for template specialization of tzc_imask for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1616
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type>;
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
                const typename Vec::imask_type data
            ) {
                return details::ctz<typename Vec::imask_type, typename Vec::imask_type>(data);
            }
        };
    } // end of namespace functors for template specialization of tzc_imask for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1616
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type>;
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
                const typename Vec::imask_type data
            ) {
                return details::ctz<typename Vec::imask_type, typename Vec::imask_type>(data);
            }
        };
    } // end of namespace functors for template specialization of tzc_imask for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1616
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type>;
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
                const typename Vec::imask_type data
            ) {
                return details::ctz<typename Vec::imask_type, typename Vec::imask_type>(data);
            }
        };
    } // end of namespace functors for template specialization of tzc_imask for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1616
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type>;
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
                const typename Vec::imask_type data
            ) {
                return details::ctz<typename Vec::imask_type, typename Vec::imask_type>(data);
            }
        };
    } // end of namespace functors for template specialization of tzc_imask for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1616
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type>;
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
                const typename Vec::imask_type data
            ) {
                return details::ctz<typename Vec::imask_type, typename Vec::imask_type>(data);
            }
        };
    } // end of namespace functors for template specialization of tzc_imask for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1616
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type>;
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
                const typename Vec::imask_type data
            ) {
                return details::ctz<typename Vec::imask_type, typename Vec::imask_type>(data);
            }
        };
    } // end of namespace functors for template specialization of tzc_imask for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1616
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type>;
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
                const typename Vec::imask_type data
            ) {
                return details::ctz<typename Vec::imask_type, typename Vec::imask_type>(data);
            }
        };
    } // end of namespace functors for template specialization of tzc_imask for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hor" (primitive hor).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1809
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hor<simd<uint16_t, sse>, Idof> {
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
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type vec
            ) {
                // Reduce Lanes dependend on datatype
                Vec::register_type temp = _mm_or_si128(vec, _mm_srli_si128(vec, 8));
                temp = _mm_or_si128(temp, _mm_srli_si128(temp, 4));
                temp = _mm_or_si128(temp, _mm_srli_si128(temp, 2));
                return _mm_extract_epi16(temp, 0);
            }
        };
    } // end of namespace functors for template specialization of hor for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hor" (primitive hor).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1809
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hor<simd<int16_t, sse>, Idof> {
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
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type vec
            ) {
                // Reduce Lanes dependend on datatype
                Vec::register_type temp = _mm_or_si128(vec, _mm_srli_si128(vec, 8));
                temp = _mm_or_si128(temp, _mm_srli_si128(temp, 4));
                temp = _mm_or_si128(temp, _mm_srli_si128(temp, 2));
                return _mm_extract_epi16(temp, 0);
            }
        };
    } // end of namespace functors for template specialization of hor for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hor" (primitive hor).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1809
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hor<simd<uint32_t, sse>, Idof> {
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
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type vec
            ) {
                // Reduce Lanes dependend on datatype
                Vec::register_type temp = _mm_or_si128(vec, _mm_srli_si128(vec, 8));
                temp = _mm_or_si128(temp, _mm_srli_si128(temp, 4));
                return _mm_extract_epi32(temp, 0);
            }
        };
    } // end of namespace functors for template specialization of hor for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hor" (primitive hor).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1809
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hor<simd<int32_t, sse>, Idof> {
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
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type vec
            ) {
                // Reduce Lanes dependend on datatype
                Vec::register_type temp = _mm_or_si128(vec, _mm_srli_si128(vec, 8));
                temp = _mm_or_si128(temp, _mm_srli_si128(temp, 4));
                return _mm_extract_epi32(temp, 0);
            }
        };
    } // end of namespace functors for template specialization of hor for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hor" (primitive hor).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1809
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hor<simd<uint64_t, sse>, Idof> {
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
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type vec
            ) {
                // Reduce Lanes dependend on datatype
                Vec::register_type temp = _mm_or_si128(vec, _mm_srli_si128(vec, 8));
                return _mm_extract_epi64(temp, 0);
            }
        };
    } // end of namespace functors for template specialization of hor for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hor" (primitive hor).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1809
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hor<simd<int64_t, sse>, Idof> {
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
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type vec
            ) {
                // Reduce Lanes dependend on datatype
                Vec::register_type temp = _mm_or_si128(vec, _mm_srli_si128(vec, 8));
                return _mm_extract_epi64(temp, 0);
            }
        };
    } // end of namespace functors for template specialization of hor for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hor" (primitive hor).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1809
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hor<simd<uint8_t, sse>, Idof> {
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
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type vec
            ) {
                // Reduce Lanes dependend on datatype
                Vec::register_type temp = _mm_or_si128(vec, _mm_srli_si128(vec, 8));
                temp = _mm_or_si128(temp, _mm_srli_si128(temp, 4));
                temp = _mm_or_si128(temp, _mm_srli_si128(temp, 2));
                temp = _mm_or_si128(temp, _mm_srli_si128(temp, 1));
                return _mm_extract_epi8(temp, 0);
            }
        };
    } // end of namespace functors for template specialization of hor for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hor" (primitive hor).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1809
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hor<simd<int8_t, sse>, Idof> {
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
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type vec
            ) {
                // Reduce Lanes dependend on datatype
                Vec::register_type temp = _mm_or_si128(vec, _mm_srli_si128(vec, 8));
                temp = _mm_or_si128(temp, _mm_srli_si128(temp, 4));
                temp = _mm_or_si128(temp, _mm_srli_si128(temp, 2));
                temp = _mm_or_si128(temp, _mm_srli_si128(temp, 1));
                return _mm_extract_epi8(temp, 0);
            }
        };
    } // end of namespace functors for template specialization of hor for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hor" (primitive hor).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1826
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hor<simd<float, sse>, Idof> {
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
                const typename Vec::register_type vec
            ) {
                __m128i temp = _mm_castps_si128(vec);  //convert to int
                temp = _mm_or_si128(temp, _mm_srli_si128(temp, 8));
                temp = _mm_or_si128(temp, _mm_srli_si128(temp, 4));
                __m128 as_float = _mm_castsi128_ps(temp);
                return _mm_cvtss_f32(as_float);
            }
        };
    } // end of namespace functors for template specialization of hor for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hor" (primitive hor).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1835
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hor<simd<double, sse>, Idof> {
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
                const typename Vec::register_type vec
            ) {
                __m128i temp = _mm_castpd_si128(vec);  //convert to int
                temp = _mm_or_si128(temp, _mm_srli_si128(temp, 8));
                __m128d as_double = _mm_castsi128_pd(temp);
                return _mm_cvtsd_f64(as_double);
            }
        };
    } // end of namespace functors for template specialization of hor for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "inv" (primitive inv).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::2017
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct inv<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec
            ) {
                Vec::register_type all_ones = _mm_set1_epi32(-1);
                return _mm_xor_si128(vec, all_ones);
            }
        };
    } // end of namespace functors for template specialization of inv for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "inv" (primitive inv).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::2017
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct inv<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec
            ) {
                Vec::register_type all_ones = _mm_set1_epi32(-1);
                return _mm_xor_si128(vec, all_ones);
            }
        };
    } // end of namespace functors for template specialization of inv for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "inv" (primitive inv).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::2017
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct inv<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec
            ) {
                Vec::register_type all_ones = _mm_set1_epi32(-1);
                return _mm_xor_si128(vec, all_ones);
            }
        };
    } // end of namespace functors for template specialization of inv for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "inv" (primitive inv).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::2017
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct inv<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec
            ) {
                Vec::register_type all_ones = _mm_set1_epi32(-1);
                return _mm_xor_si128(vec, all_ones);
            }
        };
    } // end of namespace functors for template specialization of inv for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "inv" (primitive inv).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::2017
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct inv<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec
            ) {
                Vec::register_type all_ones = _mm_set1_epi32(-1);
                return _mm_xor_si128(vec, all_ones);
            }
        };
    } // end of namespace functors for template specialization of inv for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "inv" (primitive inv).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::2017
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct inv<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec
            ) {
                Vec::register_type all_ones = _mm_set1_epi32(-1);
                return _mm_xor_si128(vec, all_ones);
            }
        };
    } // end of namespace functors for template specialization of inv for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "inv" (primitive inv).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::2017
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct inv<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec
            ) {
                Vec::register_type all_ones = _mm_set1_epi32(-1);
                return _mm_xor_si128(vec, all_ones);
            }
        };
    } // end of namespace functors for template specialization of inv for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "inv" (primitive inv).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::2017
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct inv<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec
            ) {
                Vec::register_type all_ones = _mm_set1_epi32(-1);
                return _mm_xor_si128(vec, all_ones);
            }
        };
    } // end of namespace functors for template specialization of inv for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "inv" (primitive inv).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::2023
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct inv<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec
            ) {
                __m128i all_ones = _mm_set1_epi32(-1);
                __m128i as_int = _mm_castps_si128(vec);
                return _mm_castsi128_ps(_mm_xor_si128(as_int, all_ones));
            }
        };
    } // end of namespace functors for template specialization of inv for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "inv" (primitive inv).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/binary.yaml::2023
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct inv<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::register_type vec
            ) {
                __m128i all_ones = _mm_set1_epi32(-1);
                __m128i as_int = _mm_castpd_si128(vec);
                return _mm_castsi128_pd(_mm_xor_si128(as_int, all_ones));
            }
        };
    } // end of namespace functors for template specialization of inv for sse using double.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_SSE_HPP