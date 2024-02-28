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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/include/generated/definitions/binary/binary_avx2.hpp
 * \date 2024-02-28
 * \brief Bit manipulation primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : 48d9b97 (48d9b974aa94a5b73824da4bb473bf36985664c7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_AVX2_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_AVX2_HPP

#include "../../declarations/binary.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::65
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_and_pd(_mm256_castsi256_pd(a), _mm256_castsi256_pd(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_and for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::65
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_and_pd(_mm256_castsi256_pd(a), _mm256_castsi256_pd(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_and for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::65
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_and_pd(_mm256_castsi256_pd(a), _mm256_castsi256_pd(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_and for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::65
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_and_pd(_mm256_castsi256_pd(a), _mm256_castsi256_pd(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_and for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::65
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_and_pd(_mm256_castsi256_pd(a), _mm256_castsi256_pd(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_and for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::65
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_and_pd(_mm256_castsi256_pd(a), _mm256_castsi256_pd(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_and for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::65
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_and_pd(_mm256_castsi256_pd(a), _mm256_castsi256_pd(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_and for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::65
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive binary_and is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_and_pd(_mm256_castsi256_pd(a), _mm256_castsi256_pd(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_and for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::70
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_and_ps(a,b);
            }
        };
    } // end of namespace functors for template specialization of binary_and for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::70
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_and_pd(a,b);
            }
        };
    } // end of namespace functors for template specialization of binary_and for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::213
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_or_ps(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_or for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::213
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_or_pd(a, b);
            }
        };
    } // end of namespace functors for template specialization of binary_or for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::342
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive binary_xor is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_xor_pd(_mm256_castsi256_pd(a),_mm256_castsi256_pd(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_xor for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::342
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive binary_xor is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_xor_pd(_mm256_castsi256_pd(a),_mm256_castsi256_pd(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_xor for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::342
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive binary_xor is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_xor_pd(_mm256_castsi256_pd(a),_mm256_castsi256_pd(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_xor for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::342
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive binary_xor is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_xor_pd(_mm256_castsi256_pd(a),_mm256_castsi256_pd(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_xor for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::342
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive binary_xor is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_xor_pd(_mm256_castsi256_pd(a),_mm256_castsi256_pd(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_xor for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::342
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive binary_xor is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_xor_pd(_mm256_castsi256_pd(a),_mm256_castsi256_pd(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_xor for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::342
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive binary_xor is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_xor_pd(_mm256_castsi256_pd(a),_mm256_castsi256_pd(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_xor for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::342
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                const typename Vec::register_type a, const typename Vec::register_type b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive binary_xor is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_xor_pd(_mm256_castsi256_pd(a),_mm256_castsi256_pd(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_xor for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::347
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_xor_ps(a,b);
            }
        };
    } // end of namespace functors for template specialization of binary_xor for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::347
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_xor_pd(a,b);
            }
        };
    } // end of namespace functors for template specialization of binary_xor for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1112
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<uint8_t, avx2>, PreserveSign, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of shift_right_imask for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1112
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<int8_t, avx2>, PreserveSign, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of shift_right_imask for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1112
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<uint16_t, avx2>, PreserveSign, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of shift_right_imask for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1112
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<int16_t, avx2>, PreserveSign, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of shift_right_imask for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1112
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<uint32_t, avx2>, PreserveSign, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of shift_right_imask for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1112
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<int32_t, avx2>, PreserveSign, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of shift_right_imask for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1112
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<uint64_t, avx2>, PreserveSign, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of shift_right_imask for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1112
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<int64_t, avx2>, PreserveSign, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of shift_right_imask for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1112
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<float, avx2>, PreserveSign, Idof> {
            using Vec = simd<float, avx2>;
            
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
    } // end of namespace functors for template specialization of shift_right_imask for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_imask" (primitive shift_right).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1112
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_imask<simd<double, avx2>, PreserveSign, Idof> {
            using Vec = simd<double, avx2>;
            
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
    } // end of namespace functors for template specialization of shift_right_imask for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1176
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1176
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1176
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1176
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1176
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1176
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1176
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1176
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_vector" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_vector<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc_vector for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_vector" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_vector<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc_vector for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_vector" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_vector<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc_vector for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_vector" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_vector<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc_vector for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_vector" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_vector<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc_vector for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_vector" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_vector<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc_vector for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_vector" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_vector<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc_vector for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_vector" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_vector<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc_vector for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1567
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc_imask for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1567
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc_imask for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1567
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc_imask for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1567
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc_imask for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1567
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc_imask for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1567
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc_imask for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1567
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc_imask for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1567
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of lzc_imask for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1611
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of tzc_imask for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1611
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of tzc_imask for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1611
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of tzc_imask for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1611
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of tzc_imask for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1611
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of tzc_imask for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1611
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of tzc_imask for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1611
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of tzc_imask for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1611
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of tzc_imask for avx2 using int64_t.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_AVX2_HPP