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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/include/generated/definitions/convert/convert_avx2.hpp
 * \date 2024-02-28
 * \brief Conversion primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : 48d9b97 (48d9b974aa94a5b73824da4bb473bf36985664c7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_AVX2_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_AVX2_HPP

#include "../../declarations/convert.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::43
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int8_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::43
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint8_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::43
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int16_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<int16_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::43
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint16_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::43
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int32_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<int32_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::43
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint32_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::43
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int64_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<int64_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::43
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint64_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::43
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<float, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::43
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<double, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::48
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int8_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::48
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int8_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::48
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int8_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<int16_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::48
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int8_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<int32_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::48
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int8_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::48
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int8_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<int64_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::48
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int8_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::53
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint8_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::53
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint8_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::53
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint8_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<int16_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::53
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint8_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<int32_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::53
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint8_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::53
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint8_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<int64_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::53
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint8_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::58
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int16_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::58
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int16_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::58
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int16_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::58
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int16_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<int32_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::58
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int16_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::58
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int16_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<int64_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::58
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int16_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::63
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint16_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::63
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint16_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::63
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint16_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<int16_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::63
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint16_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<int32_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::63
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint16_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::63
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint16_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<int64_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::63
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint16_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::68
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int32_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::68
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int32_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::68
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int32_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<int16_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::68
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int32_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::68
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int32_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::68
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int32_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<int64_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::68
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int32_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::73
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint32_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::73
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint32_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::73
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint32_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<int16_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::73
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint32_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::73
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint32_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<int32_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::73
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint32_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<int64_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::73
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint32_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::78
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int64_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::78
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int64_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::78
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int64_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<int16_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::78
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int64_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::78
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int64_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<int32_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::78
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int64_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::78
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int64_t, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::83
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint64_t, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<int8_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::83
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint64_t, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::83
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint64_t, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<int16_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::83
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint64_t, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::83
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint64_t, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<int32_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::83
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint64_t, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::83
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint64_t, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<int64_t, avx2>;
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
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::88
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int8_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<float, avx2>;
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
                return _mm256_castsi256_ps(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::88
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint8_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<float, avx2>;
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
                return _mm256_castsi256_ps(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::88
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int16_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<float, avx2>;
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
                return _mm256_castsi256_ps(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::88
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint16_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<float, avx2>;
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
                return _mm256_castsi256_ps(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::88
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int32_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<float, avx2>;
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
                return _mm256_castsi256_ps(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::88
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint32_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<float, avx2>;
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
                return _mm256_castsi256_ps(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::88
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int64_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<float, avx2>;
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
                return _mm256_castsi256_ps(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::88
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint64_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<float, avx2>;
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
                return _mm256_castsi256_ps(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<int8_t, avx2>;
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
                return _mm256_castps_si256(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
                return _mm256_castps_si256(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<int16_t, avx2>;
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
                return _mm256_castps_si256(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
                return _mm256_castps_si256(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<int32_t, avx2>;
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
                return _mm256_castps_si256(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
                return _mm256_castps_si256(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<int64_t, avx2>;
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
                return _mm256_castps_si256(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<float, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
                return _mm256_castps_si256(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::98
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int8_t, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            using ToType = simd<double, avx2>;
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
                return _mm256_castsi256_pd(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::98
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint8_t, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            using ToType = simd<double, avx2>;
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
                return _mm256_castsi256_pd(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::98
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int16_t, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            using ToType = simd<double, avx2>;
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
                return _mm256_castsi256_pd(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::98
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint16_t, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            using ToType = simd<double, avx2>;
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
                return _mm256_castsi256_pd(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::98
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int32_t, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<double, avx2>;
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
                return _mm256_castsi256_pd(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::98
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint32_t, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            using ToType = simd<double, avx2>;
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
                return _mm256_castsi256_pd(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::98
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<int64_t, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            using ToType = simd<double, avx2>;
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
                return _mm256_castsi256_pd(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::98
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<uint64_t, avx2>, simd<double, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            using ToType = simd<double, avx2>;
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
                return _mm256_castsi256_pd(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::103
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, avx2>, simd<int8_t, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<int8_t, avx2>;
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
                return _mm256_castpd_si256(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::103
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, avx2>, simd<uint8_t, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<uint8_t, avx2>;
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
                return _mm256_castpd_si256(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::103
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, avx2>, simd<int16_t, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<int16_t, avx2>;
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
                return _mm256_castpd_si256(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::103
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, avx2>, simd<uint16_t, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<uint16_t, avx2>;
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
                return _mm256_castpd_si256(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::103
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, avx2>, simd<int32_t, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<int32_t, avx2>;
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
                return _mm256_castpd_si256(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::103
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, avx2>, simd<uint32_t, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<uint32_t, avx2>;
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
                return _mm256_castpd_si256(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::103
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, avx2>, simd<int64_t, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<int64_t, avx2>;
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
                return _mm256_castpd_si256(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "reinterpret" (primitive reinterpret).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::103
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct reinterpret<simd<double, avx2>, simd<uint64_t, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            using ToType = simd<uint64_t, avx2>;
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
                return _mm256_castpd_si256(data);
            }
        };
    } // end of namespace functors for template specialization of reinterpret for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "cast" (primitive cast).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/convert.yaml::375
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct cast<simd<int32_t, avx2>, simd<float, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            using ToType = simd<float, avx2>;
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
                return _mm256_cvtepi32_ps(data);
            }
        };
    } // end of namespace functors for template specialization of cast for avx2 using int32_t.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_CONVERT_CONVERT_AVX2_HPP