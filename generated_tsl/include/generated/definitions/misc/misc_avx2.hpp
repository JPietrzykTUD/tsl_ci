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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/include/generated/definitions/misc/misc_avx2.hpp
 * \date 2024-02-28
 * \brief Miscellaneous primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : 48d9b97 (48d9b974aa94a5b73824da4bb473bf36985664c7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_AVX2_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_AVX2_HPP

#include "../../declarations/misc.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "undefined" (primitive undefined).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/misc.yaml::466
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct undefined<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
                return _mm256_undefined_si256();
            }
        };
    } // end of namespace functors for template specialization of undefined for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "undefined" (primitive undefined).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/misc.yaml::466
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct undefined<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
                return _mm256_undefined_si256();
            }
        };
    } // end of namespace functors for template specialization of undefined for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "undefined" (primitive undefined).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/misc.yaml::466
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct undefined<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
                return _mm256_undefined_si256();
            }
        };
    } // end of namespace functors for template specialization of undefined for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "undefined" (primitive undefined).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/misc.yaml::466
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct undefined<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
                return _mm256_undefined_si256();
            }
        };
    } // end of namespace functors for template specialization of undefined for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "undefined" (primitive undefined).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/misc.yaml::466
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct undefined<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                return _mm256_undefined_si256();
            }
        };
    } // end of namespace functors for template specialization of undefined for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "undefined" (primitive undefined).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/misc.yaml::466
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct undefined<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                return _mm256_undefined_si256();
            }
        };
    } // end of namespace functors for template specialization of undefined for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "undefined" (primitive undefined).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/misc.yaml::466
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct undefined<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                return _mm256_undefined_si256();
            }
        };
    } // end of namespace functors for template specialization of undefined for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "undefined" (primitive undefined).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/misc.yaml::466
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct undefined<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                return _mm256_undefined_si256();
            }
        };
    } // end of namespace functors for template specialization of undefined for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "undefined" (primitive undefined).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/misc.yaml::470
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct undefined<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_undefined_ps();
            }
        };
    } // end of namespace functors for template specialization of undefined for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "undefined" (primitive undefined).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/misc.yaml::470
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct undefined<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_undefined_pd();
            }
        };
    } // end of namespace functors for template specialization of undefined for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "maskz_mov" (primitive maskz_mov).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/misc.yaml::524
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct maskz_mov<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type src
            ) {
                return _mm256_and_ps(src, mask);
            }
        };
    } // end of namespace functors for template specialization of maskz_mov for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "maskz_mov" (primitive maskz_mov).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/misc.yaml::524
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct maskz_mov<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::mask_type, const typename Vec::register_type>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::register_type apply(
                const typename Vec::mask_type mask, const typename Vec::register_type src
            ) {
                return _mm256_and_pd(src, mask);
            }
        };
    } // end of namespace functors for template specialization of maskz_mov for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imaskz_mov" (primitive maskz_mov).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/misc.yaml::605
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imaskz_mov<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_and_ps(src, tsl::to_mask<Vec>(mask));
            }
        };
    } // end of namespace functors for template specialization of imaskz_mov for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "imaskz_mov" (primitive maskz_mov).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/misc.yaml::605
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct imaskz_mov<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_and_pd(src, tsl::to_mask<Vec>(mask));
            }
        };
    } // end of namespace functors for template specialization of imaskz_mov for avx2 using double.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_MISC_MISC_AVX2_HPP