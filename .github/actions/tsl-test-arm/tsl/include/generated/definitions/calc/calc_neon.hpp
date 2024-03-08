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
 * \file /github/workspace/ci/generation/neon/include/generated/definitions/calc/calc_neon.hpp
 * \date 2024-03-08
 * \brief This file contains arithmetic primitives.
 * \note
 * Git-Local Url : /github/workspace
 * Git-Remote Url: unknown url
 * Git-Branch    : unknown branch
 * Git-Commit    : unknown commit (unknown commit)
 *
 */
#ifndef TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_NEON_HPP
#define TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_NEON_HPP

#include "../../declarations/calc.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::120
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<uint8_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vaddq_u8( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of add for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::120
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<uint16_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vaddq_u16( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of add for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::120
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<uint32_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vaddq_u32( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of add for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::120
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<uint64_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vaddq_u64( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of add for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::120
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<int8_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vaddq_s8( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of add for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::120
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<int16_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vaddq_s16( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of add for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::120
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<int32_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vaddq_s32( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of add for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::120
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<int64_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vaddq_s64( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of add for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::120
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<float, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vaddq_f32( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of add for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::120
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<double, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vaddq_f64( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of add for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::258
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<uint8_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vsubq_u8( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of sub for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::258
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<uint16_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vsubq_u16( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of sub for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::258
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<uint32_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vsubq_u32( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of sub for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::258
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<uint64_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vsubq_u64( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of sub for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::258
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<int8_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vsubq_s8( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of sub for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::258
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<int16_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vsubq_s16( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of sub for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::258
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<int32_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vsubq_s32( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of sub for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::258
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<int64_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vsubq_s64( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of sub for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::258
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<float, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vsubq_f32( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of sub for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::258
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<double, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vsubq_f64( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of sub for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::618
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<uint8_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vmulq_u8( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of mul for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::618
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<uint16_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vmulq_u16( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of mul for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::618
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<uint32_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vmulq_u32( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of mul for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::618
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<int8_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vmulq_s8( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of mul for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::618
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<int16_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vmulq_s16( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of mul for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::618
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<int32_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vmulq_s32( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of mul for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::618
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<float, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vmulq_f32( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of mul for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::618
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<double, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vmulq_f64( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of mul for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::622
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<uint64_t, neon>, Idof> {
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
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );

                return
                  vsetq_lane_u64(
                    vgetq_lane_u64(vec_a, 0) *
                    vgetq_lane_u64(vec_b, 0),
                    vmovq_n_u64(
                      vgetq_lane_u64(vec_a, 1) *
                      vgetq_lane_u64(vec_b, 1)
                    ),
                    0
                  );
                //Found this on stackoverflow. This seems like an overkill. Maybe an extract and scalar multiply would do the trick more efficient.
                //@todo: benchmark this.
                //const auto ac = vmovn_u64(vec_a);
                //const auto pr = vmovn_u64(vec_b);
                //const auto hi = vmulq_u32(vreinterpretq_u32_u64(vec_b), vrev64q_u32(vreinterpretq_u32_u64(vec_a)));
                //return vmlal_u32(vshlq_n_u64(vpaddlq_u32(hi), 32), ac, pr);
            }
        };
    } // end of namespace functors for template specialization of mul for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::622
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<int64_t, neon>, Idof> {
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
                return false;
            }
            [[nodiscard]] TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul is not supported by your hardware natively while it is forced by using native" );

                return
                  vsetq_lane_s64(
                    vgetq_lane_s64(vec_a, 0) *
                    vgetq_lane_s64(vec_b, 0),
                    vmovq_n_s64(
                      vgetq_lane_s64(vec_a, 1) *
                      vgetq_lane_s64(vec_b, 1)
                    ),
                    0
                  );
                //Found this on stackoverflow. This seems like an overkill. Maybe an extract and scalar multiply would do the trick more efficient.
                //@todo: benchmark this.
                //const auto ac = vmovn_s64(vec_a);
                //const auto pr = vmovn_s64(vec_b);
                //const auto hi = vmulq_s32(vreinterpretq_s32_s64(vec_b), vrev64q_s32(vreinterpretq_s32_s64(vec_a)));
                //return vmlal_s32(vshlq_n_s64(vpaddlq_s32(hi), 32), ac, pr);
            }
        };
    } // end of namespace functors for template specialization of mul for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1002
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
                const typename Vec::register_type value
            ) {
                return vaddvq_u8( value );
            }
        };
    } // end of namespace functors for template specialization of hadd for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1002
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
                const typename Vec::register_type value
            ) {
                return vaddvq_u16( value );
            }
        };
    } // end of namespace functors for template specialization of hadd for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1002
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
                const typename Vec::register_type value
            ) {
                return vaddvq_u32( value );
            }
        };
    } // end of namespace functors for template specialization of hadd for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1002
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
                const typename Vec::register_type value
            ) {
                return vaddvq_u64( value );
            }
        };
    } // end of namespace functors for template specialization of hadd for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1002
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
                const typename Vec::register_type value
            ) {
                return vaddvq_s8( value );
            }
        };
    } // end of namespace functors for template specialization of hadd for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1002
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
                const typename Vec::register_type value
            ) {
                return vaddvq_s16( value );
            }
        };
    } // end of namespace functors for template specialization of hadd for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1002
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
                const typename Vec::register_type value
            ) {
                return vaddvq_s32( value );
            }
        };
    } // end of namespace functors for template specialization of hadd for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1002
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
                const typename Vec::register_type value
            ) {
                return vaddvq_s64( value );
            }
        };
    } // end of namespace functors for template specialization of hadd for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1002
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
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
                const typename Vec::register_type value
            ) {
                return vaddvq_f32( value );
            }
        };
    } // end of namespace functors for template specialization of hadd for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1002
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
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
                const typename Vec::register_type value
            ) {
                return vaddvq_f64( value );
            }
        };
    } // end of namespace functors for template specialization of hadd for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1147
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<uint8_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vminq_u8(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of min for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1147
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<uint16_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vminq_u16(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of min for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1147
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<uint32_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vminq_u32(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of min for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1147
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<int8_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vminq_s8(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of min for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1147
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<int32_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vminq_s32(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of min for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1147
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<double, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vminq_f64(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of min for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1147
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<float, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vminq_f32(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of min for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1289
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<float, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vdivq_f32( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of div for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1289
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<double, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return vdivq_f64( vec_a, vec_b );
            }
        };
    } // end of namespace functors for template specialization of div for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1294
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<uint32_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                  auto float_a = tsl::cast<Vec, typename Vec::template transform_extension<float>>(vec_a);
                  auto float_b = tsl::cast<Vec, typename Vec::template transform_extension<float>>(vec_b);
                auto float_result = vdivq_f32( float_a, float_b );
                  return tsl::cast<typename Vec::template transform_extension<float>, Vec>(float_result);

            }
        };
    } // end of namespace functors for template specialization of div for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1294
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<int32_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                  auto float_a = tsl::cast<Vec, typename Vec::template transform_extension<float>>(vec_a);
                  auto float_b = tsl::cast<Vec, typename Vec::template transform_extension<float>>(vec_b);
                auto float_result = vdivq_f32( float_a, float_b );
                  return tsl::cast<typename Vec::template transform_extension<float>, Vec>(float_result);

            }
        };
    } // end of namespace functors for template specialization of div for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1294
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<uint64_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                  auto float_a = tsl::cast<Vec, typename Vec::template transform_extension<double>>(vec_a);
                  auto float_b = tsl::cast<Vec, typename Vec::template transform_extension<double>>(vec_b);
                auto float_result = vdivq_f64( float_a, float_b );
                  return tsl::cast<typename Vec::template transform_extension<double>, Vec>(float_result);

            }
        };
    } // end of namespace functors for template specialization of div for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1294
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<int64_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                  auto float_a = tsl::cast<Vec, typename Vec::template transform_extension<double>>(vec_a);
                  auto float_b = tsl::cast<Vec, typename Vec::template transform_extension<double>>(vec_b);
                auto float_result = vdivq_f64( float_a, float_b );
                  return tsl::cast<typename Vec::template transform_extension<double>, Vec>(float_result);

            }
        };
    } // end of namespace functors for template specialization of div for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1311
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<uint8_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                auto arr_a = tsl::to_array<Vec>(vec_a);
                auto arr_b = tsl::to_array<Vec>(vec_b);
                for (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  arr_a[i] /= arr_b[i];
                }
                return tsl::load<Vec>(arr_a.data());
            }
        };
    } // end of namespace functors for template specialization of div for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1311
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<int8_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                auto arr_a = tsl::to_array<Vec>(vec_a);
                auto arr_b = tsl::to_array<Vec>(vec_b);
                for (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  arr_a[i] /= arr_b[i];
                }
                return tsl::load<Vec>(arr_a.data());
            }
        };
    } // end of namespace functors for template specialization of div for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1311
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<uint16_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                auto arr_a = tsl::to_array<Vec>(vec_a);
                auto arr_b = tsl::to_array<Vec>(vec_b);
                for (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  arr_a[i] /= arr_b[i];
                }
                return tsl::load<Vec>(arr_a.data());
            }
        };
    } // end of namespace functors for template specialization of div for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1311
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<int16_t, neon>, Idof> {
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
                const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                auto arr_a = tsl::to_array<Vec>(vec_a);
                auto arr_b = tsl::to_array<Vec>(vec_b);
                for (std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  arr_a[i] /= arr_b[i];
                }
                return tsl::load<Vec>(arr_a.data());
            }
        };
    } // end of namespace functors for template specialization of div for neon using int16_t.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_NEON_HPP