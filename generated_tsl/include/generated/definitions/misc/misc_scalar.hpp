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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/include/generated/definitions/misc/misc_scalar.hpp
 * \date 2024-02-28
 * \brief Miscellaneous primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : 48d9b97 (48d9b974aa94a5b73824da4bb473bf36985664c7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_SCALAR_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_SCALAR_HPP

#include "../../declarations/misc.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "conflict" (primitive conflict).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::138
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct conflict<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of conflict for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "conflict" (primitive conflict).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::138
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct conflict<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of conflict for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "conflict" (primitive conflict).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::138
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct conflict<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of conflict for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "conflict" (primitive conflict).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::138
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct conflict<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of conflict for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "conflict" (primitive conflict).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::138
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct conflict<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of conflict for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "conflict" (primitive conflict).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::138
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct conflict<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of conflict for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "conflict" (primitive conflict).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::138
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct conflict<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of conflict for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "conflict" (primitive conflict).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::138
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct conflict<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                [[maybe_unused]] const typename Vec::register_type data
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of conflict for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::307
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_conflict_free<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
                return 1;
            }
        };
    } // end of namespace functors for template specialization of imask_conflict_free for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::307
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_conflict_free<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
                return 1;
            }
        };
    } // end of namespace functors for template specialization of imask_conflict_free for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::307
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_conflict_free<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
                return 1;
            }
        };
    } // end of namespace functors for template specialization of imask_conflict_free for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::307
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_conflict_free<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
                return 1;
            }
        };
    } // end of namespace functors for template specialization of imask_conflict_free for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::307
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_conflict_free<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
                return 1;
            }
        };
    } // end of namespace functors for template specialization of imask_conflict_free for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::307
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_conflict_free<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
                return 1;
            }
        };
    } // end of namespace functors for template specialization of imask_conflict_free for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::307
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_conflict_free<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
                return 1;
            }
        };
    } // end of namespace functors for template specialization of imask_conflict_free for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_conflict_free" (primitive conflict_free).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::307
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_conflict_free<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
            ) {
                return 1;
            }
        };
    } // end of namespace functors for template specialization of imask_conflict_free for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "blend" (primitive blend).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::400
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct blend<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {
                return (static_cast<bool>(control))? right : left;
            }
        };
    } // end of namespace functors for template specialization of blend for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "blend" (primitive blend).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::400
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct blend<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {
                return (static_cast<bool>(control))? right : left;
            }
        };
    } // end of namespace functors for template specialization of blend for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "blend" (primitive blend).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::400
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct blend<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {
                return (static_cast<bool>(control))? right : left;
            }
        };
    } // end of namespace functors for template specialization of blend for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "blend" (primitive blend).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::400
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct blend<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {
                return (static_cast<bool>(control))? right : left;
            }
        };
    } // end of namespace functors for template specialization of blend for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "blend" (primitive blend).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::400
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct blend<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {
                return (static_cast<bool>(control))? right : left;
            }
        };
    } // end of namespace functors for template specialization of blend for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "blend" (primitive blend).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::400
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct blend<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {
                return (static_cast<bool>(control))? right : left;
            }
        };
    } // end of namespace functors for template specialization of blend for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "blend" (primitive blend).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::400
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct blend<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {
                return (static_cast<bool>(control))? right : left;
            }
        };
    } // end of namespace functors for template specialization of blend for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "blend" (primitive blend).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::400
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct blend<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {
                return (static_cast<bool>(control))? right : left;
            }
        };
    } // end of namespace functors for template specialization of blend for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "blend" (primitive blend).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::400
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct blend<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {
                return (static_cast<bool>(control))? right : left;
            }
        };
    } // end of namespace functors for template specialization of blend for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "blend" (primitive blend).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::400
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct blend<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
            ) {
                return (static_cast<bool>(control))? right : left;
            }
        };
    } // end of namespace functors for template specialization of blend for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imaskz_mov" (primitive maskz_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::633
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imaskz_mov<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type mask, const typename Vec::register_type src
            ) {
                return (mask & 1) ? src : 0;
            }
        };
    } // end of namespace functors for template specialization of imaskz_mov for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imaskz_mov" (primitive maskz_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::633
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imaskz_mov<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type mask, const typename Vec::register_type src
            ) {
                return (mask & 1) ? src : 0;
            }
        };
    } // end of namespace functors for template specialization of imaskz_mov for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imaskz_mov" (primitive maskz_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::633
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imaskz_mov<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type mask, const typename Vec::register_type src
            ) {
                return (mask & 1) ? src : 0;
            }
        };
    } // end of namespace functors for template specialization of imaskz_mov for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imaskz_mov" (primitive maskz_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::633
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imaskz_mov<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type mask, const typename Vec::register_type src
            ) {
                return (mask & 1) ? src : 0;
            }
        };
    } // end of namespace functors for template specialization of imaskz_mov for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imaskz_mov" (primitive maskz_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::633
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imaskz_mov<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type mask, const typename Vec::register_type src
            ) {
                return (mask & 1) ? src : 0;
            }
        };
    } // end of namespace functors for template specialization of imaskz_mov for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imaskz_mov" (primitive maskz_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::633
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imaskz_mov<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type mask, const typename Vec::register_type src
            ) {
                return (mask & 1) ? src : 0;
            }
        };
    } // end of namespace functors for template specialization of imaskz_mov for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imaskz_mov" (primitive maskz_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::633
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imaskz_mov<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type mask, const typename Vec::register_type src
            ) {
                return (mask & 1) ? src : 0;
            }
        };
    } // end of namespace functors for template specialization of imaskz_mov for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imaskz_mov" (primitive maskz_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::633
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imaskz_mov<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type mask, const typename Vec::register_type src
            ) {
                return (mask & 1) ? src : 0;
            }
        };
    } // end of namespace functors for template specialization of imaskz_mov for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imaskz_mov" (primitive maskz_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::633
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imaskz_mov<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type mask, const typename Vec::register_type src
            ) {
                return (mask & 1) ? src : 0;
            }
        };
    } // end of namespace functors for template specialization of imaskz_mov for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imaskz_mov" (primitive maskz_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::633
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imaskz_mov<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type mask, const typename Vec::register_type src
            ) {
                return (mask & 1) ? src : 0;
            }
        };
    } // end of namespace functors for template specialization of imaskz_mov for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_mov" (primitive mask_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::720
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_mov<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::register_type data
            ) {
                return (mask & 1) ? data : src;
            }
        };
    } // end of namespace functors for template specialization of mask_mov for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_mov" (primitive mask_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::720
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_mov<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::register_type data
            ) {
                return (mask & 1) ? data : src;
            }
        };
    } // end of namespace functors for template specialization of mask_mov for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_mov" (primitive mask_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::720
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_mov<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::register_type data
            ) {
                return (mask & 1) ? data : src;
            }
        };
    } // end of namespace functors for template specialization of mask_mov for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_mov" (primitive mask_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::720
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_mov<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::register_type data
            ) {
                return (mask & 1) ? data : src;
            }
        };
    } // end of namespace functors for template specialization of mask_mov for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_mov" (primitive mask_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::720
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_mov<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::register_type data
            ) {
                return (mask & 1) ? data : src;
            }
        };
    } // end of namespace functors for template specialization of mask_mov for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_mov" (primitive mask_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::720
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_mov<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::register_type data
            ) {
                return (mask & 1) ? data : src;
            }
        };
    } // end of namespace functors for template specialization of mask_mov for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_mov" (primitive mask_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::720
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_mov<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::register_type data
            ) {
                return (mask & 1) ? data : src;
            }
        };
    } // end of namespace functors for template specialization of mask_mov for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_mov" (primitive mask_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::720
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_mov<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::register_type data
            ) {
                return (mask & 1) ? data : src;
            }
        };
    } // end of namespace functors for template specialization of mask_mov for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_mov" (primitive mask_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::720
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_mov<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::register_type data
            ) {
                return (mask & 1) ? data : src;
            }
        };
    } // end of namespace functors for template specialization of mask_mov for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_mov" (primitive mask_mov).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/misc.yaml::720
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_mov<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::register_type data
            ) {
                return (mask & 1) ? data : src;
            }
        };
    } // end of namespace functors for template specialization of mask_mov for scalar using double.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_SCALAR_HPP