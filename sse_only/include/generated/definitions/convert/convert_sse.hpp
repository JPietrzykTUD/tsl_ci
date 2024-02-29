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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/sse_only/include/generated/definitions/convert/convert_sse.hpp
 * \date 2024-02-29
 * \brief Conversion primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : d17f8eb (d17f8eb76bb8c5acffdd50fd389e77f1972f0fa7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_SSE_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_SSE_HPP

#include "../../declarations/convert.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/convert.yaml::109
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int8_t, sse>, simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            using ToType = simd<int8_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return data;
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/convert.yaml::109
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint8_t, sse>, simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            using ToType = simd<uint8_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return data;
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/convert.yaml::109
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int16_t, sse>, simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            using ToType = simd<int16_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return data;
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/convert.yaml::109
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint16_t, sse>, simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            using ToType = simd<uint16_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return data;
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/convert.yaml::109
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int32_t, sse>, simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            using ToType = simd<int32_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return data;
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/convert.yaml::109
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint32_t, sse>, simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            using ToType = simd<uint32_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return data;
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/convert.yaml::109
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int64_t, sse>, simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            using ToType = simd<int64_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return data;
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/convert.yaml::109
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint64_t, sse>, simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            using ToType = simd<uint64_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return data;
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/convert.yaml::109
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, sse>, simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            using ToType = simd<float, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return data;
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse']
         *      Yaml Source: primitive_data/primitives/convert.yaml::109
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, sse>, simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            using ToType = simd<double, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return data;
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::114
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int8_t, sse>, simd<float, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            using ToType = simd<float, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castsi128_ps(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::114
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint8_t, sse>, simd<float, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            using ToType = simd<float, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castsi128_ps(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::114
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int16_t, sse>, simd<float, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            using ToType = simd<float, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castsi128_ps(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::114
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint16_t, sse>, simd<float, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            using ToType = simd<float, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castsi128_ps(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::114
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int32_t, sse>, simd<float, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            using ToType = simd<float, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castsi128_ps(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::114
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint32_t, sse>, simd<float, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            using ToType = simd<float, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castsi128_ps(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::114
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int64_t, sse>, simd<float, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            using ToType = simd<float, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castsi128_ps(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::114
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint64_t, sse>, simd<float, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            using ToType = simd<float, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castsi128_ps(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::119
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, sse>, simd<int8_t, sse>, Idof> {
            using Vec = simd<float, sse>;
            using ToType = simd<int8_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castps_si128(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::119
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, sse>, simd<uint8_t, sse>, Idof> {
            using Vec = simd<float, sse>;
            using ToType = simd<uint8_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castps_si128(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::119
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, sse>, simd<int16_t, sse>, Idof> {
            using Vec = simd<float, sse>;
            using ToType = simd<int16_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castps_si128(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::119
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, sse>, simd<uint16_t, sse>, Idof> {
            using Vec = simd<float, sse>;
            using ToType = simd<uint16_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castps_si128(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::119
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, sse>, simd<int32_t, sse>, Idof> {
            using Vec = simd<float, sse>;
            using ToType = simd<int32_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castps_si128(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::119
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, sse>, simd<uint32_t, sse>, Idof> {
            using Vec = simd<float, sse>;
            using ToType = simd<uint32_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castps_si128(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::119
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, sse>, simd<int64_t, sse>, Idof> {
            using Vec = simd<float, sse>;
            using ToType = simd<int64_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castps_si128(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::119
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, sse>, simd<uint64_t, sse>, Idof> {
            using Vec = simd<float, sse>;
            using ToType = simd<uint64_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castps_si128(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::124
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int8_t, sse>, simd<double, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            using ToType = simd<double, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castsi128_pd(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::124
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint8_t, sse>, simd<double, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            using ToType = simd<double, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castsi128_pd(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::124
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int16_t, sse>, simd<double, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            using ToType = simd<double, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castsi128_pd(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::124
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint16_t, sse>, simd<double, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            using ToType = simd<double, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castsi128_pd(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::124
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int32_t, sse>, simd<double, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            using ToType = simd<double, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castsi128_pd(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::124
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint32_t, sse>, simd<double, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            using ToType = simd<double, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castsi128_pd(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::124
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int64_t, sse>, simd<double, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            using ToType = simd<double, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castsi128_pd(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::124
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint64_t, sse>, simd<double, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            using ToType = simd<double, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castsi128_pd(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::129
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, sse>, simd<int8_t, sse>, Idof> {
            using Vec = simd<double, sse>;
            using ToType = simd<int8_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castpd_si128(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::129
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, sse>, simd<uint8_t, sse>, Idof> {
            using Vec = simd<double, sse>;
            using ToType = simd<uint8_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castpd_si128(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::129
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, sse>, simd<int16_t, sse>, Idof> {
            using Vec = simd<double, sse>;
            using ToType = simd<int16_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castpd_si128(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::129
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, sse>, simd<uint16_t, sse>, Idof> {
            using Vec = simd<double, sse>;
            using ToType = simd<uint16_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castpd_si128(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::129
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, sse>, simd<int32_t, sse>, Idof> {
            using Vec = simd<double, sse>;
            using ToType = simd<int32_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castpd_si128(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::129
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, sse>, simd<uint32_t, sse>, Idof> {
            using Vec = simd<double, sse>;
            using ToType = simd<uint32_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castpd_si128(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::129
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, sse>, simd<int64_t, sse>, Idof> {
            using Vec = simd<double, sse>;
            using ToType = simd<int64_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castpd_si128(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::129
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, sse>, simd<uint64_t, sse>, Idof> {
            using Vec = simd<double, sse>;
            using ToType = simd<uint64_t, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_castpd_si128(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for sse using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "cast" (primitive cast).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::427
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct cast<simd<int32_t, sse>, simd<float, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            using ToType = simd<float, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                return _mm_cvtepi32_ps(data);
            }
        };
    } // end of namespace functors for template specialization of cast for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "cast" (primitive cast).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/convert.yaml::432
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct cast<simd<uint32_t, sse>, simd<float, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            using ToType = simd<float, sse>;
            using return_type = typename ToType::register_type;
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
            static typename ToType::register_type apply(
                const typename Vec::register_type data
            ) {
                __m128 temp = _mm_cvtepi32_ps(data);

                __m128i mask = _mm_srai_epi32(data, 31);
                __m128 correction = _mm_castsi128_ps(_mm_and_si128(mask, _mm_set1_epi32(static_cast<int>(0x4f800000))));

                return _mm_add_ps(temp, correction);
            }
        };
    } // end of namespace functors for template specialization of cast for sse using uint32_t.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_SSE_HPP