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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/sse_only/include/generated/definitions/ls/ls_scalar.hpp
 * \date 2024-02-29
 * \brief Load/Store primitives
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : d17f8eb (d17f8eb76bb8c5acffdd50fd389e77f1972f0fa7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_LS_LS_SCALAR_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_LS_LS_SCALAR_HPP

#include "../../declarations/ls.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::75
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::163
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of loadu for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::163
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of loadu for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::163
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of loadu for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::163
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of loadu for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::163
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of loadu for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::163
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of loadu for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::163
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of loadu for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::163
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of loadu for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::163
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of loadu for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::163
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of loadu for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::251
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of store for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::251
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of store for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::251
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of store for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::251
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of store for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::251
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of store for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::251
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of store for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::251
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of store for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::251
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of store for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::251
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of store for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::251
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of store for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::334
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of storeu for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::334
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of storeu for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::334
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of storeu for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::334
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of storeu for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::334
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of storeu for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::334
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of storeu for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::334
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of storeu for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::334
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of storeu for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::334
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of storeu for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::334
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                *memory = data;
            }
        };
    } // end of namespace functors for template specialization of storeu for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::421
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                std::array<typename Vec::base_type, Vec::vector_element_count()> temp;
                temp.fill(data);
                return temp;
            }
        };
    } // end of namespace functors for template specialization of to_array for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::421
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                std::array<typename Vec::base_type, Vec::vector_element_count()> temp;
                temp.fill(data);
                return temp;
            }
        };
    } // end of namespace functors for template specialization of to_array for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::421
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                std::array<typename Vec::base_type, Vec::vector_element_count()> temp;
                temp.fill(data);
                return temp;
            }
        };
    } // end of namespace functors for template specialization of to_array for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::421
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                std::array<typename Vec::base_type, Vec::vector_element_count()> temp;
                temp.fill(data);
                return temp;
            }
        };
    } // end of namespace functors for template specialization of to_array for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::421
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                std::array<typename Vec::base_type, Vec::vector_element_count()> temp;
                temp.fill(data);
                return temp;
            }
        };
    } // end of namespace functors for template specialization of to_array for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::421
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                std::array<typename Vec::base_type, Vec::vector_element_count()> temp;
                temp.fill(data);
                return temp;
            }
        };
    } // end of namespace functors for template specialization of to_array for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::421
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                std::array<typename Vec::base_type, Vec::vector_element_count()> temp;
                temp.fill(data);
                return temp;
            }
        };
    } // end of namespace functors for template specialization of to_array for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::421
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                std::array<typename Vec::base_type, Vec::vector_element_count()> temp;
                temp.fill(data);
                return temp;
            }
        };
    } // end of namespace functors for template specialization of to_array for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::421
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                std::array<typename Vec::base_type, Vec::vector_element_count()> temp;
                temp.fill(data);
                return temp;
            }
        };
    } // end of namespace functors for template specialization of to_array for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_array" (primitive to_array).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::421
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_array<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                std::array<typename Vec::base_type, Vec::vector_element_count()> temp;
                temp.fill(data);
                return temp;
            }
        };
    } // end of namespace functors for template specialization of to_array for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::508
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                return value;
            }
        };
    } // end of namespace functors for template specialization of set1 for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::508
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                return value;
            }
        };
    } // end of namespace functors for template specialization of set1 for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::508
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                return value;
            }
        };
    } // end of namespace functors for template specialization of set1 for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::508
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                return value;
            }
        };
    } // end of namespace functors for template specialization of set1 for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::508
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                return value;
            }
        };
    } // end of namespace functors for template specialization of set1 for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::508
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                return value;
            }
        };
    } // end of namespace functors for template specialization of set1 for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::508
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                return value;
            }
        };
    } // end of namespace functors for template specialization of set1 for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::508
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                return value;
            }
        };
    } // end of namespace functors for template specialization of set1 for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::508
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                return value;
            }
        };
    } // end of namespace functors for template specialization of set1 for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::508
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                return value;
            }
        };
    } // end of namespace functors for template specialization of set1 for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::585
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of set_zero for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::585
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of set_zero for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::585
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of set_zero for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::585
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of set_zero for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::585
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of set_zero for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::585
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of set_zero for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::585
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of set_zero for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::585
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of set_zero for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::585
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of set_zero for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::585
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of set_zero for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::663
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool parameters_queryable() {
                return false;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                Ts... args
            ) {
                return std::get<0>(std::make_tuple(args...));
            }
        };
    } // end of namespace functors for template specialization of set for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::663
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool parameters_queryable() {
                return false;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                Ts... args
            ) {
                return std::get<0>(std::make_tuple(args...));
            }
        };
    } // end of namespace functors for template specialization of set for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::663
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool parameters_queryable() {
                return false;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                Ts... args
            ) {
                return std::get<0>(std::make_tuple(args...));
            }
        };
    } // end of namespace functors for template specialization of set for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::663
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool parameters_queryable() {
                return false;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                Ts... args
            ) {
                return std::get<0>(std::make_tuple(args...));
            }
        };
    } // end of namespace functors for template specialization of set for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::663
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool parameters_queryable() {
                return false;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                Ts... args
            ) {
                return std::get<0>(std::make_tuple(args...));
            }
        };
    } // end of namespace functors for template specialization of set for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::663
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool parameters_queryable() {
                return false;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                Ts... args
            ) {
                return std::get<0>(std::make_tuple(args...));
            }
        };
    } // end of namespace functors for template specialization of set for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::663
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool parameters_queryable() {
                return false;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                Ts... args
            ) {
                return std::get<0>(std::make_tuple(args...));
            }
        };
    } // end of namespace functors for template specialization of set for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::663
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool parameters_queryable() {
                return false;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                Ts... args
            ) {
                return std::get<0>(std::make_tuple(args...));
            }
        };
    } // end of namespace functors for template specialization of set for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::663
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool parameters_queryable() {
                return false;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                Ts... args
            ) {
                return std::get<0>(std::make_tuple(args...));
            }
        };
    } // end of namespace functors for template specialization of set for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::663
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::register_type;
            static constexpr bool parameters_queryable() {
                return false;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            template< typename... Ts >
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                Ts... args
            ) {
                return std::get<0>(std::make_tuple(args...));
            }
        };
    } // end of namespace functors for template specialization of set for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::744
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of sequence for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::744
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of sequence for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::744
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of sequence for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::744
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of sequence for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::744
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of sequence for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::744
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of sequence for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::744
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of sequence for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::744
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of sequence for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::744
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of sequence for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::744
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                
            ) {
                return 0;
            }
        };
    } // end of namespace functors for template specialization of sequence for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::857
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<typename Vec::base_type, typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {
                return start;
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::857
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<typename Vec::base_type, typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {
                return start;
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::857
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<typename Vec::base_type, typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {
                return start;
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::857
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<typename Vec::base_type, typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {
                return start;
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::857
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<typename Vec::base_type, typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {
                return start;
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::857
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<typename Vec::base_type, typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {
                return start;
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::857
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<typename Vec::base_type, typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {
                return start;
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::857
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<typename Vec::base_type, typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {
                return start;
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::857
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<typename Vec::base_type, typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {
                return start;
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::857
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<typename Vec::base_type, typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                typename Vec::base_type start, [[maybe_unused]] typename Vec::base_type stepwidth
            ) {
                return start;
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint8_t, scalar>, simd<int8_t, scalar>, N, Idof> {
            using Vec = simd<uint8_t, scalar>;
            using IndicesType = simd<int8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint8_t, scalar>, simd<uint8_t, scalar>, N, Idof> {
            using Vec = simd<uint8_t, scalar>;
            using IndicesType = simd<uint8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint8_t, scalar>, simd<int16_t, scalar>, N, Idof> {
            using Vec = simd<uint8_t, scalar>;
            using IndicesType = simd<int16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint8_t, scalar>, simd<uint16_t, scalar>, N, Idof> {
            using Vec = simd<uint8_t, scalar>;
            using IndicesType = simd<uint16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint8_t, scalar>, simd<int32_t, scalar>, N, Idof> {
            using Vec = simd<uint8_t, scalar>;
            using IndicesType = simd<int32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint8_t, scalar>, simd<uint32_t, scalar>, N, Idof> {
            using Vec = simd<uint8_t, scalar>;
            using IndicesType = simd<uint32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint8_t, scalar>, simd<int64_t, scalar>, N, Idof> {
            using Vec = simd<uint8_t, scalar>;
            using IndicesType = simd<int64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint8_t, scalar>, simd<uint64_t, scalar>, N, Idof> {
            using Vec = simd<uint8_t, scalar>;
            using IndicesType = simd<uint64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint16_t, scalar>, simd<int8_t, scalar>, N, Idof> {
            using Vec = simd<uint16_t, scalar>;
            using IndicesType = simd<int8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint16_t, scalar>, simd<uint8_t, scalar>, N, Idof> {
            using Vec = simd<uint16_t, scalar>;
            using IndicesType = simd<uint8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint16_t, scalar>, simd<int16_t, scalar>, N, Idof> {
            using Vec = simd<uint16_t, scalar>;
            using IndicesType = simd<int16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint16_t, scalar>, simd<uint16_t, scalar>, N, Idof> {
            using Vec = simd<uint16_t, scalar>;
            using IndicesType = simd<uint16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint16_t, scalar>, simd<int32_t, scalar>, N, Idof> {
            using Vec = simd<uint16_t, scalar>;
            using IndicesType = simd<int32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint16_t, scalar>, simd<uint32_t, scalar>, N, Idof> {
            using Vec = simd<uint16_t, scalar>;
            using IndicesType = simd<uint32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint16_t, scalar>, simd<int64_t, scalar>, N, Idof> {
            using Vec = simd<uint16_t, scalar>;
            using IndicesType = simd<int64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint16_t, scalar>, simd<uint64_t, scalar>, N, Idof> {
            using Vec = simd<uint16_t, scalar>;
            using IndicesType = simd<uint64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint32_t, scalar>, simd<int8_t, scalar>, N, Idof> {
            using Vec = simd<uint32_t, scalar>;
            using IndicesType = simd<int8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint32_t, scalar>, simd<uint8_t, scalar>, N, Idof> {
            using Vec = simd<uint32_t, scalar>;
            using IndicesType = simd<uint8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint32_t, scalar>, simd<int16_t, scalar>, N, Idof> {
            using Vec = simd<uint32_t, scalar>;
            using IndicesType = simd<int16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint32_t, scalar>, simd<uint16_t, scalar>, N, Idof> {
            using Vec = simd<uint32_t, scalar>;
            using IndicesType = simd<uint16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint32_t, scalar>, simd<int32_t, scalar>, N, Idof> {
            using Vec = simd<uint32_t, scalar>;
            using IndicesType = simd<int32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint32_t, scalar>, simd<uint32_t, scalar>, N, Idof> {
            using Vec = simd<uint32_t, scalar>;
            using IndicesType = simd<uint32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint32_t, scalar>, simd<int64_t, scalar>, N, Idof> {
            using Vec = simd<uint32_t, scalar>;
            using IndicesType = simd<int64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint32_t, scalar>, simd<uint64_t, scalar>, N, Idof> {
            using Vec = simd<uint32_t, scalar>;
            using IndicesType = simd<uint64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint64_t, scalar>, simd<int8_t, scalar>, N, Idof> {
            using Vec = simd<uint64_t, scalar>;
            using IndicesType = simd<int8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint64_t, scalar>, simd<uint8_t, scalar>, N, Idof> {
            using Vec = simd<uint64_t, scalar>;
            using IndicesType = simd<uint8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint64_t, scalar>, simd<int16_t, scalar>, N, Idof> {
            using Vec = simd<uint64_t, scalar>;
            using IndicesType = simd<int16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint64_t, scalar>, simd<uint16_t, scalar>, N, Idof> {
            using Vec = simd<uint64_t, scalar>;
            using IndicesType = simd<uint16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint64_t, scalar>, simd<int32_t, scalar>, N, Idof> {
            using Vec = simd<uint64_t, scalar>;
            using IndicesType = simd<int32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint64_t, scalar>, simd<uint32_t, scalar>, N, Idof> {
            using Vec = simd<uint64_t, scalar>;
            using IndicesType = simd<uint32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint64_t, scalar>, simd<int64_t, scalar>, N, Idof> {
            using Vec = simd<uint64_t, scalar>;
            using IndicesType = simd<int64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<uint64_t, scalar>, simd<uint64_t, scalar>, N, Idof> {
            using Vec = simd<uint64_t, scalar>;
            using IndicesType = simd<uint64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int8_t, scalar>, simd<int8_t, scalar>, N, Idof> {
            using Vec = simd<int8_t, scalar>;
            using IndicesType = simd<int8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int8_t, scalar>, simd<uint8_t, scalar>, N, Idof> {
            using Vec = simd<int8_t, scalar>;
            using IndicesType = simd<uint8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int8_t, scalar>, simd<int16_t, scalar>, N, Idof> {
            using Vec = simd<int8_t, scalar>;
            using IndicesType = simd<int16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int8_t, scalar>, simd<uint16_t, scalar>, N, Idof> {
            using Vec = simd<int8_t, scalar>;
            using IndicesType = simd<uint16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int8_t, scalar>, simd<int32_t, scalar>, N, Idof> {
            using Vec = simd<int8_t, scalar>;
            using IndicesType = simd<int32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int8_t, scalar>, simd<uint32_t, scalar>, N, Idof> {
            using Vec = simd<int8_t, scalar>;
            using IndicesType = simd<uint32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int8_t, scalar>, simd<int64_t, scalar>, N, Idof> {
            using Vec = simd<int8_t, scalar>;
            using IndicesType = simd<int64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int8_t, scalar>, simd<uint64_t, scalar>, N, Idof> {
            using Vec = simd<int8_t, scalar>;
            using IndicesType = simd<uint64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int16_t, scalar>, simd<int8_t, scalar>, N, Idof> {
            using Vec = simd<int16_t, scalar>;
            using IndicesType = simd<int8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int16_t, scalar>, simd<uint8_t, scalar>, N, Idof> {
            using Vec = simd<int16_t, scalar>;
            using IndicesType = simd<uint8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int16_t, scalar>, simd<int16_t, scalar>, N, Idof> {
            using Vec = simd<int16_t, scalar>;
            using IndicesType = simd<int16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int16_t, scalar>, simd<uint16_t, scalar>, N, Idof> {
            using Vec = simd<int16_t, scalar>;
            using IndicesType = simd<uint16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int16_t, scalar>, simd<int32_t, scalar>, N, Idof> {
            using Vec = simd<int16_t, scalar>;
            using IndicesType = simd<int32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int16_t, scalar>, simd<uint32_t, scalar>, N, Idof> {
            using Vec = simd<int16_t, scalar>;
            using IndicesType = simd<uint32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int16_t, scalar>, simd<int64_t, scalar>, N, Idof> {
            using Vec = simd<int16_t, scalar>;
            using IndicesType = simd<int64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int16_t, scalar>, simd<uint64_t, scalar>, N, Idof> {
            using Vec = simd<int16_t, scalar>;
            using IndicesType = simd<uint64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int32_t, scalar>, simd<int8_t, scalar>, N, Idof> {
            using Vec = simd<int32_t, scalar>;
            using IndicesType = simd<int8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int32_t, scalar>, simd<uint8_t, scalar>, N, Idof> {
            using Vec = simd<int32_t, scalar>;
            using IndicesType = simd<uint8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int32_t, scalar>, simd<int16_t, scalar>, N, Idof> {
            using Vec = simd<int32_t, scalar>;
            using IndicesType = simd<int16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int32_t, scalar>, simd<uint16_t, scalar>, N, Idof> {
            using Vec = simd<int32_t, scalar>;
            using IndicesType = simd<uint16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int32_t, scalar>, simd<int32_t, scalar>, N, Idof> {
            using Vec = simd<int32_t, scalar>;
            using IndicesType = simd<int32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int32_t, scalar>, simd<uint32_t, scalar>, N, Idof> {
            using Vec = simd<int32_t, scalar>;
            using IndicesType = simd<uint32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int32_t, scalar>, simd<int64_t, scalar>, N, Idof> {
            using Vec = simd<int32_t, scalar>;
            using IndicesType = simd<int64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int32_t, scalar>, simd<uint64_t, scalar>, N, Idof> {
            using Vec = simd<int32_t, scalar>;
            using IndicesType = simd<uint64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int64_t, scalar>, simd<int8_t, scalar>, N, Idof> {
            using Vec = simd<int64_t, scalar>;
            using IndicesType = simd<int8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int64_t, scalar>, simd<uint8_t, scalar>, N, Idof> {
            using Vec = simd<int64_t, scalar>;
            using IndicesType = simd<uint8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int64_t, scalar>, simd<int16_t, scalar>, N, Idof> {
            using Vec = simd<int64_t, scalar>;
            using IndicesType = simd<int16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int64_t, scalar>, simd<uint16_t, scalar>, N, Idof> {
            using Vec = simd<int64_t, scalar>;
            using IndicesType = simd<uint16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int64_t, scalar>, simd<int32_t, scalar>, N, Idof> {
            using Vec = simd<int64_t, scalar>;
            using IndicesType = simd<int32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int64_t, scalar>, simd<uint32_t, scalar>, N, Idof> {
            using Vec = simd<int64_t, scalar>;
            using IndicesType = simd<uint32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int64_t, scalar>, simd<int64_t, scalar>, N, Idof> {
            using Vec = simd<int64_t, scalar>;
            using IndicesType = simd<int64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<int64_t, scalar>, simd<uint64_t, scalar>, N, Idof> {
            using Vec = simd<int64_t, scalar>;
            using IndicesType = simd<uint64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<float, scalar>, simd<int8_t, scalar>, N, Idof> {
            using Vec = simd<float, scalar>;
            using IndicesType = simd<int8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<float, scalar>, simd<uint8_t, scalar>, N, Idof> {
            using Vec = simd<float, scalar>;
            using IndicesType = simd<uint8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<float, scalar>, simd<int16_t, scalar>, N, Idof> {
            using Vec = simd<float, scalar>;
            using IndicesType = simd<int16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<float, scalar>, simd<uint16_t, scalar>, N, Idof> {
            using Vec = simd<float, scalar>;
            using IndicesType = simd<uint16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<float, scalar>, simd<int32_t, scalar>, N, Idof> {
            using Vec = simd<float, scalar>;
            using IndicesType = simd<int32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<float, scalar>, simd<uint32_t, scalar>, N, Idof> {
            using Vec = simd<float, scalar>;
            using IndicesType = simd<uint32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<float, scalar>, simd<int64_t, scalar>, N, Idof> {
            using Vec = simd<float, scalar>;
            using IndicesType = simd<int64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<float, scalar>, simd<uint64_t, scalar>, N, Idof> {
            using Vec = simd<float, scalar>;
            using IndicesType = simd<uint64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<double, scalar>, simd<int8_t, scalar>, N, Idof> {
            using Vec = simd<double, scalar>;
            using IndicesType = simd<int8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<double, scalar>, simd<uint8_t, scalar>, N, Idof> {
            using Vec = simd<double, scalar>;
            using IndicesType = simd<uint8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<double, scalar>, simd<int16_t, scalar>, N, Idof> {
            using Vec = simd<double, scalar>;
            using IndicesType = simd<int16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<double, scalar>, simd<uint16_t, scalar>, N, Idof> {
            using Vec = simd<double, scalar>;
            using IndicesType = simd<uint16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<double, scalar>, simd<int32_t, scalar>, N, Idof> {
            using Vec = simd<double, scalar>;
            using IndicesType = simd<int32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<double, scalar>, simd<uint32_t, scalar>, N, Idof> {
            using Vec = simd<double, scalar>;
            using IndicesType = simd<uint32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<double, scalar>, simd<int64_t, scalar>, N, Idof> {
            using Vec = simd<double, scalar>;
            using IndicesType = simd<int64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1026
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct gather<simd<double, scalar>, simd<uint64_t, scalar>, N, Idof> {
            using Vec = simd<double, scalar>;
            using IndicesType = simd<uint64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const void*, const typename IndicesType::register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return *reinterpret_cast<typename Vec::base_type const *>(reinterpret_cast<const char*>(memory) + index * N);
            }
        };
    } // end of namespace functors for template specialization of gather for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1180
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<uint8_t, scalar>, simd<uint8_t, scalar>, N, Idof> {
            using Vec = simd<uint8_t, scalar>;
            using IndicesType = simd<uint8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return (mask&1)==1 ? reinterpret_cast<typename Vec::base_type const *>(memory)[index] : source;
            }
        };
    } // end of namespace functors for template specialization of mask_gather for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1180
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<uint16_t, scalar>, simd<uint16_t, scalar>, N, Idof> {
            using Vec = simd<uint16_t, scalar>;
            using IndicesType = simd<uint16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return (mask&1)==1 ? reinterpret_cast<typename Vec::base_type const *>(memory)[index] : source;
            }
        };
    } // end of namespace functors for template specialization of mask_gather for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1180
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<uint32_t, scalar>, simd<uint32_t, scalar>, N, Idof> {
            using Vec = simd<uint32_t, scalar>;
            using IndicesType = simd<uint32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return (mask&1)==1 ? reinterpret_cast<typename Vec::base_type const *>(memory)[index] : source;
            }
        };
    } // end of namespace functors for template specialization of mask_gather for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1180
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<uint64_t, scalar>, simd<uint64_t, scalar>, N, Idof> {
            using Vec = simd<uint64_t, scalar>;
            using IndicesType = simd<uint64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return (mask&1)==1 ? reinterpret_cast<typename Vec::base_type const *>(memory)[index] : source;
            }
        };
    } // end of namespace functors for template specialization of mask_gather for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1180
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<int8_t, scalar>, simd<int8_t, scalar>, N, Idof> {
            using Vec = simd<int8_t, scalar>;
            using IndicesType = simd<int8_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return (mask&1)==1 ? reinterpret_cast<typename Vec::base_type const *>(memory)[index] : source;
            }
        };
    } // end of namespace functors for template specialization of mask_gather for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1180
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<int16_t, scalar>, simd<int16_t, scalar>, N, Idof> {
            using Vec = simd<int16_t, scalar>;
            using IndicesType = simd<int16_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return (mask&1)==1 ? reinterpret_cast<typename Vec::base_type const *>(memory)[index] : source;
            }
        };
    } // end of namespace functors for template specialization of mask_gather for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1180
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<int32_t, scalar>, simd<int32_t, scalar>, N, Idof> {
            using Vec = simd<int32_t, scalar>;
            using IndicesType = simd<int32_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return (mask&1)==1 ? reinterpret_cast<typename Vec::base_type const *>(memory)[index] : source;
            }
        };
    } // end of namespace functors for template specialization of mask_gather for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1180
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<int64_t, scalar>, simd<int64_t, scalar>, N, Idof> {
            using Vec = simd<int64_t, scalar>;
            using IndicesType = simd<int64_t, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return (mask&1)==1 ? reinterpret_cast<typename Vec::base_type const *>(memory)[index] : source;
            }
        };
    } // end of namespace functors for template specialization of mask_gather for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1180
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<float, scalar>, simd<float, scalar>, N, Idof> {
            using Vec = simd<float, scalar>;
            using IndicesType = simd<float, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return (mask&1)==1 ? reinterpret_cast<typename Vec::base_type const *>(memory)[index] : source;
            }
        };
    } // end of namespace functors for template specialization of mask_gather for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_gather" (primitive gather).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1180
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather<simd<double, scalar>, simd<double, scalar>, N, Idof> {
            using Vec = simd<double, scalar>;
            using IndicesType = simd<double, scalar>;
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, const void*, const typename IndicesType::offset_base_register_type, std::integral_constant<int, N>>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                return (mask&1)==1 ? reinterpret_cast<typename Vec::base_type const *>(memory)[index] : source;
            }
        };
    } // end of namespace functors for template specialization of mask_gather for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1293
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<uint8_t, scalar>, N, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if constexpr(N==sizeof(typename Vec::base_type)) {
                  auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                  mem[index] = data;
                } else {
                  if constexpr(N==1) {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                  } else {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1293
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<uint16_t, scalar>, N, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if constexpr(N==sizeof(typename Vec::base_type)) {
                  auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                  mem[index] = data;
                } else {
                  if constexpr(N==1) {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                  } else {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1293
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<uint32_t, scalar>, N, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if constexpr(N==sizeof(typename Vec::base_type)) {
                  auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                  mem[index] = data;
                } else {
                  if constexpr(N==1) {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                  } else {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1293
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<uint64_t, scalar>, N, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if constexpr(N==sizeof(typename Vec::base_type)) {
                  auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                  mem[index] = data;
                } else {
                  if constexpr(N==1) {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                  } else {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1293
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<int8_t, scalar>, N, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if constexpr(N==sizeof(typename Vec::base_type)) {
                  auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                  mem[index] = data;
                } else {
                  if constexpr(N==1) {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                  } else {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1293
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<int16_t, scalar>, N, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if constexpr(N==sizeof(typename Vec::base_type)) {
                  auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                  mem[index] = data;
                } else {
                  if constexpr(N==1) {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                  } else {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1293
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<int32_t, scalar>, N, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if constexpr(N==sizeof(typename Vec::base_type)) {
                  auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                  mem[index] = data;
                } else {
                  if constexpr(N==1) {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                  } else {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1293
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<int64_t, scalar>, N, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if constexpr(N==sizeof(typename Vec::base_type)) {
                  auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                  mem[index] = data;
                } else {
                  if constexpr(N==1) {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                  } else {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1293
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<float, scalar>, N, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if constexpr(N==sizeof(typename Vec::base_type)) {
                  auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                  mem[index] = data;
                } else {
                  if constexpr(N==1) {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                  } else {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1293
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct scatter<simd<double, scalar>, N, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if constexpr(N==sizeof(typename Vec::base_type)) {
                  auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                  mem[index] = data;
                } else {
                  if constexpr(N==1) {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                  } else {
                    *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of scatter for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1430
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<uint8_t, scalar>, N, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if((mask&0b1) != 0) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[index] = data;
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1430
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<uint16_t, scalar>, N, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if((mask&0b1) != 0) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[index] = data;
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1430
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<uint32_t, scalar>, N, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if((mask&0b1) != 0) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[index] = data;
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1430
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<uint64_t, scalar>, N, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if((mask&0b1) != 0) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[index] = data;
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1430
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<int8_t, scalar>, N, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if((mask&0b1) != 0) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[index] = data;
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1430
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<int16_t, scalar>, N, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if((mask&0b1) != 0) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[index] = data;
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1430
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<int32_t, scalar>, N, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if((mask&0b1) != 0) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[index] = data;
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1430
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<int64_t, scalar>, N, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if((mask&0b1) != 0) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[index] = data;
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1430
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<float, scalar>, N, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if((mask&0b1) != 0) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[index] = data;
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_scatter" (primitive scatter).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1430
         */
        template<int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter<simd<double, scalar>, N, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type, void*, const typename Vec::offset_base_register_type, std::integral_constant<int, N>>;
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
                const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
            ) {
                if((mask&0b1) != 0) {
                  if constexpr(N==sizeof(typename Vec::base_type)) {
                    auto mem = reinterpret_cast<typename Vec::base_type *>(memory);
                    mem[index] = data;
                  } else {
                    if constexpr(N==1) {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[index]) = data;
                    } else {
                      *reinterpret_cast<typename Vec::base_type*>(&reinterpret_cast<uint8_t*>(memory)[(index<<(cilog2(N)))]) = data;
                    }
                  }
                }
            }
        };
    } // end of namespace functors for template specialization of mask_scatter for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1614
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct compress_store<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, typename Vec::base_type*, const typename Vec::register_type>;
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
                const typename Vec::imask_type mask, typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                if(mask){
                  *memory = data;
                }
            }
        };
    } // end of namespace functors for template specialization of compress_store for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1614
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct compress_store<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, typename Vec::base_type*, const typename Vec::register_type>;
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
                const typename Vec::imask_type mask, typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                if(mask){
                  *memory = data;
                }
            }
        };
    } // end of namespace functors for template specialization of compress_store for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1614
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct compress_store<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, typename Vec::base_type*, const typename Vec::register_type>;
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
                const typename Vec::imask_type mask, typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                if(mask){
                  *memory = data;
                }
            }
        };
    } // end of namespace functors for template specialization of compress_store for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1614
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct compress_store<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, typename Vec::base_type*, const typename Vec::register_type>;
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
                const typename Vec::imask_type mask, typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                if(mask){
                  *memory = data;
                }
            }
        };
    } // end of namespace functors for template specialization of compress_store for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1614
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct compress_store<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, typename Vec::base_type*, const typename Vec::register_type>;
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
                const typename Vec::imask_type mask, typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                if(mask){
                  *memory = data;
                }
            }
        };
    } // end of namespace functors for template specialization of compress_store for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1614
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct compress_store<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, typename Vec::base_type*, const typename Vec::register_type>;
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
                const typename Vec::imask_type mask, typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                if(mask){
                  *memory = data;
                }
            }
        };
    } // end of namespace functors for template specialization of compress_store for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1614
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct compress_store<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, typename Vec::base_type*, const typename Vec::register_type>;
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
                const typename Vec::imask_type mask, typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                if(mask){
                  *memory = data;
                }
            }
        };
    } // end of namespace functors for template specialization of compress_store for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1614
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct compress_store<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, typename Vec::base_type*, const typename Vec::register_type>;
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
                const typename Vec::imask_type mask, typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                if(mask){
                  *memory = data;
                }
            }
        };
    } // end of namespace functors for template specialization of compress_store for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1614
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct compress_store<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, typename Vec::base_type*, const typename Vec::register_type>;
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
                const typename Vec::imask_type mask, typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                if(mask){
                  *memory = data;
                }
            }
        };
    } // end of namespace functors for template specialization of compress_store for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "compress_store" (primitive compress_store).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1614
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct compress_store<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, typename Vec::base_type*, const typename Vec::register_type>;
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
                const typename Vec::imask_type mask, typename Vec::base_type* memory, const typename Vec::register_type data
            ) {
                if(mask){
                  *memory = data;
                }
            }
        };
    } // end of namespace functors for template specialization of compress_store for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "masked_set1" (primitive masked_set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1923
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct masked_set1<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::base_type value
            ) {
                return (mask & 1) ? value : src;
            }
        };
    } // end of namespace functors for template specialization of masked_set1 for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "masked_set1" (primitive masked_set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1923
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct masked_set1<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::base_type value
            ) {
                return (mask & 1) ? value : src;
            }
        };
    } // end of namespace functors for template specialization of masked_set1 for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "masked_set1" (primitive masked_set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1923
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct masked_set1<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::base_type value
            ) {
                return (mask & 1) ? value : src;
            }
        };
    } // end of namespace functors for template specialization of masked_set1 for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "masked_set1" (primitive masked_set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1923
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct masked_set1<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::base_type value
            ) {
                return (mask & 1) ? value : src;
            }
        };
    } // end of namespace functors for template specialization of masked_set1 for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "masked_set1" (primitive masked_set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1923
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct masked_set1<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::base_type value
            ) {
                return (mask & 1) ? value : src;
            }
        };
    } // end of namespace functors for template specialization of masked_set1 for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "masked_set1" (primitive masked_set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1923
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct masked_set1<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::base_type value
            ) {
                return (mask & 1) ? value : src;
            }
        };
    } // end of namespace functors for template specialization of masked_set1 for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "masked_set1" (primitive masked_set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1923
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct masked_set1<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::base_type value
            ) {
                return (mask & 1) ? value : src;
            }
        };
    } // end of namespace functors for template specialization of masked_set1 for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "masked_set1" (primitive masked_set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1923
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct masked_set1<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::base_type value
            ) {
                return (mask & 1) ? value : src;
            }
        };
    } // end of namespace functors for template specialization of masked_set1 for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "masked_set1" (primitive masked_set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1923
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct masked_set1<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::base_type value
            ) {
                return (mask & 1) ? value : src;
            }
        };
    } // end of namespace functors for template specialization of masked_set1 for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "masked_set1" (primitive masked_set1).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::1923
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct masked_set1<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::imask_type, const typename Vec::base_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::base_type value
            ) {
                return (mask & 1) ? value : src;
            }
        };
    } // end of namespace functors for template specialization of masked_set1 for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::2061
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<uint8_t, scalar>, Index, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                return data;
            }
        };
    } // end of namespace functors for template specialization of extract_value for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::2061
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<uint16_t, scalar>, Index, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                return data;
            }
        };
    } // end of namespace functors for template specialization of extract_value for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::2061
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<uint32_t, scalar>, Index, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                return data;
            }
        };
    } // end of namespace functors for template specialization of extract_value for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::2061
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<uint64_t, scalar>, Index, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                return data;
            }
        };
    } // end of namespace functors for template specialization of extract_value for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::2061
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<int8_t, scalar>, Index, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                return data;
            }
        };
    } // end of namespace functors for template specialization of extract_value for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::2061
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<int16_t, scalar>, Index, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                return data;
            }
        };
    } // end of namespace functors for template specialization of extract_value for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::2061
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<int32_t, scalar>, Index, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                return data;
            }
        };
    } // end of namespace functors for template specialization of extract_value for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::2061
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<int64_t, scalar>, Index, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                return data;
            }
        };
    } // end of namespace functors for template specialization of extract_value for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::2061
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<float, scalar>, Index, Idof> {
            using Vec = simd<float, scalar>;
            
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
                return data;
            }
        };
    } // end of namespace functors for template specialization of extract_value for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/ls.yaml::2061
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<double, scalar>, Index, Idof> {
            using Vec = simd<double, scalar>;
            
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
                return data;
            }
        };
    } // end of namespace functors for template specialization of extract_value for scalar using double.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_LS_LS_SCALAR_HPP