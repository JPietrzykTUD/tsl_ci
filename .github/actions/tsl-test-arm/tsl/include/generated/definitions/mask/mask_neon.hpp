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
 * \file /github/workspace/ci/generation/neon/include/generated/definitions/mask/mask_neon.hpp
 * \date 2024-03-08
 * \brief Mask related primitives.
 * \note
 * Git-Local Url : /github/workspace
 * Git-Remote Url: unknown url
 * Git-Branch    : unknown branch
 * Git-Commit    : unknown commit (unknown commit)
 *
 */
#ifndef TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_NEON_HPP
#define TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_NEON_HPP

#include "../../declarations/mask.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::200
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive to_integral is not supported by your hardware natively while it is forced by using native" );

                return ( ( vec_mask[ 1 ] >> 62 ) & 0b10 ) | ( vec_mask[ 0 ] >> 63 );
            }
        };
    } // end of namespace functors for template specialization of to_integral for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::200
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive to_integral is not supported by your hardware natively while it is forced by using native" );

                return ( ( vec_mask[ 1 ] >> 62 ) & 0b10 ) | ( vec_mask[ 0 ] >> 63 );
            }
        };
    } // end of namespace functors for template specialization of to_integral for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::200
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive to_integral is not supported by your hardware natively while it is forced by using native" );

                return ( ( vec_mask[ 1 ] >> 62 ) & 0b10 ) | ( vec_mask[ 0 ] >> 63 );
            }
        };
    } // end of namespace functors for template specialization of to_integral for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive to_integral is not supported by your hardware natively while it is forced by using native" );

                auto mask_values_array = tsl::to_array<typename Vec::transform_extension<typename Vec::offset_base_type>>(vec_mask);
                typename Vec::imask_type mask_integral = 0;
                for (size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  mask_integral |= (mask_values_array[i] & 0b1) << i;
                }
                return mask_integral;
            }
        };
    } // end of namespace functors for template specialization of to_integral for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive to_integral is not supported by your hardware natively while it is forced by using native" );

                auto mask_values_array = tsl::to_array<typename Vec::transform_extension<typename Vec::offset_base_type>>(vec_mask);
                typename Vec::imask_type mask_integral = 0;
                for (size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  mask_integral |= (mask_values_array[i] & 0b1) << i;
                }
                return mask_integral;
            }
        };
    } // end of namespace functors for template specialization of to_integral for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive to_integral is not supported by your hardware natively while it is forced by using native" );

                auto mask_values_array = tsl::to_array<typename Vec::transform_extension<typename Vec::offset_base_type>>(vec_mask);
                typename Vec::imask_type mask_integral = 0;
                for (size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  mask_integral |= (mask_values_array[i] & 0b1) << i;
                }
                return mask_integral;
            }
        };
    } // end of namespace functors for template specialization of to_integral for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive to_integral is not supported by your hardware natively while it is forced by using native" );

                auto mask_values_array = tsl::to_array<typename Vec::transform_extension<typename Vec::offset_base_type>>(vec_mask);
                typename Vec::imask_type mask_integral = 0;
                for (size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  mask_integral |= (mask_values_array[i] & 0b1) << i;
                }
                return mask_integral;
            }
        };
    } // end of namespace functors for template specialization of to_integral for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive to_integral is not supported by your hardware natively while it is forced by using native" );

                auto mask_values_array = tsl::to_array<typename Vec::transform_extension<typename Vec::offset_base_type>>(vec_mask);
                typename Vec::imask_type mask_integral = 0;
                for (size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  mask_integral |= (mask_values_array[i] & 0b1) << i;
                }
                return mask_integral;
            }
        };
    } // end of namespace functors for template specialization of to_integral for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive to_integral is not supported by your hardware natively while it is forced by using native" );

                auto mask_values_array = tsl::to_array<typename Vec::transform_extension<typename Vec::offset_base_type>>(vec_mask);
                typename Vec::imask_type mask_integral = 0;
                for (size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  mask_integral |= (mask_values_array[i] & 0b1) << i;
                }
                return mask_integral;
            }
        };
    } // end of namespace functors for template specialization of to_integral for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::205
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
            using return_type = typename Vec::imask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type>;
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
            static typename Vec::imask_type apply(
                const typename Vec::mask_type vec_mask
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive to_integral is not supported by your hardware natively while it is forced by using native" );

                auto mask_values_array = tsl::to_array<typename Vec::transform_extension<typename Vec::offset_base_type>>(vec_mask);
                typename Vec::imask_type mask_integral = 0;
                for (size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  mask_integral |= (mask_values_array[i] & 0b1) << i;
                }
                return mask_integral;
            }
        };
    } // end of namespace functors for template specialization of to_integral for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::325
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_vector<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
            using return_type = typename Vec::register_type;
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
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask
            ) {
                return vreinterpretq_s64_u64( mask ); //mask is a vector already.
            }
        };
    } // end of namespace functors for template specialization of to_vector for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::620
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
                return vandq_u8(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::620
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
                return vandq_u16(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::620
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
                return vandq_u32(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::620
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
                return vandq_u64(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::620
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
                return vandq_s8(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::620
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
                return vandq_s16(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::620
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
                return vandq_s32(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::620
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
                return vandq_s64(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::620
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
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
                return vandq_u32(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::620
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
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
                return vandq_u64(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::657
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::657
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::657
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::657
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::657
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::657
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::657
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::657
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::657
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
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
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::657
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
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
                return first & second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_and for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::726
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
                return vorrq_u8(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::726
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
                return vorrq_u16(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::726
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
                return vorrq_u32(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::726
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
                return vorrq_u64(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::726
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
                return vorrq_s8(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::726
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
                return vorrq_s16(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::726
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
                return vorrq_s32(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::726
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
                return vorrq_s64(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::726
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
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
                return vorrq_u32(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::726
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
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
                return vorrq_u64(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::758
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_or<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
                return first | second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_or for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::758
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_or<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
                return first | second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_or for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::758
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_or<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
                return first | second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_or for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::758
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_or<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
                return first | second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_or for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::758
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_or<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
                return first | second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_or for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::758
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_or<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
                return first | second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_or for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::758
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_or<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
                return first | second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_or for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::758
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_or<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
                return first | second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_or for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::758
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_or<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
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
                return first | second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_or for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::758
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_or<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
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
                return first | second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_or for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::822
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
                return veorq_u8(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::822
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
                return veorq_u16(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::822
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
                return veorq_u32(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::822
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
                return veorq_u64(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::822
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
                return veorq_s8(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::822
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
                return veorq_s16(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::822
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
                return veorq_s32(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::822
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
                return veorq_s64(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::822
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
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
                return veorq_u32(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::822
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
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
                return veorq_u64(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for neon using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::854
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_xor<simd<uint8_t, neon>, Idof> {
            using Vec = simd<uint8_t, neon>;
            
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
                return first ^ second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_xor for neon using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::854
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_xor<simd<uint16_t, neon>, Idof> {
            using Vec = simd<uint16_t, neon>;
            
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
                return first ^ second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_xor for neon using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::854
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_xor<simd<uint32_t, neon>, Idof> {
            using Vec = simd<uint32_t, neon>;
            
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
                return first ^ second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_xor for neon using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: uint64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::854
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_xor<simd<uint64_t, neon>, Idof> {
            using Vec = simd<uint64_t, neon>;
            
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
                return first ^ second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_xor for neon using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: int8_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::854
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_xor<simd<int8_t, neon>, Idof> {
            using Vec = simd<int8_t, neon>;
            
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
                return first ^ second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_xor for neon using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: int16_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::854
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_xor<simd<int16_t, neon>, Idof> {
            using Vec = simd<int16_t, neon>;
            
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
                return first ^ second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_xor for neon using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: int32_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::854
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_xor<simd<int32_t, neon>, Idof> {
            using Vec = simd<int32_t, neon>;
            
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
                return first ^ second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_xor for neon using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: int64_t
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::854
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_xor<simd<int64_t, neon>, Idof> {
            using Vec = simd<int64_t, neon>;
            
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
                return first ^ second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_xor for neon using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: float
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::854
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_xor<simd<float, neon>, Idof> {
            using Vec = simd<float, neon>;
            
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
                return first ^ second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_xor for neon using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: neon.
         *        Data Type: double
         *  Extension Flags: ['neon']
         *      Yaml Source: primitive_data/primitives/mask.yaml::854
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_binary_xor<simd<double, neon>, Idof> {
            using Vec = simd<double, neon>;
            
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
                return first ^ second;
            }
        };
    } // end of namespace functors for template specialization of imask_binary_xor for neon using double.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_NEON_HPP