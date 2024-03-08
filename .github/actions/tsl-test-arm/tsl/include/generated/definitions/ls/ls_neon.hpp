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
 * \file /github/workspace/ci/generation/neon/include/generated/definitions/ls/ls_neon.hpp
 * \date 2024-03-08
 * \brief Load/Store primitives
 * \note
 * Git-Local Url : /github/workspace
 * Git-Remote Url: unknown url
 * Git-Branch    : unknown branch
 * Git-Commit    : unknown commit (unknown commit)
 *
 */
#ifndef TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DEFINITIONS_LS_LS_NEON_HPP
#define TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DEFINITIONS_LS_LS_NEON_HPP

#include <array>
#include "../../declarations/ls.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::70
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_u8(assume_aligned<Vec::vector_alignment()>(memory));
            }
        };
    } // end of namespace functors for template specialization of load for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::70
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_u16(assume_aligned<Vec::vector_alignment()>(memory));
            }
        };
    } // end of namespace functors for template specialization of load for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::70
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_u32(assume_aligned<Vec::vector_alignment()>(memory));
            }
        };
    } // end of namespace functors for template specialization of load for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::70
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_u64(assume_aligned<Vec::vector_alignment()>(memory));
            }
        };
    } // end of namespace functors for template specialization of load for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::70
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_s8(assume_aligned<Vec::vector_alignment()>(memory));
            }
        };
    } // end of namespace functors for template specialization of load for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::70
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_s16(assume_aligned<Vec::vector_alignment()>(memory));
            }
        };
    } // end of namespace functors for template specialization of load for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::70
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_s32(assume_aligned<Vec::vector_alignment()>(memory));
            }
        };
    } // end of namespace functors for template specialization of load for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::70
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_s64(assume_aligned<Vec::vector_alignment()>(memory));
            }
        };
    } // end of namespace functors for template specialization of load for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::70
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_f32(assume_aligned<Vec::vector_alignment()>(memory));
            }
        };
    } // end of namespace functors for template specialization of load for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::70
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_f64(assume_aligned<Vec::vector_alignment()>(memory));
            }
        };
    } // end of namespace functors for template specialization of load for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::158
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_u8(memory);
            }
        };
    } // end of namespace functors for template specialization of loadu for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::158
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_u16(memory);
            }
        };
    } // end of namespace functors for template specialization of loadu for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::158
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_u32(memory);
            }
        };
    } // end of namespace functors for template specialization of loadu for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::158
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_u64(memory);
            }
        };
    } // end of namespace functors for template specialization of loadu for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::158
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_s8(memory);
            }
        };
    } // end of namespace functors for template specialization of loadu for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::158
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_s16(memory);
            }
        };
    } // end of namespace functors for template specialization of loadu for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::158
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_s32(memory);
            }
        };
    } // end of namespace functors for template specialization of loadu for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::158
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_s64(memory);
            }
        };
    } // end of namespace functors for template specialization of loadu for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::158
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_f32(memory);
            }
        };
    } // end of namespace functors for template specialization of loadu for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::158
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::base_type*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::base_type* memory
            ) {
                return vld1q_f64(memory);
            }
        };
    } // end of namespace functors for template specialization of loadu for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::246
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_u8(assume_aligned<Vec::vector_alignment()>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of store for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::246
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_u16(assume_aligned<Vec::vector_alignment()>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of store for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::246
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_u32(assume_aligned<Vec::vector_alignment()>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of store for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::246
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_u64(assume_aligned<Vec::vector_alignment()>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of store for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::246
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_s8(assume_aligned<Vec::vector_alignment()>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of store for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::246
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_s16(assume_aligned<Vec::vector_alignment()>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of store for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::246
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_s32(assume_aligned<Vec::vector_alignment()>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of store for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::246
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_s64(assume_aligned<Vec::vector_alignment()>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of store for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::246
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_f32(assume_aligned<Vec::vector_alignment()>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of store for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::246
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_f64(assume_aligned<Vec::vector_alignment()>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of store for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::329
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_u8(memory, data);
            }
        };
    } // end of namespace functors for template specialization of storeu for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::329
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_u16(memory, data);
            }
        };
    } // end of namespace functors for template specialization of storeu for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::329
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_u32(memory, data);
            }
        };
    } // end of namespace functors for template specialization of storeu for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::329
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_u64(memory, data);
            }
        };
    } // end of namespace functors for template specialization of storeu for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::329
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_s8(memory, data);
            }
        };
    } // end of namespace functors for template specialization of storeu for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::329
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_s16(memory, data);
            }
        };
    } // end of namespace functors for template specialization of storeu for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::329
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_s32(memory, data);
            }
        };
    } // end of namespace functors for template specialization of storeu for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::329
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_s64(memory, data);
            }
        };
    } // end of namespace functors for template specialization of storeu for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::329
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_f32(memory, data);
            }
        };
    } // end of namespace functors for template specialization of storeu for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::329
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::base_type*, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return true;
            }
            
            TSL_FORCE_INLINE 
            static void apply(
                typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                vst1q_f64(memory, data);
            }
        };
    } // end of namespace functors for template specialization of storeu for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::413
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
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
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
                tsl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
                return tmp;
            }
        };
    } // end of namespace functors for template specialization of to_array for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::413
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
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
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
                tsl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
                return tmp;
            }
        };
    } // end of namespace functors for template specialization of to_array for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::413
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
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
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
                tsl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
                return tmp;
            }
        };
    } // end of namespace functors for template specialization of to_array for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::413
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
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
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
                tsl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
                return tmp;
            }
        };
    } // end of namespace functors for template specialization of to_array for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::413
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
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
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
                tsl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
                return tmp;
            }
        };
    } // end of namespace functors for template specialization of to_array for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::413
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
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
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
                tsl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
                return tmp;
            }
        };
    } // end of namespace functors for template specialization of to_array for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::413
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
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
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
                tsl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
                return tmp;
            }
        };
    } // end of namespace functors for template specialization of to_array for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::413
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
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
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
                tsl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
                return tmp;
            }
        };
    } // end of namespace functors for template specialization of to_array for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::413
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
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
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
                tsl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
                return tmp;
            }
        };
    } // end of namespace functors for template specialization of to_array for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::413
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>;
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
            static __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()> apply(
                const typename Vec::register_type data
            ) {
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> tmp{};
                tsl::store<Vec>(assume_aligned<Vec::vector_alignment()>(tmp.data()), data);
                return tmp;
            }
        };
    } // end of namespace functors for template specialization of to_array for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::503
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {
                return vdupq_n_u8( value );
            }
        };
    } // end of namespace functors for template specialization of set1 for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::503
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {
                return vdupq_n_u16( value );
            }
        };
    } // end of namespace functors for template specialization of set1 for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::503
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {
                return vdupq_n_u32( value );
            }
        };
    } // end of namespace functors for template specialization of set1 for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::503
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {
                return vdupq_n_u64( value );
            }
        };
    } // end of namespace functors for template specialization of set1 for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::503
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {
                return vdupq_n_s8( value );
            }
        };
    } // end of namespace functors for template specialization of set1 for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::503
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {
                return vdupq_n_s16( value );
            }
        };
    } // end of namespace functors for template specialization of set1 for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::503
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {
                return vdupq_n_s32( value );
            }
        };
    } // end of namespace functors for template specialization of set1 for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::503
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {
                return vdupq_n_s64( value );
            }
        };
    } // end of namespace functors for template specialization of set1 for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::503
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {
                return vdupq_n_f32( value );
            }
        };
    } // end of namespace functors for template specialization of set1 for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::503
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::base_type value
            ) {
                return vdupq_n_f64( value );
            }
        };
    } // end of namespace functors for template specialization of set1 for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint8_t, neon>, simd<int8_t, neon>, N, Idof> {
            using Vec = simd<uint8_t, neon>;
            using IndicesType = simd<int8_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint8_t, neon>, simd<uint8_t, neon>, N, Idof> {
            using Vec = simd<uint8_t, neon>;
            using IndicesType = simd<uint8_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint16_t, neon>, simd<int16_t, neon>, N, Idof> {
            using Vec = simd<uint16_t, neon>;
            using IndicesType = simd<int16_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint16_t, neon>, simd<uint16_t, neon>, N, Idof> {
            using Vec = simd<uint16_t, neon>;
            using IndicesType = simd<uint16_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint32_t, neon>, simd<int32_t, neon>, N, Idof> {
            using Vec = simd<uint32_t, neon>;
            using IndicesType = simd<int32_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint32_t, neon>, simd<uint32_t, neon>, N, Idof> {
            using Vec = simd<uint32_t, neon>;
            using IndicesType = simd<uint32_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint64_t, neon>, simd<int64_t, neon>, N, Idof> {
            using Vec = simd<uint64_t, neon>;
            using IndicesType = simd<int64_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint64_t, neon>, simd<uint64_t, neon>, N, Idof> {
            using Vec = simd<uint64_t, neon>;
            using IndicesType = simd<uint64_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int8_t, neon>, simd<int8_t, neon>, N, Idof> {
            using Vec = simd<int8_t, neon>;
            using IndicesType = simd<int8_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int8_t, neon>, simd<uint8_t, neon>, N, Idof> {
            using Vec = simd<int8_t, neon>;
            using IndicesType = simd<uint8_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int16_t, neon>, simd<int16_t, neon>, N, Idof> {
            using Vec = simd<int16_t, neon>;
            using IndicesType = simd<int16_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int16_t, neon>, simd<uint16_t, neon>, N, Idof> {
            using Vec = simd<int16_t, neon>;
            using IndicesType = simd<uint16_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int32_t, neon>, simd<int32_t, neon>, N, Idof> {
            using Vec = simd<int32_t, neon>;
            using IndicesType = simd<int32_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int32_t, neon>, simd<uint32_t, neon>, N, Idof> {
            using Vec = simd<int32_t, neon>;
            using IndicesType = simd<uint32_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int64_t, neon>, simd<int64_t, neon>, N, Idof> {
            using Vec = simd<int64_t, neon>;
            using IndicesType = simd<int64_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int64_t, neon>, simd<uint64_t, neon>, N, Idof> {
            using Vec = simd<int64_t, neon>;
            using IndicesType = simd<uint64_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<float, neon>, simd<int32_t, neon>, N, Idof> {
            using Vec = simd<float, neon>;
            using IndicesType = simd<int32_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<float, neon>, simd<uint32_t, neon>, N, Idof> {
            using Vec = simd<float, neon>;
            using IndicesType = simd<uint32_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<double, neon>, simd<int64_t, neon>, N, Idof> {
            using Vec = simd<double, neon>;
            using IndicesType = simd<int64_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1004
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<double, neon>, simd<uint64_t, neon>, N, Idof> {
            using Vec = simd<double, neon>;
            using IndicesType = simd<uint64_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
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
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<char const*>(memory) + idx_array[i] * N);
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of gather for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1148
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<uint8_t, neon>, simd<int8_t, neon>, N, Idof> {
            using Vec = simd<uint8_t, neon>;
            using IndicesType = simd<int8_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto const src_array = tsl::to_array<Vec>(source);
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                using VecMaskT = typename Vec::transform_extension<int8_t>;
                auto const mask_array = tsl::to_array<VecMaskT>(mask);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = (mask_array[i] == 0) ? src_array[i] : mem[idx_array[i]];
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1148
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<uint8_t, neon>, simd<uint8_t, neon>, N, Idof> {
            using Vec = simd<uint8_t, neon>;
            using IndicesType = simd<uint8_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto const src_array = tsl::to_array<Vec>(source);
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                using VecMaskT = typename Vec::transform_extension<uint8_t>;
                auto const mask_array = tsl::to_array<VecMaskT>(mask);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = (mask_array[i] == 0) ? src_array[i] : mem[idx_array[i]];
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1148
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<uint16_t, neon>, simd<int16_t, neon>, N, Idof> {
            using Vec = simd<uint16_t, neon>;
            using IndicesType = simd<int16_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto const src_array = tsl::to_array<Vec>(source);
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                using VecMaskT = typename Vec::transform_extension<int16_t>;
                auto const mask_array = tsl::to_array<VecMaskT>(mask);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = (mask_array[i] == 0) ? src_array[i] : mem[idx_array[i]];
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1148
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<uint16_t, neon>, simd<uint16_t, neon>, N, Idof> {
            using Vec = simd<uint16_t, neon>;
            using IndicesType = simd<uint16_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto const src_array = tsl::to_array<Vec>(source);
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                using VecMaskT = typename Vec::transform_extension<uint16_t>;
                auto const mask_array = tsl::to_array<VecMaskT>(mask);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = (mask_array[i] == 0) ? src_array[i] : mem[idx_array[i]];
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1148
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<uint32_t, neon>, simd<int32_t, neon>, N, Idof> {
            using Vec = simd<uint32_t, neon>;
            using IndicesType = simd<int32_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto const src_array = tsl::to_array<Vec>(source);
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                using VecMaskT = typename Vec::transform_extension<int32_t>;
                auto const mask_array = tsl::to_array<VecMaskT>(mask);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = (mask_array[i] == 0) ? src_array[i] : mem[idx_array[i]];
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1148
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<uint32_t, neon>, simd<uint32_t, neon>, N, Idof> {
            using Vec = simd<uint32_t, neon>;
            using IndicesType = simd<uint32_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto const src_array = tsl::to_array<Vec>(source);
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                using VecMaskT = typename Vec::transform_extension<uint32_t>;
                auto const mask_array = tsl::to_array<VecMaskT>(mask);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = (mask_array[i] == 0) ? src_array[i] : mem[idx_array[i]];
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1148
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<int8_t, neon>, simd<int8_t, neon>, N, Idof> {
            using Vec = simd<int8_t, neon>;
            using IndicesType = simd<int8_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto const src_array = tsl::to_array<Vec>(source);
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                using VecMaskT = typename Vec::transform_extension<int8_t>;
                auto const mask_array = tsl::to_array<VecMaskT>(mask);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = (mask_array[i] == 0) ? src_array[i] : mem[idx_array[i]];
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1148
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<int8_t, neon>, simd<uint8_t, neon>, N, Idof> {
            using Vec = simd<int8_t, neon>;
            using IndicesType = simd<uint8_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto const src_array = tsl::to_array<Vec>(source);
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                using VecMaskT = typename Vec::transform_extension<uint8_t>;
                auto const mask_array = tsl::to_array<VecMaskT>(mask);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = (mask_array[i] == 0) ? src_array[i] : mem[idx_array[i]];
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1148
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<int16_t, neon>, simd<int16_t, neon>, N, Idof> {
            using Vec = simd<int16_t, neon>;
            using IndicesType = simd<int16_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto const src_array = tsl::to_array<Vec>(source);
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                using VecMaskT = typename Vec::transform_extension<int16_t>;
                auto const mask_array = tsl::to_array<VecMaskT>(mask);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = (mask_array[i] == 0) ? src_array[i] : mem[idx_array[i]];
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1148
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<int16_t, neon>, simd<uint16_t, neon>, N, Idof> {
            using Vec = simd<int16_t, neon>;
            using IndicesType = simd<uint16_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto const src_array = tsl::to_array<Vec>(source);
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                using VecMaskT = typename Vec::transform_extension<uint16_t>;
                auto const mask_array = tsl::to_array<VecMaskT>(mask);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = (mask_array[i] == 0) ? src_array[i] : mem[idx_array[i]];
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1148
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<int32_t, neon>, simd<int32_t, neon>, N, Idof> {
            using Vec = simd<int32_t, neon>;
            using IndicesType = simd<int32_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto const src_array = tsl::to_array<Vec>(source);
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                using VecMaskT = typename Vec::transform_extension<int32_t>;
                auto const mask_array = tsl::to_array<VecMaskT>(mask);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = (mask_array[i] == 0) ? src_array[i] : mem[idx_array[i]];
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1148
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<int32_t, neon>, simd<uint32_t, neon>, N, Idof> {
            using Vec = simd<int32_t, neon>;
            using IndicesType = simd<uint32_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto const src_array = tsl::to_array<Vec>(source);
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                using VecMaskT = typename Vec::transform_extension<uint32_t>;
                auto const mask_array = tsl::to_array<VecMaskT>(mask);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = (mask_array[i] == 0) ? src_array[i] : mem[idx_array[i]];
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1148
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<float, neon>, simd<int32_t, neon>, N, Idof> {
            using Vec = simd<float, neon>;
            using IndicesType = simd<int32_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto const src_array = tsl::to_array<Vec>(source);
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                using VecMaskT = typename Vec::transform_extension<int32_t>;
                auto const mask_array = tsl::to_array<VecMaskT>(mask);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = (mask_array[i] == 0) ? src_array[i] : mem[idx_array[i]];
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1148
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<float, neon>, simd<uint32_t, neon>, N, Idof> {
            using Vec = simd<float, neon>;
            using IndicesType = simd<uint32_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto const src_array = tsl::to_array<Vec>(source);
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                using VecMaskT = typename Vec::transform_extension<uint32_t>;
                auto const mask_array = tsl::to_array<VecMaskT>(mask);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = (mask_array[i] == 0) ? src_array[i] : mem[idx_array[i]];
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1148
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<double, neon>, simd<int64_t, neon>, N, Idof> {
            using Vec = simd<double, neon>;
            using IndicesType = simd<int64_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto const src_array = tsl::to_array<Vec>(source);
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                using VecMaskT = typename Vec::transform_extension<int64_t>;
                auto const mask_array = tsl::to_array<VecMaskT>(mask);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = (mask_array[i] == 0) ? src_array[i] : mem[idx_array[i]];
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1148
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<double, neon>, simd<uint64_t, neon>, N, Idof> {
            using Vec = simd<double, neon>;
            using IndicesType = simd<uint64_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> result{};
                auto const src_array = tsl::to_array<Vec>(source);
                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto const idx_array = tsl::to_array<IndicesType>(index);
                using VecMaskT = typename Vec::transform_extension<uint64_t>;
                auto const mask_array = tsl::to_array<VecMaskT>(mask);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result[i] = (mask_array[i] == 0) ? src_array[i] : mem[idx_array[i]];
                }
                return tsl::load<Vec>(result.data());
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1174
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<int64_t, neon>, simd<int64_t, neon>, N, Idof> {
            using Vec = simd<int64_t, neon>;
            using IndicesType = simd<int64_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto tmp = vdupq_n_s64( ( mask[ 0 ] == 0 ) ? source[ 0 ] : mem[ index[0] ] );
                return vsetq_lane_s64( ( ( mask[ 1 ] == 0 ) ? source[ 1 ] : mem[ index[1] ] ), tmp, 1 );
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1174
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<uint64_t, neon>, simd<uint64_t, neon>, N, Idof> {
            using Vec = simd<uint64_t, neon>;
            using IndicesType = simd<uint64_t, neon>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_gather is not supported by your hardware natively while it is forced by using native" );

                auto mem = reinterpret_cast<typename Vec::base_type const *>(memory);
                auto tmp = vdupq_n_s64( ( mask[ 0 ] == 0 ) ? source[ 0 ] : mem[ index[0] ] );
                return vsetq_lane_s64( ( ( mask[ 1 ] == 0 ) ? source[ 1 ] : mem[ index[1] ] ), tmp, 1 );
            }
        };
    } // end of namespace functors for template specialization of mask_gather for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1274
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<uint8_t, neon>, N, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

                auto const val_array = tsl::to_array<Vec>(data);
                using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
                auto const idx_array = tsl::to_array<offsetExt>(index);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[idx_array[i]] = val_array[i];
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1274
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<uint16_t, neon>, N, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

                auto const val_array = tsl::to_array<Vec>(data);
                using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
                auto const idx_array = tsl::to_array<offsetExt>(index);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[idx_array[i]] = val_array[i];
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1274
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<uint32_t, neon>, N, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

                auto const val_array = tsl::to_array<Vec>(data);
                using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
                auto const idx_array = tsl::to_array<offsetExt>(index);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[idx_array[i]] = val_array[i];
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1274
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<uint64_t, neon>, N, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

                auto const val_array = tsl::to_array<Vec>(data);
                using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
                auto const idx_array = tsl::to_array<offsetExt>(index);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[idx_array[i]] = val_array[i];
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1274
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<int8_t, neon>, N, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

                auto const val_array = tsl::to_array<Vec>(data);
                using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
                auto const idx_array = tsl::to_array<offsetExt>(index);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[idx_array[i]] = val_array[i];
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1274
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<int16_t, neon>, N, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

                auto const val_array = tsl::to_array<Vec>(data);
                using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
                auto const idx_array = tsl::to_array<offsetExt>(index);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[idx_array[i]] = val_array[i];
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1274
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<int32_t, neon>, N, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

                auto const val_array = tsl::to_array<Vec>(data);
                using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
                auto const idx_array = tsl::to_array<offsetExt>(index);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[idx_array[i]] = val_array[i];
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1274
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<int64_t, neon>, N, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

                auto const val_array = tsl::to_array<Vec>(data);
                using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
                auto const idx_array = tsl::to_array<offsetExt>(index);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[idx_array[i]] = val_array[i];
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1274
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<float, neon>, N, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

                auto const val_array = tsl::to_array<Vec>(data);
                using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
                auto const idx_array = tsl::to_array<offsetExt>(index);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[idx_array[i]] = val_array[i];
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1274
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<double, neon>, N, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive scatter is not supported by your hardware natively while it is forced by using native" );

                auto const val_array = tsl::to_array<Vec>(data);
                using offsetExt = typename Vec::transform_extension<Vec::offset_base_type>;
                auto const idx_array = tsl::to_array<offsetExt>(index);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[idx_array[i]] = val_array[i];
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1406
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<uint8_t, neon>, N, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> idx_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> val_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> mask_array{};
                tsl::store<Vec>(val_array.data(), data);
                tsl::store<typename Vec::transform_extension<Vec::offset_base_type>>(idx_array.data(), index);
                tsl::store<typename Vec::transform_extension<typename Vec::offset_base_type>>(mask_array.data(), mask);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if(mask_array[i] != 0) {
                    if constexpr(N==sizeof(typename Vec::base_type)) {
                      auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                      mem[idx_array[i]] = val_array[i];
                    } else {
                      if constexpr(N==1) {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                      } else {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                      }
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1406
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<uint16_t, neon>, N, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> idx_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> val_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> mask_array{};
                tsl::store<Vec>(val_array.data(), data);
                tsl::store<typename Vec::transform_extension<Vec::offset_base_type>>(idx_array.data(), index);
                tsl::store<typename Vec::transform_extension<typename Vec::offset_base_type>>(mask_array.data(), mask);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if(mask_array[i] != 0) {
                    if constexpr(N==sizeof(typename Vec::base_type)) {
                      auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                      mem[idx_array[i]] = val_array[i];
                    } else {
                      if constexpr(N==1) {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                      } else {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                      }
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1406
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<uint32_t, neon>, N, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> idx_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> val_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> mask_array{};
                tsl::store<Vec>(val_array.data(), data);
                tsl::store<typename Vec::transform_extension<Vec::offset_base_type>>(idx_array.data(), index);
                tsl::store<typename Vec::transform_extension<typename Vec::offset_base_type>>(mask_array.data(), mask);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if(mask_array[i] != 0) {
                    if constexpr(N==sizeof(typename Vec::base_type)) {
                      auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                      mem[idx_array[i]] = val_array[i];
                    } else {
                      if constexpr(N==1) {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                      } else {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                      }
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1406
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<uint64_t, neon>, N, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> idx_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> val_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> mask_array{};
                tsl::store<Vec>(val_array.data(), data);
                tsl::store<typename Vec::transform_extension<Vec::offset_base_type>>(idx_array.data(), index);
                tsl::store<typename Vec::transform_extension<typename Vec::offset_base_type>>(mask_array.data(), mask);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if(mask_array[i] != 0) {
                    if constexpr(N==sizeof(typename Vec::base_type)) {
                      auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                      mem[idx_array[i]] = val_array[i];
                    } else {
                      if constexpr(N==1) {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                      } else {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                      }
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1406
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<int8_t, neon>, N, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> idx_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> val_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> mask_array{};
                tsl::store<Vec>(val_array.data(), data);
                tsl::store<typename Vec::transform_extension<Vec::offset_base_type>>(idx_array.data(), index);
                tsl::store<typename Vec::transform_extension<typename Vec::offset_base_type>>(mask_array.data(), mask);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if(mask_array[i] != 0) {
                    if constexpr(N==sizeof(typename Vec::base_type)) {
                      auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                      mem[idx_array[i]] = val_array[i];
                    } else {
                      if constexpr(N==1) {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                      } else {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                      }
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1406
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<int16_t, neon>, N, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> idx_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> val_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> mask_array{};
                tsl::store<Vec>(val_array.data(), data);
                tsl::store<typename Vec::transform_extension<Vec::offset_base_type>>(idx_array.data(), index);
                tsl::store<typename Vec::transform_extension<typename Vec::offset_base_type>>(mask_array.data(), mask);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if(mask_array[i] != 0) {
                    if constexpr(N==sizeof(typename Vec::base_type)) {
                      auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                      mem[idx_array[i]] = val_array[i];
                    } else {
                      if constexpr(N==1) {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                      } else {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                      }
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1406
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<int32_t, neon>, N, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> idx_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> val_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> mask_array{};
                tsl::store<Vec>(val_array.data(), data);
                tsl::store<typename Vec::transform_extension<Vec::offset_base_type>>(idx_array.data(), index);
                tsl::store<typename Vec::transform_extension<typename Vec::offset_base_type>>(mask_array.data(), mask);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if(mask_array[i] != 0) {
                    if constexpr(N==sizeof(typename Vec::base_type)) {
                      auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                      mem[idx_array[i]] = val_array[i];
                    } else {
                      if constexpr(N==1) {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                      } else {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                      }
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1406
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<int64_t, neon>, N, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> idx_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> val_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> mask_array{};
                tsl::store<Vec>(val_array.data(), data);
                tsl::store<typename Vec::transform_extension<Vec::offset_base_type>>(idx_array.data(), index);
                tsl::store<typename Vec::transform_extension<typename Vec::offset_base_type>>(mask_array.data(), mask);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if(mask_array[i] != 0) {
                    if constexpr(N==sizeof(typename Vec::base_type)) {
                      auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                      mem[idx_array[i]] = val_array[i];
                    } else {
                      if constexpr(N==1) {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                      } else {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                      }
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1406
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<float, neon>, N, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> idx_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> val_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> mask_array{};
                tsl::store<Vec>(val_array.data(), data);
                tsl::store<typename Vec::transform_extension<Vec::offset_base_type>>(idx_array.data(), index);
                tsl::store<typename Vec::transform_extension<typename Vec::offset_base_type>>(mask_array.data(), mask);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if(mask_array[i] != 0) {
                    if constexpr(N==sizeof(typename Vec::base_type)) {
                      auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                      mem[idx_array[i]] = val_array[i];
                    } else {
                      if constexpr(N==1) {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                      } else {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                      }
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/ls.yaml::1406
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<double, neon>, N, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return false;
            }
            static constexpr bool native_supported() {
                return false;
            }
            TSL_NO_NATIVE_SUPPORT_WARNING
            TSL_FORCE_INLINE 
            static void apply(
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_scatter is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> idx_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::base_type, Vec::vector_element_count()> val_array{};
                alignas(Vec::vector_size_B()) std::array<typename Vec::offset_base_type, Vec::vector_element_count()> mask_array{};
                tsl::store<Vec>(val_array.data(), data);
                tsl::store<typename Vec::transform_extension<Vec::offset_base_type>>(idx_array.data(), index);
                tsl::store<typename Vec::transform_extension<typename Vec::offset_base_type>>(mask_array.data(), mask);
                TSL_UNROLL(Vec::vector_element_count())
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  if(mask_array[i] != 0) {
                    if constexpr(N==sizeof(typename Vec::base_type)) {
                      auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                      mem[idx_array[i]] = val_array[i];
                    } else {
                      if constexpr(N==1) {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[idx_array[i]]) = val_array[i];
                      } else {
                        *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(idx_array[i]<<(cilog2(N)))]) = val_array[i];
                      }
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for neon using double.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DEFINITIONS_LS_LS_NEON_HPP