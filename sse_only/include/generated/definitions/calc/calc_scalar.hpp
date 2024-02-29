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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/sse_only/include/generated/definitions/calc/calc_scalar.hpp
 * \date 2024-02-29
 * \brief This file contains arithmetic primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : d17f8eb (d17f8eb76bb8c5acffdd50fd389e77f1972f0fa7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_SCALAR_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_SCALAR_HPP

#include "../../declarations/calc.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                return vec_a + vec_b;
            }
        };
    } // end of namespace functors for template specialization of add for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                return vec_a + vec_b;
            }
        };
    } // end of namespace functors for template specialization of add for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                return vec_a + vec_b;
            }
        };
    } // end of namespace functors for template specialization of add for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                return vec_a + vec_b;
            }
        };
    } // end of namespace functors for template specialization of add for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                return vec_a + vec_b;
            }
        };
    } // end of namespace functors for template specialization of add for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                return vec_a + vec_b;
            }
        };
    } // end of namespace functors for template specialization of add for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                return vec_a + vec_b;
            }
        };
    } // end of namespace functors for template specialization of add for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                return vec_a + vec_b;
            }
        };
    } // end of namespace functors for template specialization of add for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                return vec_a + vec_b;
            }
        };
    } // end of namespace functors for template specialization of add for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                return vec_a + vec_b;
            }
        };
    } // end of namespace functors for template specialization of add for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                return vec_a - vec_b;
            }
        };
    } // end of namespace functors for template specialization of sub for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                return vec_a - vec_b;
            }
        };
    } // end of namespace functors for template specialization of sub for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                return vec_a - vec_b;
            }
        };
    } // end of namespace functors for template specialization of sub for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                return vec_a - vec_b;
            }
        };
    } // end of namespace functors for template specialization of sub for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                return vec_a - vec_b;
            }
        };
    } // end of namespace functors for template specialization of sub for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                return vec_a - vec_b;
            }
        };
    } // end of namespace functors for template specialization of sub for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                return vec_a - vec_b;
            }
        };
    } // end of namespace functors for template specialization of sub for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                return vec_a - vec_b;
            }
        };
    } // end of namespace functors for template specialization of sub for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                return vec_a - vec_b;
            }
        };
    } // end of namespace functors for template specialization of sub for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                return vec_a - vec_b;
            }
        };
    } // end of namespace functors for template specialization of sub for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::385
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<uint8_t, scalar>, Idof> {
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return (mask)? vec_a + vec_b : vec_a;
            }
        };
    } // end of namespace functors for template specialization of mask_add for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::385
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<int8_t, scalar>, Idof> {
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return (mask)? vec_a + vec_b : vec_a;
            }
        };
    } // end of namespace functors for template specialization of mask_add for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::385
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<uint16_t, scalar>, Idof> {
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return (mask)? vec_a + vec_b : vec_a;
            }
        };
    } // end of namespace functors for template specialization of mask_add for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::385
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<int16_t, scalar>, Idof> {
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return (mask)? vec_a + vec_b : vec_a;
            }
        };
    } // end of namespace functors for template specialization of mask_add for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::385
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<uint32_t, scalar>, Idof> {
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return (mask)? vec_a + vec_b : vec_a;
            }
        };
    } // end of namespace functors for template specialization of mask_add for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::385
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<int32_t, scalar>, Idof> {
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return (mask)? vec_a + vec_b : vec_a;
            }
        };
    } // end of namespace functors for template specialization of mask_add for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::385
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<uint64_t, scalar>, Idof> {
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return (mask)? vec_a + vec_b : vec_a;
            }
        };
    } // end of namespace functors for template specialization of mask_add for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::385
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<int64_t, scalar>, Idof> {
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return (mask)? vec_a + vec_b : vec_a;
            }
        };
    } // end of namespace functors for template specialization of mask_add for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::385
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<float, scalar>, Idof> {
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return (mask)? vec_a + vec_b : vec_a;
            }
        };
    } // end of namespace functors for template specialization of mask_add for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::385
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<double, scalar>, Idof> {
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
                const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
            ) {
                return (mask)? vec_a + vec_b : vec_a;
            }
        };
    } // end of namespace functors for template specialization of mask_add for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::644
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                return vec_a * vec_b;
            }
        };
    } // end of namespace functors for template specialization of mul for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::644
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                return vec_a * vec_b;
            }
        };
    } // end of namespace functors for template specialization of mul for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::644
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                return vec_a * vec_b;
            }
        };
    } // end of namespace functors for template specialization of mul for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::644
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                return vec_a * vec_b;
            }
        };
    } // end of namespace functors for template specialization of mul for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::644
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                return vec_a * vec_b;
            }
        };
    } // end of namespace functors for template specialization of mul for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::644
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                return vec_a * vec_b;
            }
        };
    } // end of namespace functors for template specialization of mul for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::644
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                return vec_a * vec_b;
            }
        };
    } // end of namespace functors for template specialization of mul for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::644
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                return vec_a * vec_b;
            }
        };
    } // end of namespace functors for template specialization of mul for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::644
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                return vec_a * vec_b;
            }
        };
    } // end of namespace functors for template specialization of mul for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::644
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                return vec_a * vec_b;
            }
        };
    } // end of namespace functors for template specialization of mul for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::782
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                return vec_a * mul_var;
            }
        };
    } // end of namespace functors for template specialization of mul_constant for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::782
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                return vec_a * mul_var;
            }
        };
    } // end of namespace functors for template specialization of mul_constant for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::782
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                return vec_a * mul_var;
            }
        };
    } // end of namespace functors for template specialization of mul_constant for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::782
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                return vec_a * mul_var;
            }
        };
    } // end of namespace functors for template specialization of mul_constant for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::782
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                return vec_a * mul_var;
            }
        };
    } // end of namespace functors for template specialization of mul_constant for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::782
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                return vec_a * mul_var;
            }
        };
    } // end of namespace functors for template specialization of mul_constant for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::782
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                return vec_a * mul_var;
            }
        };
    } // end of namespace functors for template specialization of mul_constant for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::782
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                return vec_a * mul_var;
            }
        };
    } // end of namespace functors for template specialization of mul_constant for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::782
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                return vec_a * mul_var;
            }
        };
    } // end of namespace functors for template specialization of mul_constant for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::782
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                return vec_a * mul_var;
            }
        };
    } // end of namespace functors for template specialization of mul_constant for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1007
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<uint8_t, scalar>, Idof> {
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
                const typename Vec::register_type value
            ) {
                return value;
            }
        };
    } // end of namespace functors for template specialization of hadd for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1007
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<uint16_t, scalar>, Idof> {
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
                const typename Vec::register_type value
            ) {
                return value;
            }
        };
    } // end of namespace functors for template specialization of hadd for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1007
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<uint32_t, scalar>, Idof> {
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
                const typename Vec::register_type value
            ) {
                return value;
            }
        };
    } // end of namespace functors for template specialization of hadd for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1007
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<uint64_t, scalar>, Idof> {
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
                const typename Vec::register_type value
            ) {
                return value;
            }
        };
    } // end of namespace functors for template specialization of hadd for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1007
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<int8_t, scalar>, Idof> {
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
                const typename Vec::register_type value
            ) {
                return value;
            }
        };
    } // end of namespace functors for template specialization of hadd for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1007
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<int16_t, scalar>, Idof> {
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
                const typename Vec::register_type value
            ) {
                return value;
            }
        };
    } // end of namespace functors for template specialization of hadd for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1007
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<int32_t, scalar>, Idof> {
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
                const typename Vec::register_type value
            ) {
                return value;
            }
        };
    } // end of namespace functors for template specialization of hadd for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1007
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<int64_t, scalar>, Idof> {
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
                const typename Vec::register_type value
            ) {
                return value;
            }
        };
    } // end of namespace functors for template specialization of hadd for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1007
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<float, scalar>, Idof> {
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
                const typename Vec::register_type value
            ) {
                return value;
            }
        };
    } // end of namespace functors for template specialization of hadd for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1007
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<double, scalar>, Idof> {
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
                const typename Vec::register_type value
            ) {
                return value;
            }
        };
    } // end of namespace functors for template specialization of hadd for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1152
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                return (vec_a < vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of min for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1152
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                return (vec_a < vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of min for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1152
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                return (vec_a < vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of min for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1152
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                return (vec_a < vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of min for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1152
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                return (vec_a < vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of min for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1152
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                return (vec_a < vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of min for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1152
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                return (vec_a < vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of min for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1152
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                return (vec_a < vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of min for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1152
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                return (vec_a < vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of min for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1152
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                return (vec_a < vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of min for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1360
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                return vec_a / vec_b;
            }
        };
    } // end of namespace functors for template specialization of div for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1360
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                return vec_a / vec_b;
            }
        };
    } // end of namespace functors for template specialization of div for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1360
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                return vec_a / vec_b;
            }
        };
    } // end of namespace functors for template specialization of div for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1360
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                return vec_a / vec_b;
            }
        };
    } // end of namespace functors for template specialization of div for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1360
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                return vec_a / vec_b;
            }
        };
    } // end of namespace functors for template specialization of div for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1360
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                return vec_a / vec_b;
            }
        };
    } // end of namespace functors for template specialization of div for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1360
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                return vec_a / vec_b;
            }
        };
    } // end of namespace functors for template specialization of div for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1360
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                return vec_a / vec_b;
            }
        };
    } // end of namespace functors for template specialization of div for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1360
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                return vec_a / vec_b;
            }
        };
    } // end of namespace functors for template specialization of div for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1360
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                return vec_a / vec_b;
            }
        };
    } // end of namespace functors for template specialization of div for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod" (primitive mod).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1531
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_mod
            ) {
                return vec_data % vec_mod;
            }
        };
    } // end of namespace functors for template specialization of mod for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod" (primitive mod).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1531
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_mod
            ) {
                return vec_data % vec_mod;
            }
        };
    } // end of namespace functors for template specialization of mod for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod" (primitive mod).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1531
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_mod
            ) {
                return vec_data % vec_mod;
            }
        };
    } // end of namespace functors for template specialization of mod for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod" (primitive mod).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1531
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_mod
            ) {
                return vec_data % vec_mod;
            }
        };
    } // end of namespace functors for template specialization of mod for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod" (primitive mod).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1531
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_mod
            ) {
                return vec_data % vec_mod;
            }
        };
    } // end of namespace functors for template specialization of mod for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod" (primitive mod).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1531
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_mod
            ) {
                return vec_data % vec_mod;
            }
        };
    } // end of namespace functors for template specialization of mod for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod" (primitive mod).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1531
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_mod
            ) {
                return vec_data % vec_mod;
            }
        };
    } // end of namespace functors for template specialization of mod for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod" (primitive mod).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1531
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                const typename Vec::register_type vec_data, const typename Vec::register_type vec_mod
            ) {
                return vec_data % vec_mod;
            }
        };
    } // end of namespace functors for template specialization of mod for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_constant" (primitive mod).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1763
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_constant<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                return vec % val;
            }
        };
    } // end of namespace functors for template specialization of mod_constant for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_constant" (primitive mod).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1763
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_constant<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                return vec % val;
            }
        };
    } // end of namespace functors for template specialization of mod_constant for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_constant" (primitive mod).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1763
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_constant<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                return vec % val;
            }
        };
    } // end of namespace functors for template specialization of mod_constant for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_constant" (primitive mod).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1763
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_constant<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                return vec % val;
            }
        };
    } // end of namespace functors for template specialization of mod_constant for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_constant" (primitive mod).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1763
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_constant<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                return vec % val;
            }
        };
    } // end of namespace functors for template specialization of mod_constant for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_constant" (primitive mod).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1763
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_constant<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                return vec % val;
            }
        };
    } // end of namespace functors for template specialization of mod_constant for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_constant" (primitive mod).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1763
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_constant<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                return vec % val;
            }
        };
    } // end of namespace functors for template specialization of mod_constant for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_constant" (primitive mod).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::1763
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_constant<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                return vec % val;
            }
        };
    } // end of namespace functors for template specialization of mod_constant for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_safe" (primitive mod_safe).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2038
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_safe<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                return vec % val;
            }
        };
    } // end of namespace functors for template specialization of mod_safe for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_safe" (primitive mod_safe).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2038
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_safe<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                return vec % val;
            }
        };
    } // end of namespace functors for template specialization of mod_safe for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_safe" (primitive mod_safe).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2038
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_safe<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                return vec % val;
            }
        };
    } // end of namespace functors for template specialization of mod_safe for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_safe" (primitive mod_safe).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2038
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_safe<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                return vec % val;
            }
        };
    } // end of namespace functors for template specialization of mod_safe for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_safe" (primitive mod_safe).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2038
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_safe<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                return vec % val;
            }
        };
    } // end of namespace functors for template specialization of mod_safe for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_safe" (primitive mod_safe).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2038
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_safe<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                return vec % val;
            }
        };
    } // end of namespace functors for template specialization of mod_safe for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_safe" (primitive mod_safe).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2038
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_safe<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                return vec % val;
            }
        };
    } // end of namespace functors for template specialization of mod_safe for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mod_safe" (primitive mod_safe).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2038
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mod_safe<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                const typename Vec::register_type vec, const typename Vec::base_type val
            ) {
                return vec % val;
            }
        };
    } // end of namespace functors for template specialization of mod_safe for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<uint8_t, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmax for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<int8_t, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmax for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<uint16_t, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmax for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<int16_t, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmax for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<uint32_t, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmax for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<int32_t, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmax for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<float, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmax for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<uint64_t, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmax for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<int64_t, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmax for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<double, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmax for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2373
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<uint8_t, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmin for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2373
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<int8_t, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmin for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2373
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<uint16_t, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmin for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2373
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<int16_t, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmin for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2373
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<uint32_t, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmin for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2373
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<int32_t, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmin for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2373
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<float, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmin for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2373
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<uint64_t, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmin for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2373
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<int64_t, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmin for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2373
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<double, scalar>, Idof> {
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
    } // end of namespace functors for template specialization of hmin for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2511
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                return (vec_a > vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of max for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2511
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                return (vec_a > vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of max for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2511
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                return (vec_a > vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of max for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2511
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                return (vec_a > vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of max for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2511
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                return (vec_a > vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of max for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2511
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                return (vec_a > vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of max for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2511
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                return (vec_a > vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of max for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2511
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                return (vec_a > vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of max for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2511
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                return (vec_a > vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of max for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/calc.yaml::2511
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                return (vec_a > vec_b) ? vec_a : vec_b;
            }
        };
    } // end of namespace functors for template specialization of max for scalar using double.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_SCALAR_HPP