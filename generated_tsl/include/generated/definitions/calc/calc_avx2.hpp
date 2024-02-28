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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/include/generated/definitions/calc/calc_avx2.hpp
 * \date 2024-02-28
 * \brief This file contains arithmetic primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : 48d9b97 (48d9b974aa94a5b73824da4bb473bf36985664c7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_AVX2_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_AVX2_HPP

#include <array>
#include <cstddef>
#include "../../declarations/calc.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::101
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_add_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of add for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "add" (primitive add).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::101
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct add<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_add_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of add for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_sub_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of sub for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sub" (primitive sub).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::239
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sub<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_sub_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of sub for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::363
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
                return _mm256_add_epi8(vec_a, _mm256_and_si256(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::363
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
                return _mm256_add_epi8(vec_a, _mm256_and_si256(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::363
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
                return _mm256_add_epi16(vec_a, _mm256_and_si256(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::363
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
                return _mm256_add_epi16(vec_a, _mm256_and_si256(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::363
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                return _mm256_add_epi32(vec_a, _mm256_and_si256(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::363
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                return _mm256_add_epi32(vec_a, _mm256_and_si256(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::363
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                return _mm256_add_epi64(vec_a, _mm256_and_si256(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::363
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                return _mm256_add_epi64(vec_a, _mm256_and_si256(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::367
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_add_ps(vec_a, _mm256_and_ps(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mask_add" (primitive add).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::367
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mask_add<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_add_pd(vec_a, _mm256_and_pd(vec_b, mask));
            }
        };
    } // end of namespace functors for template specialization of mask_add for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::546
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_mul_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of mul for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::546
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_mul_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of mul for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::565
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= buffer_b[i];
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::565
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= buffer_b[i];
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::565
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= buffer_b[i];
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::565
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= buffer_b[i];
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::565
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= buffer_b[i];
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::565
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= buffer_b[i];
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::565
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= buffer_b[i];
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::565
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= buffer_b[i];
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::714
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_mul_ps(vec_a, tsl::set1<Vec>(mul_var));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::714
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_mul_pd(vec_a, tsl::set1<Vec>(mul_var));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::733
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
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
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= mul_var;
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::733
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
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
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= mul_var;
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::733
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
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
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= mul_var;
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::733
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
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
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= mul_var;
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::733
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
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
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= mul_var;
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::733
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
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
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= mul_var;
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::733
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
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
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= mul_var;
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "mul_constant" (primitive mul).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::733
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct mul_constant<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
            using return_type = typename Vec::register_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type, const typename Vec::base_type>;
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
                const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive mul_constant is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                    buffer_a[i] *= mul_var;
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of mul_constant for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::945
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
                typename Vec::base_type result = 0;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer.data()), value);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result += buffer[i];
                }
                return result;
            }
        };
    } // end of namespace functors for template specialization of hadd for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::945
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
                typename Vec::base_type result = 0;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer.data()), value);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result += buffer[i];
                }
                return result;
            }
        };
    } // end of namespace functors for template specialization of hadd for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::945
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
                typename Vec::base_type result = 0;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer.data()), value);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result += buffer[i];
                }
                return result;
            }
        };
    } // end of namespace functors for template specialization of hadd for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hadd" (primitive hadd).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::945
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hadd<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
            using return_type = typename Vec::base_type;
            using param_tuple_t = std::tuple<const typename Vec::register_type>;
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
            static typename Vec::base_type apply(
                const typename Vec::register_type value
            ) {
                static_assert( !std::is_same_v< Idof, native >, "The primitive hadd is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer;
                typename Vec::base_type result = 0;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer.data()), value);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                  result += buffer[i];
                }
                return result;
            }
        };
    } // end of namespace functors for template specialization of hadd for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1096
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_min_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of min for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "min" (primitive min).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1096
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct min<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_min_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of min for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1251
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_div_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of div for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1251
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_div_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of div for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1255
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
                static_assert( !std::is_same_v< Idof, native >, "The primitive div is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   buffer_a[i] /= buffer_b[i];
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of div for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1255
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
                static_assert( !std::is_same_v< Idof, native >, "The primitive div is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   buffer_a[i] /= buffer_b[i];
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of div for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1255
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
                static_assert( !std::is_same_v< Idof, native >, "The primitive div is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   buffer_a[i] /= buffer_b[i];
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of div for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1255
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
                static_assert( !std::is_same_v< Idof, native >, "The primitive div is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   buffer_a[i] /= buffer_b[i];
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of div for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1255
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                static_assert( !std::is_same_v< Idof, native >, "The primitive div is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   buffer_a[i] /= buffer_b[i];
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of div for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1255
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                static_assert( !std::is_same_v< Idof, native >, "The primitive div is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   buffer_a[i] /= buffer_b[i];
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of div for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1255
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                static_assert( !std::is_same_v< Idof, native >, "The primitive div is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   buffer_a[i] /= buffer_b[i];
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of div for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "div" (primitive div).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::1255
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct div<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                static_assert( !std::is_same_v< Idof, native >, "The primitive div is not supported by your hardware natively while it is forced by using native" );

                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_a;
                alignas(Vec::vector_alignment()) std::array<typename Vec::base_type, Vec::vector_element_count()> buffer_b;
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_a.data()), vec_a);
                _mm256_store_si256(reinterpret_cast<__m256i*>(buffer_b.data()), vec_b);
                for(std::size_t i = 0; i < Vec::vector_element_count(); ++i) {
                   buffer_a[i] /= buffer_b[i];
                }
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(buffer_a.data()));
            }
        };
    } // end of namespace functors for template specialization of div for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2111
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                typename Vec::register_type y, max1, max2, max3, max4;
                y = _mm256_permute2f128_ps(data, data, 1);
                max1 = _mm256_max_ps(data, y);
                y = _mm256_permute_ps(max1, 0b10110001);
                max2 = _mm256_max_ps(max1, y);
                y = _mm256_permute_ps(max2, 0b01001110);
                max3 = _mm256_max_ps(max2, y);
                y = _mm256_permute2f128_ps(max3, max3, 1);
                max4 = _mm256_max_ps(max3, y);
                return tsl::extract_value<Vec, 0>(max4);
            }
        };
    } // end of namespace functors for template specialization of hmax for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmax" (primitive hmax).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2140
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmax<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                typename Vec::register_type y, m1, m2, m;
                y = _mm256_permute2f128_pd(data, data, 1);
                m1 = _mm256_max_pd(data, y);
                m2 = _mm256_permute_pd(m1, 5);
                m = _mm256_max_pd(m1, m2);
                return tsl::extract_value<Vec, 0>(m);
            }
        };
    } // end of namespace functors for template specialization of hmax for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2279
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                typename Vec::register_type y, min1, min2, min3, min4;
                y = _mm256_permute2f128_ps(data, data, 1);
                min1 = _mm256_min_ps(data, y);
                y = _mm256_permute_ps(min1, 0b10110001);
                min2 = _mm256_min_ps(min1, y);
                y = _mm256_permute_ps(min2, 0b01001110);
                min3 = _mm256_min_ps(min2, y);
                y = _mm256_permute2f128_ps(min3, min3, 1);
                min4 = _mm256_min_ps(min3, y);
                return tsl::extract_value<Vec, 0>(min4);
            }
        };
    } // end of namespace functors for template specialization of hmin for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "hmin" (primitive hmin).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2308
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct hmin<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                typename Vec::register_type y, m1, m2, m;
                y = _mm256_permute2f128_pd(data, data, 1);
                m1 = _mm256_min_pd(data, y);
                m2 = _mm256_permute_pd(m1, 5);
                m = _mm256_min_pd(m1, m2);
                return tsl::extract_value<Vec, 0>(m);
            }
        };
    } // end of namespace functors for template specialization of hmin for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2439
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_max_ps(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of max for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "max" (primitive max).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/calc.yaml::2439
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct max<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_max_pd(vec_a, vec_b);
            }
        };
    } // end of namespace functors for template specialization of max for avx2 using double.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_CALC_CALC_AVX2_HPP