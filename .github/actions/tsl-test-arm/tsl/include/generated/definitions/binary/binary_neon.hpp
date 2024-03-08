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
 * \file /github/workspace/ci/generation/neon/include/generated/definitions/binary/binary_neon.hpp
 * \date 2024-03-08
 * \brief Bit manipulation primitives.
 * \note
 * Git-Local Url : /github/workspace
 * Git-Remote Url: unknown url
 * Git-Branch    : unknown branch
 * Git-Commit    : unknown commit (unknown commit)
 *
 */
#ifndef TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_NEON_HPP
#define TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_NEON_HPP

#include "../../declarations/binary.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::88
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
                return vandq_u8( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_and for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::88
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
                return vandq_u16( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_and for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::88
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
                return vandq_u32( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_and for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::88
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
                return vandq_u64( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_and for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::88
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
                return vandq_s8( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_and for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::88
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
                return vandq_s16( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_and for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::88
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
                return vandq_s32( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_and for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::88
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
                return vandq_s64( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_and for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::92
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
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
                return
                  vreinterpretq_f32_u32(
                    vandq_u32(
                      vreinterpretq_u32_f32(a),
                      vreinterpretq_u32_f32(b)
                    )
                  );
            }
        };
    } // end of namespace functors for template specialization of binary_and for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_and" (primitive binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::92
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_and<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
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
                return
                  vreinterpretq_f64_u64(
                    vandq_u64(
                      vreinterpretq_u64_f64(a),
                      vreinterpretq_u64_f64(b)
                    )
                  );
            }
        };
    } // end of namespace functors for template specialization of binary_and for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
                return vorrq_u8( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_or for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
                return vorrq_u16( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_or for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
                return vorrq_u32( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_or for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
                return vorrq_u64( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_or for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
                return vorrq_s8( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_or for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
                return vorrq_s16( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_or for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
                return vorrq_s32( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_or for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
                return vorrq_s64( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_or for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::235
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
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
                return
                  vreinterpretq_f32_u32(
                    vorrq_u32(
                      vreinterpretq_u32_f32(a),
                      vreinterpretq_u32_f32(b)
                    )
                  );
            }
        };
    } // end of namespace functors for template specialization of binary_or for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_or" (primitive binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::235
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_or<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
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
                return
                  vreinterpretq_f64_u64(
                    vorrq_u64(
                      vreinterpretq_u64_f64(a),
                      vreinterpretq_u64_f64(b)
                    )
                  );
            }
        };
    } // end of namespace functors for template specialization of binary_or for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::365
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
                return veorq_u8( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_xor for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::365
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
                return veorq_u16( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_xor for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::365
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
                return veorq_u32( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_xor for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::365
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
                return veorq_u64( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_xor for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::365
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
                return veorq_s8( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_xor for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::365
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
                return veorq_s16( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_xor for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::365
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
                return veorq_s32( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_xor for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::365
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
                return veorq_s64( a, b );
            }
        };
    } // end of namespace functors for template specialization of binary_xor for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::369
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
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
                return vreinterpretq_f32_u32(
                  veorq_u32(
                    vreinterpretq_u32_f32(a),
                    vreinterpretq_u32_f32(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_xor for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "binary_xor" (primitive binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::369
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct binary_xor<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
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
                return vreinterpretq_f64_u64(
                  veorq_u64(
                    vreinterpretq_u64_f64(a),
                    vreinterpretq_u64_f64(b)));
            }
        };
    } // end of namespace functors for template specialization of binary_xor for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::465
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
                return vshlq_n_u8(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::465
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
                return vshlq_n_u16(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::465
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
                return vshlq_n_u32(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::465
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
                return vshlq_n_u64(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::465
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
                return vshlq_n_s8(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::465
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
                return vshlq_n_s16(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::465
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
                return vshlq_n_s32(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::465
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
                return vshlq_n_s64(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::469
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
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
                return vcvtq_f32_u32(vshlq_n_u32(vcvtq_u32_f32(data), shift));
            }
        };
    } // end of namespace functors for template specialization of shift_left for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::469
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
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
                return vcvtq_f64_u64(vshlq_n_u64(vcvtq_u64_f64(data), shift));
            }
        };
    } // end of namespace functors for template specialization of shift_left for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::565
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left_vector<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
                return vshlq_u8(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left_vector for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::565
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left_vector<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
                return vshlq_u16(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left_vector for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::565
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left_vector<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
                return vshlq_u32(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left_vector for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::565
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left_vector<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
                return vshlq_u64(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left_vector for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::565
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left_vector<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
                return vshlq_s8(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left_vector for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::565
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left_vector<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
                return vshlq_s16(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left_vector for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::565
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left_vector<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
                return vshlq_s32(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left_vector for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_left_vector" (primitive shift_left).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::565
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct shift_left_vector<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
                return vshlq_s64(data, shift);
            }
        };
    } // end of namespace functors for template specialization of shift_left_vector for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::742
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right<simd<uint8_t, neon>, PreserveSign, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
                if constexpr (std::is_signed_v<typename Vec::base_type>) {
                  if constexpr (PreserveSign) {
                    return vshrq_n_u8(data, shift);
                  } else {
                    return vshrq_n_u8(
                      vreinterpretq_u8_s8(data),
                      shift
                    );
                  }
                } else {
                  return vshrq_n_u8(data, shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::742
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right<simd<uint16_t, neon>, PreserveSign, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
                if constexpr (std::is_signed_v<typename Vec::base_type>) {
                  if constexpr (PreserveSign) {
                    return vshrq_n_u16(data, shift);
                  } else {
                    return vshrq_n_u16(
                      vreinterpretq_u16_s16(data),
                      shift
                    );
                  }
                } else {
                  return vshrq_n_u16(data, shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::742
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right<simd<uint32_t, neon>, PreserveSign, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
                if constexpr (std::is_signed_v<typename Vec::base_type>) {
                  if constexpr (PreserveSign) {
                    return vshrq_n_u32(data, shift);
                  } else {
                    return vshrq_n_u32(
                      vreinterpretq_u32_s32(data),
                      shift
                    );
                  }
                } else {
                  return vshrq_n_u32(data, shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::742
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right<simd<uint64_t, neon>, PreserveSign, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
                if constexpr (std::is_signed_v<typename Vec::base_type>) {
                  if constexpr (PreserveSign) {
                    return vshrq_n_u64(data, shift);
                  } else {
                    return vshrq_n_u64(
                      vreinterpretq_u64_s64(data),
                      shift
                    );
                  }
                } else {
                  return vshrq_n_u64(data, shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::742
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right<simd<int8_t, neon>, PreserveSign, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
                if constexpr (std::is_signed_v<typename Vec::base_type>) {
                  if constexpr (PreserveSign) {
                    return vshrq_n_s8(data, shift);
                  } else {
                    return vshrq_n_u8(
                      vreinterpretq_u8_s8(data),
                      shift
                    );
                  }
                } else {
                  return vshrq_n_u8(data, shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::742
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right<simd<int16_t, neon>, PreserveSign, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
                if constexpr (std::is_signed_v<typename Vec::base_type>) {
                  if constexpr (PreserveSign) {
                    return vshrq_n_s16(data, shift);
                  } else {
                    return vshrq_n_u16(
                      vreinterpretq_u16_s16(data),
                      shift
                    );
                  }
                } else {
                  return vshrq_n_u16(data, shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::742
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right<simd<int32_t, neon>, PreserveSign, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
                if constexpr (std::is_signed_v<typename Vec::base_type>) {
                  if constexpr (PreserveSign) {
                    return vshrq_n_s32(data, shift);
                  } else {
                    return vshrq_n_u32(
                      vreinterpretq_u32_s32(data),
                      shift
                    );
                  }
                } else {
                  return vshrq_n_u32(data, shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right" (primitive shift_right).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::742
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right<simd<int64_t, neon>, PreserveSign, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
                if constexpr (std::is_signed_v<typename Vec::base_type>) {
                  if constexpr (PreserveSign) {
                    return vshrq_n_s64(data, shift);
                  } else {
                    return vshrq_n_u64(
                      vreinterpretq_u64_s64(data),
                      shift
                    );
                  }
                } else {
                  return vshrq_n_u64(data, shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::987
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_vector<simd<uint8_t, neon>, PreserveSign, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
                // use negative shift, bcs shift left intrinsic shifts right for negative values.
                auto neg_shift = vsubq_u8(vmovq_n_u8(0), shift);
                if constexpr (std::is_signed_v<typename Vec::base_type>) {
                  if constexpr (PreserveSign) {
                    return vshlq_u8(data, neg_shift);
                  } else {
                    return vshlq_u8(
                      vreinterpretq_u8_s8(data),
                      neg_shift
                    );
                  }
                } else {
                  return vshlq_u8(data, neg_shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_vector for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::987
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_vector<simd<uint16_t, neon>, PreserveSign, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
                // use negative shift, bcs shift left intrinsic shifts right for negative values.
                auto neg_shift = vsubq_u16(vmovq_n_u16(0), shift);
                if constexpr (std::is_signed_v<typename Vec::base_type>) {
                  if constexpr (PreserveSign) {
                    return vshlq_u16(data, neg_shift);
                  } else {
                    return vshlq_u16(
                      vreinterpretq_u16_s16(data),
                      neg_shift
                    );
                  }
                } else {
                  return vshlq_u16(data, neg_shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_vector for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::987
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_vector<simd<uint32_t, neon>, PreserveSign, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
                // use negative shift, bcs shift left intrinsic shifts right for negative values.
                auto neg_shift = vsubq_u32(vmovq_n_u32(0), shift);
                if constexpr (std::is_signed_v<typename Vec::base_type>) {
                  if constexpr (PreserveSign) {
                    return vshlq_u32(data, neg_shift);
                  } else {
                    return vshlq_u32(
                      vreinterpretq_u32_s32(data),
                      neg_shift
                    );
                  }
                } else {
                  return vshlq_u32(data, neg_shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_vector for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::987
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_vector<simd<uint64_t, neon>, PreserveSign, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
                // use negative shift, bcs shift left intrinsic shifts right for negative values.
                auto neg_shift = vsubq_u64(vmovq_n_u64(0), shift);
                if constexpr (std::is_signed_v<typename Vec::base_type>) {
                  if constexpr (PreserveSign) {
                    return vshlq_u64(data, neg_shift);
                  } else {
                    return vshlq_u64(
                      vreinterpretq_u64_s64(data),
                      neg_shift
                    );
                  }
                } else {
                  return vshlq_u64(data, neg_shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_vector for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::987
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_vector<simd<int8_t, neon>, PreserveSign, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
                // use negative shift, bcs shift left intrinsic shifts right for negative values.
                auto neg_shift = vsubq_s8(vmovq_n_s8(0), shift);
                if constexpr (std::is_signed_v<typename Vec::base_type>) {
                  if constexpr (PreserveSign) {
                    return vshlq_s8(data, neg_shift);
                  } else {
                    return vshlq_u8(
                      vreinterpretq_u8_s8(data),
                      neg_shift
                    );
                  }
                } else {
                  return vshlq_u8(data, neg_shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_vector for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::987
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_vector<simd<int16_t, neon>, PreserveSign, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
                // use negative shift, bcs shift left intrinsic shifts right for negative values.
                auto neg_shift = vsubq_s16(vmovq_n_s16(0), shift);
                if constexpr (std::is_signed_v<typename Vec::base_type>) {
                  if constexpr (PreserveSign) {
                    return vshlq_s16(data, neg_shift);
                  } else {
                    return vshlq_u16(
                      vreinterpretq_u16_s16(data),
                      neg_shift
                    );
                  }
                } else {
                  return vshlq_u16(data, neg_shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_vector for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::987
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_vector<simd<int32_t, neon>, PreserveSign, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
                // use negative shift, bcs shift left intrinsic shifts right for negative values.
                auto neg_shift = vsubq_s32(vmovq_n_s32(0), shift);
                if constexpr (std::is_signed_v<typename Vec::base_type>) {
                  if constexpr (PreserveSign) {
                    return vshlq_s32(data, neg_shift);
                  } else {
                    return vshlq_u32(
                      vreinterpretq_u32_s32(data),
                      neg_shift
                    );
                  }
                } else {
                  return vshlq_u32(data, neg_shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_vector for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "shift_right_vector" (primitive shift_right).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::987
         */
        template<bool PreserveSign, ImplementationDegreeOfFreedom Idof>
        struct shift_right_vector<simd<int64_t, neon>, PreserveSign, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
                const typename Vec::register_type data, const typename Vec::register_type shift
            ) {
                // use negative shift, bcs shift left intrinsic shifts right for negative values.
                auto neg_shift = vsubq_s64(vmovq_n_s64(0), shift);
                if constexpr (std::is_signed_v<typename Vec::base_type>) {
                  if constexpr (PreserveSign) {
                    return vshlq_s64(data, neg_shift);
                  } else {
                    return vshlq_u64(
                      vreinterpretq_u64_s64(data),
                      neg_shift
                    );
                  }
                } else {
                  return vshlq_u64(data, neg_shift);
                }
            }
        };
    } // end of namespace functors for template specialization of shift_right_vector for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1186
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
    } // end of namespace functors for template specialization of lzc for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1186
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
    } // end of namespace functors for template specialization of lzc for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1186
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
    } // end of namespace functors for template specialization of lzc for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1186
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
    } // end of namespace functors for template specialization of lzc for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1186
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
    } // end of namespace functors for template specialization of lzc for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1186
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
    } // end of namespace functors for template specialization of lzc for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1186
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
    } // end of namespace functors for template specialization of lzc for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc" (primitive lzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1186
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
    } // end of namespace functors for template specialization of lzc for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1577
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
    } // end of namespace functors for template specialization of lzc_imask for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1577
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
    } // end of namespace functors for template specialization of lzc_imask for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1577
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
    } // end of namespace functors for template specialization of lzc_imask for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1577
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
    } // end of namespace functors for template specialization of lzc_imask for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1577
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
    } // end of namespace functors for template specialization of lzc_imask for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1577
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
    } // end of namespace functors for template specialization of lzc_imask for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1577
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
    } // end of namespace functors for template specialization of lzc_imask for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "lzc_imask" (primitive lzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1577
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct lzc_imask<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
    } // end of namespace functors for template specialization of lzc_imask for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1621
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
    } // end of namespace functors for template specialization of tzc_imask for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1621
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
    } // end of namespace functors for template specialization of tzc_imask for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1621
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
    } // end of namespace functors for template specialization of tzc_imask for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1621
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
    } // end of namespace functors for template specialization of tzc_imask for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1621
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
    } // end of namespace functors for template specialization of tzc_imask for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1621
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
    } // end of namespace functors for template specialization of tzc_imask for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1621
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
    } // end of namespace functors for template specialization of tzc_imask for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "tzc_imask" (primitive tzc).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/binary.yaml::1621
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct tzc_imask<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
    } // end of namespace functors for template specialization of tzc_imask for neon using int64_t.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DEFINITIONS_BINARY_BINARY_NEON_HPP