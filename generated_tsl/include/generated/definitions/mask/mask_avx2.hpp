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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/include/generated/definitions/mask/mask_avx2.hpp
 * \date 2024-02-28
 * \brief Mask related primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : 48d9b97 (48d9b974aa94a5b73824da4bb473bf36985664c7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_AVX2_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_AVX2_HPP

#include "../../declarations/mask.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::179
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_movemask_ps(vec_mask);
            }
        };
    } // end of namespace functors for template specialization of to_integral for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::183
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                return _mm256_movemask_ps(_mm256_castsi256_ps(vec_mask));
            }
        };
    } // end of namespace functors for template specialization of to_integral for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::183
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                return _mm256_movemask_ps(_mm256_castsi256_ps(vec_mask));
            }
        };
    } // end of namespace functors for template specialization of to_integral for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::187
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                return _mm256_movemask_pd(_mm256_castsi256_pd(vec_mask));
            }
        };
    } // end of namespace functors for template specialization of to_integral for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::187
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                return _mm256_movemask_pd(_mm256_castsi256_pd(vec_mask));
            }
        };
    } // end of namespace functors for template specialization of to_integral for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_integral" (primitive to_integral).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::191
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_integral<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_movemask_pd(vec_mask);
            }
        };
    } // end of namespace functors for template specialization of to_integral for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::361
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_vector<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
                return mask; //mask is a vector already.
            }
        };
    } // end of namespace functors for template specialization of to_vector for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::361
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_vector<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
                return mask; //mask is a vector already.
            }
        };
    } // end of namespace functors for template specialization of to_vector for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::361
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_vector<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
                return mask; //mask is a vector already.
            }
        };
    } // end of namespace functors for template specialization of to_vector for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::361
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_vector<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
                return mask; //mask is a vector already.
            }
        };
    } // end of namespace functors for template specialization of to_vector for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::361
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_vector<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                return mask; //mask is a vector already.
            }
        };
    } // end of namespace functors for template specialization of to_vector for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::361
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_vector<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                return mask; //mask is a vector already.
            }
        };
    } // end of namespace functors for template specialization of to_vector for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::361
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_vector<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                return mask; //mask is a vector already.
            }
        };
    } // end of namespace functors for template specialization of to_vector for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::361
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_vector<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                return mask; //mask is a vector already.
            }
        };
    } // end of namespace functors for template specialization of to_vector for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::361
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_vector<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return mask; //mask is a vector already.
            }
        };
    } // end of namespace functors for template specialization of to_vector for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_vector" (primitive to_vector).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::361
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_vector<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return mask; //mask is a vector already.
            }
        };
    } // end of namespace functors for template specialization of to_vector for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::626
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_and is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_and_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::626
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_and is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_and_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::626
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_and is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_and_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::626
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_and is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_and_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::626
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_and is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_and_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::626
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_and is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_and_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::626
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_and is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_and_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::626
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_and is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_and_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::631
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_and_ps(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_and" (primitive mask_binary_and).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::631
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_and_pd(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_and for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::732
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_or is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_or_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::732
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_or is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_or_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::732
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_or is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_or_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::732
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_or is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_or_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::732
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_or is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_or_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::732
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_or is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_or_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::732
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_or is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_or_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::732
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_or is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_or_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::737
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_or_ps(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_or" (primitive mask_binary_or).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::737
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_or_pd(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_or for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::828
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_xor is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_xor_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::828
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_xor is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_xor_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::828
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_xor is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_xor_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::828
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_xor is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_xor_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::828
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_xor is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_xor_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::828
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_xor is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_xor_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::828
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_xor is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_xor_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::828
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = typename Vec::mask_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::mask_type>;
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
            static typename Vec::mask_type apply(
                const typename Vec::mask_type first, const typename Vec::mask_type second
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mask_binary_xor is not supported by your hardware natively while it is forced by using native" );

                return _mm256_castpd_si256(_mm256_xor_pd(_mm256_castsi256_pd(first),_mm256_castsi256_pd(second)));
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::833
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_xor_ps(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_binary_xor" (primitive mask_binary_xor).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::833
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_xor_pd(first, second);
            }
        };
    } // end of namespace functors for template specialization of mask_binary_xor for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::984
         * @note: TODO: actual value is smaller than the type for u/int8. Pls check.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
                #if defined(__clang__) || defined(__GNUC__)
                return __builtin_popcount(mask);
                #elif defined(_MSC_VER)
                return  __popcnt16(mask);
                #else
                static_assert(false, "No known implementation for popcount");
                #endif
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::984
         * @note: TODO: actual value is smaller than the type for u/int8. Pls check.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
                #if defined(__clang__) || defined(__GNUC__)
                return __builtin_popcount(mask);
                #elif defined(_MSC_VER)
                return  __popcnt16(mask);
                #else
                static_assert(false, "No known implementation for popcount");
                #endif
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::984
         * @note: TODO: actual value is smaller than the type for u/int8. Pls check.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
                #if defined(__clang__) || defined(__GNUC__)
                return __builtin_popcount(mask);
                #elif defined(_MSC_VER)
                return  __popcnt16(mask);
                #else
                static_assert(false, "No known implementation for popcount");
                #endif
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::984
         * @note: TODO: actual value is smaller than the type for u/int8. Pls check.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
                #if defined(__clang__) || defined(__GNUC__)
                return __builtin_popcount(mask);
                #elif defined(_MSC_VER)
                return  __popcnt16(mask);
                #else
                static_assert(false, "No known implementation for popcount");
                #endif
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::996
         * @note: TODO: actual value is smaller than the type. Pls check.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                #if defined(__clang__) || defined(__GNUC__)
                return __builtin_popcountl(mask);
                #elif defined(_MSC_VER)
                return  __popcnt32(mask);
                #else
                static_assert(false, "No known implementation for popcount");
                #endif
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::996
         * @note: TODO: actual value is smaller than the type. Pls check.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                #if defined(__clang__) || defined(__GNUC__)
                return __builtin_popcountl(mask);
                #elif defined(_MSC_VER)
                return  __popcnt32(mask);
                #else
                static_assert(false, "No known implementation for popcount");
                #endif
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::996
         * @note: TODO: actual value is smaller than the type. Pls check.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                #if defined(__clang__) || defined(__GNUC__)
                return __builtin_popcountl(mask);
                #elif defined(_MSC_VER)
                return  __popcnt32(mask);
                #else
                static_assert(false, "No known implementation for popcount");
                #endif
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1008
         * @note: TODO: actual value is smaller than the type. Pls check.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                #if defined(__clang__) || defined(__GNUC__)
                return __builtin_popcountll(mask);
                #elif defined(_MSC_VER)
                return  __popcnt64(mask);
                #else
                static_assert(false, "No known implementation for popcount");
                #endif
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1008
         * @note: TODO: actual value is smaller than the type. Pls check.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                #if defined(__clang__) || defined(__GNUC__)
                return __builtin_popcountll(mask);
                #elif defined(_MSC_VER)
                return  __popcnt64(mask);
                #else
                static_assert(false, "No known implementation for popcount");
                #endif
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imask_population_count" (primitive mask_population_count).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1008
         * @note: TODO: actual value is smaller than the type. Pls check.
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imask_population_count<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                #if defined(__clang__) || defined(__GNUC__)
                return __builtin_popcountll(mask);
                #elif defined(_MSC_VER)
                return  __popcnt64(mask);
                #else
                static_assert(false, "No known implementation for popcount");
                #endif
            }
        };
    } // end of namespace functors for template specialization of imask_population_count for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1146
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
                return tsl::to_mask<Vec>(*memory);
            }
        };
    } // end of namespace functors for template specialization of load_mask for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1146
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
                return tsl::to_mask<Vec>(*memory);
            }
        };
    } // end of namespace functors for template specialization of load_mask for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1146
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                return tsl::to_mask<Vec>(*memory);
            }
        };
    } // end of namespace functors for template specialization of load_mask for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1146
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                return tsl::to_mask<Vec>(*memory);
            }
        };
    } // end of namespace functors for template specialization of load_mask for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1146
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
                return tsl::to_mask<Vec>(*memory);
            }
        };
    } // end of namespace functors for template specialization of load_mask for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1146
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
                return tsl::to_mask<Vec>(*memory);
            }
        };
    } // end of namespace functors for template specialization of load_mask for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1146
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                return tsl::to_mask<Vec>(*memory);
            }
        };
    } // end of namespace functors for template specialization of load_mask for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1146
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                return tsl::to_mask<Vec>(*memory);
            }
        };
    } // end of namespace functors for template specialization of load_mask for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1146
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return tsl::to_mask<Vec>(*memory);
            }
        };
    } // end of namespace functors for template specialization of load_mask for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_mask" (primitive load_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1146
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_mask<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return tsl::to_mask<Vec>(*memory);
            }
        };
    } // end of namespace functors for template specialization of load_mask for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1175
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of load_imask for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1175
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of load_imask for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1175
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of load_imask for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1175
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of load_imask for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1175
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of load_imask for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1175
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of load_imask for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1175
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of load_imask for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1175
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of load_imask for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1175
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
    } // end of namespace functors for template specialization of load_imask for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load_imask" (primitive load_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1175
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load_imask<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
    } // end of namespace functors for template specialization of load_imask for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store_imask" (primitive store_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1203
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store_imask<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::imask_type *, typename Vec::imask_type>;
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
                typename Vec::imask_type * memory, typename Vec::imask_type mask
            ) {
                *memory = mask;
            }
        };
    } // end of namespace functors for template specialization of store_imask for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store_imask" (primitive store_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1203
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store_imask<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::imask_type *, typename Vec::imask_type>;
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
                typename Vec::imask_type * memory, typename Vec::imask_type mask
            ) {
                *memory = mask;
            }
        };
    } // end of namespace functors for template specialization of store_imask for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store_imask" (primitive store_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1203
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store_imask<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::imask_type *, typename Vec::imask_type>;
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
                typename Vec::imask_type * memory, typename Vec::imask_type mask
            ) {
                *memory = mask;
            }
        };
    } // end of namespace functors for template specialization of store_imask for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store_imask" (primitive store_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1203
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store_imask<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::imask_type *, typename Vec::imask_type>;
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
                typename Vec::imask_type * memory, typename Vec::imask_type mask
            ) {
                *memory = mask;
            }
        };
    } // end of namespace functors for template specialization of store_imask for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store_imask" (primitive store_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1203
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store_imask<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::imask_type *, typename Vec::imask_type>;
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
                typename Vec::imask_type * memory, typename Vec::imask_type mask
            ) {
                *memory = mask;
            }
        };
    } // end of namespace functors for template specialization of store_imask for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store_imask" (primitive store_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1203
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store_imask<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::imask_type *, typename Vec::imask_type>;
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
                typename Vec::imask_type * memory, typename Vec::imask_type mask
            ) {
                *memory = mask;
            }
        };
    } // end of namespace functors for template specialization of store_imask for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store_imask" (primitive store_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1203
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store_imask<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::imask_type *, typename Vec::imask_type>;
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
                typename Vec::imask_type * memory, typename Vec::imask_type mask
            ) {
                *memory = mask;
            }
        };
    } // end of namespace functors for template specialization of store_imask for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store_imask" (primitive store_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1203
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store_imask<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::imask_type *, typename Vec::imask_type>;
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
                typename Vec::imask_type * memory, typename Vec::imask_type mask
            ) {
                *memory = mask;
            }
        };
    } // end of namespace functors for template specialization of store_imask for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store_imask" (primitive store_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1203
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store_imask<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::imask_type *, typename Vec::imask_type>;
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
                typename Vec::imask_type * memory, typename Vec::imask_type mask
            ) {
                *memory = mask;
            }
        };
    } // end of namespace functors for template specialization of store_imask for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store_imask" (primitive store_imask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1203
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store_imask<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = void;
            using param_tuple_t = std::tuple<typename Vec::imask_type *, typename Vec::imask_type>;
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
                typename Vec::imask_type * memory, typename Vec::imask_type mask
            ) {
                *memory = mask;
            }
        };
    } // end of namespace functors for template specialization of store_imask for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of test_imask for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of test_imask for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of test_imask for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of test_imask for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of test_imask for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of test_imask for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of test_imask for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of test_imask for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
    } // end of namespace functors for template specialization of test_imask for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "test_imask" (primitive test_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1231
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct test_imask<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
    } // end of namespace functors for template specialization of test_imask for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1266
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of insert_imask for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1266
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of insert_imask for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1266
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of insert_imask for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1266
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of insert_imask for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1266
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of insert_imask for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1266
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of insert_imask for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1266
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of insert_imask for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1266
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of insert_imask for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1266
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
    } // end of namespace functors for template specialization of insert_imask for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "insert_imask" (primitive insert_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1266
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct insert_imask<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
    } // end of namespace functors for template specialization of insert_imask for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1298
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of extract_imask for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1298
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of extract_imask for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1298
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of extract_imask for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1298
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of extract_imask for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1298
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
    } // end of namespace functors for template specialization of extract_imask for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1298
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
    } // end of namespace functors for template specialization of extract_imask for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1298
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
    } // end of namespace functors for template specialization of extract_imask for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1298
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
    } // end of namespace functors for template specialization of extract_imask for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1298
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
    } // end of namespace functors for template specialization of extract_imask for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_imask" (primitive extract_mask).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/mask.yaml::1298
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct extract_imask<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
    } // end of namespace functors for template specialization of extract_imask for avx2 using double.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_MASK_MASK_AVX2_HPP