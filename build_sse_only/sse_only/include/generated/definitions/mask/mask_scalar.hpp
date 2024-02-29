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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/sse_only/include/generated/definitions/mask/mask_scalar.hpp
 * \date 2024-02-29
 * \brief Mask related primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : d17f8eb (d17f8eb76bb8c5acffdd50fd389e77f1972f0fa7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_SCALAR_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_SCALAR_HPP

#include "../../declarations/mask.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::mask_type vec_mask
            ) {
                return (vec_mask)? 1 : 0;
            }
        };
    } // end of namespace functors for template specialization of to_integral for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::mask_type vec_mask
            ) {
                return (vec_mask)? 1 : 0;
            }
        };
    } // end of namespace functors for template specialization of to_integral for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::mask_type vec_mask
            ) {
                return (vec_mask)? 1 : 0;
            }
        };
    } // end of namespace functors for template specialization of to_integral for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::mask_type vec_mask
            ) {
                return (vec_mask)? 1 : 0;
            }
        };
    } // end of namespace functors for template specialization of to_integral for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::mask_type vec_mask
            ) {
                return (vec_mask)? 1 : 0;
            }
        };
    } // end of namespace functors for template specialization of to_integral for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::mask_type vec_mask
            ) {
                return (vec_mask)? 1 : 0;
            }
        };
    } // end of namespace functors for template specialization of to_integral for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::mask_type vec_mask
            ) {
                return (vec_mask)? 1 : 0;
            }
        };
    } // end of namespace functors for template specialization of to_integral for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::mask_type vec_mask
            ) {
                return (vec_mask)? 1 : 0;
            }
        };
    } // end of namespace functors for template specialization of to_integral for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::mask_type vec_mask
            ) {
                return (vec_mask)? 1 : 0;
            }
        };
    } // end of namespace functors for template specialization of to_integral for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::263
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::mask_type vec_mask
            ) {
                return (vec_mask)? 1 : 0;
            }
        };
    } // end of namespace functors for template specialization of to_integral for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::399
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_mask<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of to_mask for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::399
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_mask<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of to_mask for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::399
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_mask<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of to_mask for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::399
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_mask<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of to_mask for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::399
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_mask<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of to_mask for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::399
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_mask<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of to_mask for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::399
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_mask<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of to_mask for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::399
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_mask<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of to_mask for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::399
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_mask<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of to_mask for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_mask" (primitive to_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::399
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_mask<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::mask_type;
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
            static typename Vec::mask_type apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of to_mask for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::563
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_not<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
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
                const typename Vec::imask_type mask
            ) {
                return (~mask);
            }
        };
    } // end of namespace functors for template specialization of imask_binary_not for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::563
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_not<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
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
                const typename Vec::imask_type mask
            ) {
                return (~mask);
            }
        };
    } // end of namespace functors for template specialization of imask_binary_not for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::563
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_not<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
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
                const typename Vec::imask_type mask
            ) {
                return (~mask);
            }
        };
    } // end of namespace functors for template specialization of imask_binary_not for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::563
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_not<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
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
                const typename Vec::imask_type mask
            ) {
                return (~mask);
            }
        };
    } // end of namespace functors for template specialization of imask_binary_not for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::563
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_not<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
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
                const typename Vec::imask_type mask
            ) {
                return (~mask);
            }
        };
    } // end of namespace functors for template specialization of imask_binary_not for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::563
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_not<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
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
                const typename Vec::imask_type mask
            ) {
                return (~mask);
            }
        };
    } // end of namespace functors for template specialization of imask_binary_not for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::563
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_not<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
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
                const typename Vec::imask_type mask
            ) {
                return (~mask);
            }
        };
    } // end of namespace functors for template specialization of imask_binary_not for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::563
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_not<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
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
                const typename Vec::imask_type mask
            ) {
                return (~mask);
            }
        };
    } // end of namespace functors for template specialization of imask_binary_not for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::563
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_not<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
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
                const typename Vec::imask_type mask
            ) {
                return (~mask);
            }
        };
    } // end of namespace functors for template specialization of imask_binary_not for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_not" (primitive mask_binary_not).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::563
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_not<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
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
                const typename Vec::imask_type mask
            ) {
                return (~mask);
            }
        };
    } // end of namespace functors for template specialization of imask_binary_not for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::654
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::654
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::654
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::654
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::654
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::654
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::654
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::654
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::654
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::654
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::691
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
                return (first & second) & 0b1;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::691
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
                return (first & second) & 0b1;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::691
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
                return (first & second) & 0b1;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::691
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
                return (first & second) & 0b1;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::691
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
                return (first & second) & 0b1;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::691
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
                return (first & second) & 0b1;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::691
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
                return (first & second) & 0b1;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::691
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
                return (first & second) & 0b1;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::691
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
                return (first & second) & 0b1;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::691
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::imask_type, const typename Vec::imask_type>;
            static constexpr bool parameters_queryable() {
                return true;
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
                const typename Vec::imask_type first, const typename Vec::imask_type second
            ) {
                return (first & second) & 0b1;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1058
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = unsigned int;
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
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1058
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = unsigned int;
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
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1058
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = unsigned int;
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
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1058
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = unsigned int;
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
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1058
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = unsigned int;
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
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1058
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = unsigned int;
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
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1058
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = unsigned int;
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
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1058
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = unsigned int;
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
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1058
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = unsigned int;
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
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1058
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = unsigned int;
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
            static unsigned int apply(
                const typename Vec::imask_type mask
            ) {
                return (mask & 0b1);
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1098
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_true<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return true;
            }
        };
    } // end of namespace functors for template specialization of integral_all_true for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1098
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_true<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return true;
            }
        };
    } // end of namespace functors for template specialization of integral_all_true for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1098
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_true<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return true;
            }
        };
    } // end of namespace functors for template specialization of integral_all_true for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1098
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_true<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return true;
            }
        };
    } // end of namespace functors for template specialization of integral_all_true for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1098
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_true<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return true;
            }
        };
    } // end of namespace functors for template specialization of integral_all_true for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1098
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_true<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return true;
            }
        };
    } // end of namespace functors for template specialization of integral_all_true for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1098
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_true<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return true;
            }
        };
    } // end of namespace functors for template specialization of integral_all_true for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1098
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_true<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return true;
            }
        };
    } // end of namespace functors for template specialization of integral_all_true for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1098
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_true<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return true;
            }
        };
    } // end of namespace functors for template specialization of integral_all_true for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_true" (primitive integral_all_true).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1098
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_true<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return true;
            }
        };
    } // end of namespace functors for template specialization of integral_all_true for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_false" (primitive integral_all_false).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_false<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return false;
            }
        };
    } // end of namespace functors for template specialization of integral_all_false for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_false" (primitive integral_all_false).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_false<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return false;
            }
        };
    } // end of namespace functors for template specialization of integral_all_false for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_false" (primitive integral_all_false).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_false<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return false;
            }
        };
    } // end of namespace functors for template specialization of integral_all_false for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_false" (primitive integral_all_false).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_false<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return false;
            }
        };
    } // end of namespace functors for template specialization of integral_all_false for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_false" (primitive integral_all_false).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_false<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return false;
            }
        };
    } // end of namespace functors for template specialization of integral_all_false for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_false" (primitive integral_all_false).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_false<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return false;
            }
        };
    } // end of namespace functors for template specialization of integral_all_false for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_false" (primitive integral_all_false).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_false<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return false;
            }
        };
    } // end of namespace functors for template specialization of integral_all_false for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_false" (primitive integral_all_false).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_false<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return false;
            }
        };
    } // end of namespace functors for template specialization of integral_all_false for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_false" (primitive integral_all_false).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_false<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return false;
            }
        };
    } // end of namespace functors for template specialization of integral_all_false for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "integral_all_false" (primitive integral_all_false).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1125
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct integral_all_false<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::imask_type;
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
            static typename Vec::imask_type apply(
                
            ) {
                return false;
            }
        };
    } // end of namespace functors for template specialization of integral_all_false for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1154
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_mask for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1154
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_mask for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1154
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_mask for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1154
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_mask for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1154
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_mask for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1154
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_mask for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1154
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_mask for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1154
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_mask for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1154
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_mask for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1154
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::mask_type apply(
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_mask for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1183
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_imask for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1183
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_imask for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1183
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_imask for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1183
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_imask for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1183
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_imask for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1183
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_imask for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1183
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_imask for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1183
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_imask for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1183
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_imask for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1183
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type const*>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type const* memory
            ) {
                return *memory;
            }
        };
    } // end of namespace functors for template specialization of load_imask for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static bool apply(
                typename Vec::imask_type mask, int position
            ) {
                return (mask & (1<< position));
            }
        };
    } // end of namespace functors for template specialization of test_imask for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static bool apply(
                typename Vec::imask_type mask, int position
            ) {
                return (mask & (1<< position));
            }
        };
    } // end of namespace functors for template specialization of test_imask for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static bool apply(
                typename Vec::imask_type mask, int position
            ) {
                return (mask & (1<< position));
            }
        };
    } // end of namespace functors for template specialization of test_imask for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static bool apply(
                typename Vec::imask_type mask, int position
            ) {
                return (mask & (1<< position));
            }
        };
    } // end of namespace functors for template specialization of test_imask for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static bool apply(
                typename Vec::imask_type mask, int position
            ) {
                return (mask & (1<< position));
            }
        };
    } // end of namespace functors for template specialization of test_imask for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static bool apply(
                typename Vec::imask_type mask, int position
            ) {
                return (mask & (1<< position));
            }
        };
    } // end of namespace functors for template specialization of test_imask for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static bool apply(
                typename Vec::imask_type mask, int position
            ) {
                return (mask & (1<< position));
            }
        };
    } // end of namespace functors for template specialization of test_imask for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static bool apply(
                typename Vec::imask_type mask, int position
            ) {
                return (mask & (1<< position));
            }
        };
    } // end of namespace functors for template specialization of test_imask for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static bool apply(
                typename Vec::imask_type mask, int position
            ) {
                return (mask & (1<< position));
            }
        };
    } // end of namespace functors for template specialization of test_imask for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = bool;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static bool apply(
                typename Vec::imask_type mask, int position
            ) {
                return (mask & (1<< position));
            }
        };
    } // end of namespace functors for template specialization of test_imask for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask_a, typename Vec::imask_type mask_b, int position
            ) {
                return mask_a | (mask_b << position);
            }
        };
    } // end of namespace functors for template specialization of insert_imask for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask_a, typename Vec::imask_type mask_b, int position
            ) {
                return mask_a | (mask_b << position);
            }
        };
    } // end of namespace functors for template specialization of insert_imask for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask_a, typename Vec::imask_type mask_b, int position
            ) {
                return mask_a | (mask_b << position);
            }
        };
    } // end of namespace functors for template specialization of insert_imask for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask_a, typename Vec::imask_type mask_b, int position
            ) {
                return mask_a | (mask_b << position);
            }
        };
    } // end of namespace functors for template specialization of insert_imask for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask_a, typename Vec::imask_type mask_b, int position
            ) {
                return mask_a | (mask_b << position);
            }
        };
    } // end of namespace functors for template specialization of insert_imask for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask_a, typename Vec::imask_type mask_b, int position
            ) {
                return mask_a | (mask_b << position);
            }
        };
    } // end of namespace functors for template specialization of insert_imask for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask_a, typename Vec::imask_type mask_b, int position
            ) {
                return mask_a | (mask_b << position);
            }
        };
    } // end of namespace functors for template specialization of insert_imask for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask_a, typename Vec::imask_type mask_b, int position
            ) {
                return mask_a | (mask_b << position);
            }
        };
    } // end of namespace functors for template specialization of insert_imask for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask_a, typename Vec::imask_type mask_b, int position
            ) {
                return mask_a | (mask_b << position);
            }
        };
    } // end of namespace functors for template specialization of insert_imask for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1274
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask_a, typename Vec::imask_type mask_b, int position
            ) {
                return mask_a | (mask_b << position);
            }
        };
    } // end of namespace functors for template specialization of insert_imask for scalar using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1306
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<uint8_t, scalar>, Idof> {
            using Vec = simd<uint8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask, int position
            ) {
                return (mask >> position) & ((1UL << Vec::vector_element_count()) - 1);
            }
        };
    } // end of namespace functors for template specialization of extract_imask for scalar using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1306
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<uint16_t, scalar>, Idof> {
            using Vec = simd<uint16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask, int position
            ) {
                return (mask >> position) & ((1UL << Vec::vector_element_count()) - 1);
            }
        };
    } // end of namespace functors for template specialization of extract_imask for scalar using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1306
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<uint32_t, scalar>, Idof> {
            using Vec = simd<uint32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask, int position
            ) {
                return (mask >> position) & ((1UL << Vec::vector_element_count()) - 1);
            }
        };
    } // end of namespace functors for template specialization of extract_imask for scalar using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: uint64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1306
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<uint64_t, scalar>, Idof> {
            using Vec = simd<uint64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask, int position
            ) {
                return (mask >> position) & ((1UL << Vec::vector_element_count()) - 1);
            }
        };
    } // end of namespace functors for template specialization of extract_imask for scalar using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int8_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1306
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<int8_t, scalar>, Idof> {
            using Vec = simd<int8_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask, int position
            ) {
                return (mask >> position) & ((1UL << Vec::vector_element_count()) - 1);
            }
        };
    } // end of namespace functors for template specialization of extract_imask for scalar using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int16_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1306
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<int16_t, scalar>, Idof> {
            using Vec = simd<int16_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask, int position
            ) {
                return (mask >> position) & ((1UL << Vec::vector_element_count()) - 1);
            }
        };
    } // end of namespace functors for template specialization of extract_imask for scalar using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int32_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1306
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<int32_t, scalar>, Idof> {
            using Vec = simd<int32_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask, int position
            ) {
                return (mask >> position) & ((1UL << Vec::vector_element_count()) - 1);
            }
        };
    } // end of namespace functors for template specialization of extract_imask for scalar using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: int64_t
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1306
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<int64_t, scalar>, Idof> {
            using Vec = simd<int64_t, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask, int position
            ) {
                return (mask >> position) & ((1UL << Vec::vector_element_count()) - 1);
            }
        };
    } // end of namespace functors for template specialization of extract_imask for scalar using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: float
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1306
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<float, scalar>, Idof> {
            using Vec = simd<float, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask, int position
            ) {
                return (mask >> position) & ((1UL << Vec::vector_element_count()) - 1);
            }
        };
    } // end of namespace functors for template specialization of extract_imask for scalar using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: scalar.
         *        Data Type: double
         *  Extension Flags: []
         *      Yaml Source: primitive_data/primitives/mask.yaml::1306
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<double, scalar>, Idof> {
            using Vec = simd<double, scalar>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<typename Vec::imask_type, int>;
            static constexpr bool parameters_queryable() {
                return true;
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
                typename Vec::imask_type mask, int position
            ) {
                return (mask >> position) & ((1UL << Vec::vector_element_count()) - 1);
            }
        };
    } // end of namespace functors for template specialization of extract_imask for scalar using double.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_SCALAR_HPP