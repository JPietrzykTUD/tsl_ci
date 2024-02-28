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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/include/generated/definitions/ls/ls_avx2.hpp
 * \date 2024-02-28
 * \brief Load/Store primitives
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : 48d9b97 (48d9b974aa94a5b73824da4bb473bf36985664c7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_LS_LS_AVX2_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_LS_LS_AVX2_HPP

#include "../../declarations/ls.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::48
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(assume_aligned<Vec::vector_alignment()>(memory)));
            }
        };
    } // end of namespace functors for template specialization of load for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::48
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(assume_aligned<Vec::vector_alignment()>(memory)));
            }
        };
    } // end of namespace functors for template specialization of load for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::48
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(assume_aligned<Vec::vector_alignment()>(memory)));
            }
        };
    } // end of namespace functors for template specialization of load for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::48
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(assume_aligned<Vec::vector_alignment()>(memory)));
            }
        };
    } // end of namespace functors for template specialization of load for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::48
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(assume_aligned<Vec::vector_alignment()>(memory)));
            }
        };
    } // end of namespace functors for template specialization of load for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::48
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(assume_aligned<Vec::vector_alignment()>(memory)));
            }
        };
    } // end of namespace functors for template specialization of load for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::48
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(assume_aligned<Vec::vector_alignment()>(memory)));
            }
        };
    } // end of namespace functors for template specialization of load for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::48
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                return _mm256_load_si256(reinterpret_cast<__m256i const *>(assume_aligned<Vec::vector_alignment()>(memory)));
            }
        };
    } // end of namespace functors for template specialization of load for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::52
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_load_ps(assume_aligned<Vec::vector_alignment()>(memory));
            }
        };
    } // end of namespace functors for template specialization of load for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "load" (primitive load).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::52
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct load<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_load_pd(assume_aligned<Vec::vector_alignment()>(memory));
            }
        };
    } // end of namespace functors for template specialization of load for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::136
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
                return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
        };
    } // end of namespace functors for template specialization of loadu for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::136
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
                return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
        };
    } // end of namespace functors for template specialization of loadu for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::136
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
        };
    } // end of namespace functors for template specialization of loadu for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::136
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
        };
    } // end of namespace functors for template specialization of loadu for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::136
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
                return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
        };
    } // end of namespace functors for template specialization of loadu for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::136
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
                return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
        };
    } // end of namespace functors for template specialization of loadu for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::136
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
        };
    } // end of namespace functors for template specialization of loadu for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::136
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                return _mm256_loadu_si256( reinterpret_cast< __m256i const * >( memory ) );
            }
        };
    } // end of namespace functors for template specialization of loadu for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::140
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_loadu_ps(memory);
            }
        };
    } // end of namespace functors for template specialization of loadu for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "loadu" (primitive loadu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::140
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct loadu<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_loadu_pd(memory);
            }
        };
    } // end of namespace functors for template specialization of loadu for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::224
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
                _mm256_store_si256(reinterpret_cast<__m256i *>(assume_aligned<Vec::vector_alignment()>(memory)), data);
            }
        };
    } // end of namespace functors for template specialization of store for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::224
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
                _mm256_store_si256(reinterpret_cast<__m256i *>(assume_aligned<Vec::vector_alignment()>(memory)), data);
            }
        };
    } // end of namespace functors for template specialization of store for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::224
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                _mm256_store_si256(reinterpret_cast<__m256i *>(assume_aligned<Vec::vector_alignment()>(memory)), data);
            }
        };
    } // end of namespace functors for template specialization of store for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::224
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                _mm256_store_si256(reinterpret_cast<__m256i *>(assume_aligned<Vec::vector_alignment()>(memory)), data);
            }
        };
    } // end of namespace functors for template specialization of store for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::224
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
                _mm256_store_si256(reinterpret_cast<__m256i *>(assume_aligned<Vec::vector_alignment()>(memory)), data);
            }
        };
    } // end of namespace functors for template specialization of store for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::224
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
                _mm256_store_si256(reinterpret_cast<__m256i *>(assume_aligned<Vec::vector_alignment()>(memory)), data);
            }
        };
    } // end of namespace functors for template specialization of store for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::224
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                _mm256_store_si256(reinterpret_cast<__m256i *>(assume_aligned<Vec::vector_alignment()>(memory)), data);
            }
        };
    } // end of namespace functors for template specialization of store for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::224
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                _mm256_store_si256(reinterpret_cast<__m256i *>(assume_aligned<Vec::vector_alignment()>(memory)), data);
            }
        };
    } // end of namespace functors for template specialization of store for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::228
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                _mm256_store_ps(assume_aligned<Vec::vector_alignment()>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of store for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "store" (primitive store).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::228
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct store<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                _mm256_store_pd(assume_aligned<Vec::vector_alignment()>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of store for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::307
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
                _mm256_storeu_si256(reinterpret_cast<__m256i *>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of storeu for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::307
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
                _mm256_storeu_si256(reinterpret_cast<__m256i *>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of storeu for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::307
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                _mm256_storeu_si256(reinterpret_cast<__m256i *>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of storeu for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::307
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                _mm256_storeu_si256(reinterpret_cast<__m256i *>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of storeu for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::307
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
                _mm256_storeu_si256(reinterpret_cast<__m256i *>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of storeu for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::307
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
                _mm256_storeu_si256(reinterpret_cast<__m256i *>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of storeu for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::307
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                _mm256_storeu_si256(reinterpret_cast<__m256i *>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of storeu for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::307
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                _mm256_storeu_si256(reinterpret_cast<__m256i *>(memory), data);
            }
        };
    } // end of namespace functors for template specialization of storeu for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::311
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                _mm256_storeu_ps(memory, data);
            }
        };
    } // end of namespace functors for template specialization of storeu for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "storeu" (primitive storeu).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::311
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct storeu<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                _mm256_storeu_pd(memory, data);
            }
        };
    } // end of namespace functors for template specialization of storeu for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::473
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
                return _mm256_set1_epi8(value);
            }
        };
    } // end of namespace functors for template specialization of set1 for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::473
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
                return _mm256_set1_epi16(value);
            }
        };
    } // end of namespace functors for template specialization of set1 for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::473
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                return _mm256_set1_epi32(value);
            }
        };
    } // end of namespace functors for template specialization of set1 for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::473
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
                return _mm256_set1_epi8(value);
            }
        };
    } // end of namespace functors for template specialization of set1 for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::473
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
                return _mm256_set1_epi16(value);
            }
        };
    } // end of namespace functors for template specialization of set1 for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::473
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                return _mm256_set1_epi32(value);
            }
        };
    } // end of namespace functors for template specialization of set1 for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::477
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                return _mm256_set1_epi64x(value);
            }
        };
    } // end of namespace functors for template specialization of set1 for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::477
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                return _mm256_set1_epi64x(value);
            }
        };
    } // end of namespace functors for template specialization of set1 for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::481
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_set1_ps(value);
            }
        };
    } // end of namespace functors for template specialization of set1 for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set1" (primitive set1).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::481
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set1<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_set1_pd(value);
            }
        };
    } // end of namespace functors for template specialization of set1 for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::554
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<uint8_t, avx2>, Idof> {
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
                return _mm256_setzero_si256();
            }
        };
    } // end of namespace functors for template specialization of set_zero for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::554
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<int8_t, avx2>, Idof> {
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
                return _mm256_setzero_si256();
            }
        };
    } // end of namespace functors for template specialization of set_zero for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::554
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<uint16_t, avx2>, Idof> {
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
                return _mm256_setzero_si256();
            }
        };
    } // end of namespace functors for template specialization of set_zero for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::554
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<int16_t, avx2>, Idof> {
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
                return _mm256_setzero_si256();
            }
        };
    } // end of namespace functors for template specialization of set_zero for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::554
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<uint32_t, avx2>, Idof> {
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
                return _mm256_setzero_si256();
            }
        };
    } // end of namespace functors for template specialization of set_zero for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::554
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<int32_t, avx2>, Idof> {
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
                return _mm256_setzero_si256();
            }
        };
    } // end of namespace functors for template specialization of set_zero for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::554
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<uint64_t, avx2>, Idof> {
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
                return _mm256_setzero_si256();
            }
        };
    } // end of namespace functors for template specialization of set_zero for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::554
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<int64_t, avx2>, Idof> {
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
                return _mm256_setzero_si256();
            }
        };
    } // end of namespace functors for template specialization of set_zero for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::558
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<float, avx2>, Idof> {
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
                return _mm256_setzero_ps();
            }
        };
    } // end of namespace functors for template specialization of set_zero for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set_zero" (primitive set_zero).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::558
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set_zero<simd<double, avx2>, Idof> {
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
                return _mm256_setzero_pd();
            }
        };
    } // end of namespace functors for template specialization of set_zero for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::633
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
                return _mm256_set_epi8(args...);
            }
        };
    } // end of namespace functors for template specialization of set for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::633
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
                return _mm256_set_epi16(args...);
            }
        };
    } // end of namespace functors for template specialization of set for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::633
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                return _mm256_set_epi32(args...);
            }
        };
    } // end of namespace functors for template specialization of set for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::633
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
                return _mm256_set_epi8(args...);
            }
        };
    } // end of namespace functors for template specialization of set for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::633
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
                return _mm256_set_epi16(args...);
            }
        };
    } // end of namespace functors for template specialization of set for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::633
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                return _mm256_set_epi32(args...);
            }
        };
    } // end of namespace functors for template specialization of set for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::637
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                return _mm256_set_epi64x( args... );
            }
        };
    } // end of namespace functors for template specialization of set for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::637
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                return _mm256_set_epi64x( args... );
            }
        };
    } // end of namespace functors for template specialization of set for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::641
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                return _mm256_set_ps(args...);
            }
        };
    } // end of namespace functors for template specialization of set for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "set" (primitive set).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::641
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct set<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                return _mm256_set_pd(args...);
            }
        };
    } // end of namespace functors for template specialization of set for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::714
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<uint8_t, avx2>, Idof> {
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>(((static_cast<T>((sizeof...(Is) - 1 - Is)))))...
                  );
                };
                return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of sequence for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::714
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<int8_t, avx2>, Idof> {
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>(((static_cast<T>((sizeof...(Is) - 1 - Is)))))...
                  );
                };
                return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of sequence for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::714
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<uint16_t, avx2>, Idof> {
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>(((static_cast<T>((sizeof...(Is) - 1 - Is)))))...
                  );
                };
                return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of sequence for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::714
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<int16_t, avx2>, Idof> {
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>(((static_cast<T>((sizeof...(Is) - 1 - Is)))))...
                  );
                };
                return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of sequence for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::714
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<uint32_t, avx2>, Idof> {
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>(((static_cast<T>((sizeof...(Is) - 1 - Is)))))...
                  );
                };
                return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of sequence for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::714
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<int32_t, avx2>, Idof> {
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>(((static_cast<T>((sizeof...(Is) - 1 - Is)))))...
                  );
                };
                return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of sequence for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::714
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<uint64_t, avx2>, Idof> {
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>(((static_cast<T>((sizeof...(Is) - 1 - Is)))))...
                  );
                };
                return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of sequence for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::714
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<int64_t, avx2>, Idof> {
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>(((static_cast<T>((sizeof...(Is) - 1 - Is)))))...
                  );
                };
                return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of sequence for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::714
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<float, avx2>, Idof> {
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>(((static_cast<T>((sizeof...(Is) - 1 - Is)))))...
                  );
                };
                return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of sequence for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "sequence" (primitive sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::714
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct sequence<simd<double, avx2>, Idof> {
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>(((static_cast<T>((sizeof...(Is) - 1 - Is)))))...
                  );
                };
                return seq_fun(std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of sequence for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::827
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<uint8_t, avx2>, Idof> {
            using Vec = simd<uint8_t, avx2>;
            
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  T const init, T const sw, std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>((((static_cast<T>((sizeof...(Is) - 1 - Is)))*sw)+init))...
                  );
                };
                return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::827
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<int8_t, avx2>, Idof> {
            using Vec = simd<int8_t, avx2>;
            
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  T const init, T const sw, std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>((((static_cast<T>((sizeof...(Is) - 1 - Is)))*sw)+init))...
                  );
                };
                return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::827
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<uint16_t, avx2>, Idof> {
            using Vec = simd<uint16_t, avx2>;
            
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  T const init, T const sw, std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>((((static_cast<T>((sizeof...(Is) - 1 - Is)))*sw)+init))...
                  );
                };
                return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::827
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<int16_t, avx2>, Idof> {
            using Vec = simd<int16_t, avx2>;
            
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  T const init, T const sw, std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>((((static_cast<T>((sizeof...(Is) - 1 - Is)))*sw)+init))...
                  );
                };
                return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::827
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<uint32_t, avx2>, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  T const init, T const sw, std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>((((static_cast<T>((sizeof...(Is) - 1 - Is)))*sw)+init))...
                  );
                };
                return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::827
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<int32_t, avx2>, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  T const init, T const sw, std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>((((static_cast<T>((sizeof...(Is) - 1 - Is)))*sw)+init))...
                  );
                };
                return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::827
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<uint64_t, avx2>, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  T const init, T const sw, std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>((((static_cast<T>((sizeof...(Is) - 1 - Is)))*sw)+init))...
                  );
                };
                return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::827
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<int64_t, avx2>, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  T const init, T const sw, std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>((((static_cast<T>((sizeof...(Is) - 1 - Is)))*sw)+init))...
                  );
                };
                return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::827
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<float, avx2>, Idof> {
            using Vec = simd<float, avx2>;
            
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  T const init, T const sw, std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>((((static_cast<T>((sizeof...(Is) - 1 - Is)))*sw)+init))...
                  );
                };
                return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "custom_sequence" (primitive custom_sequence).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::827
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct custom_sequence<simd<double, avx2>, Idof> {
            using Vec = simd<double, avx2>;
            
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
                using T = typename Vec::base_type;
                using sequence_type = typename std::conditional_t<std::is_integral_v<T>, T, uint64_t>;
                auto seq_fun= []<sequence_type... Is>(
                  T const init, T const sw, std::integer_sequence<sequence_type, Is...>
                ) {
                  return tsl::set<Vec>(
                    static_cast<T>((((static_cast<T>((sizeof...(Is) - 1 - Is)))*sw)+init))...
                  );
                };
                return seq_fun(start, stepwidth, std::make_integer_sequence<sequence_type, Vec::vector_element_count()>());
            }
        };
    } // end of namespace functors for template specialization of custom_sequence for avx2 using double.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::2007
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<uint8_t, avx2>, Index, Idof> {
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
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                return data[Index];
                //return _mm256_extract_epi8(data, Index);
            }
        };
    } // end of namespace functors for template specialization of extract_value for avx2 using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::2007
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<uint16_t, avx2>, Index, Idof> {
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
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                return data[Index];
                //return _mm256_extract_epi16(data, Index);
            }
        };
    } // end of namespace functors for template specialization of extract_value for avx2 using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int8_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::2007
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<int8_t, avx2>, Index, Idof> {
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
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                return data[Index];
                //return _mm256_extract_epi8(data, Index);
            }
        };
    } // end of namespace functors for template specialization of extract_value for avx2 using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int16_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::2007
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<int16_t, avx2>, Index, Idof> {
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
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static typename Vec::base_type apply(
                const typename Vec::register_type data
            ) {
                return data[Index];
                //return _mm256_extract_epi16(data, Index);
            }
        };
    } // end of namespace functors for template specialization of extract_value for avx2 using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::2013
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<uint32_t, avx2>, Index, Idof> {
            using Vec = simd<uint32_t, avx2>;
            
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
                return data[Index];
                //return _mm256_extract_epi32(data, Index);
            }
        };
    } // end of namespace functors for template specialization of extract_value for avx2 using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: avx2.
         *        Data Type: uint64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::2013
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<uint64_t, avx2>, Index, Idof> {
            using Vec = simd<uint64_t, avx2>;
            
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
                return data[Index];
                //return _mm256_extract_epi64(data, Index);
            }
        };
    } // end of namespace functors for template specialization of extract_value for avx2 using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int32_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::2013
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<int32_t, avx2>, Index, Idof> {
            using Vec = simd<int32_t, avx2>;
            
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
                return data[Index];
                //return _mm256_extract_epi32(data, Index);
            }
        };
    } // end of namespace functors for template specialization of extract_value for avx2 using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: avx2.
         *        Data Type: int64_t
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::2013
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<int64_t, avx2>, Index, Idof> {
            using Vec = simd<int64_t, avx2>;
            
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
                return data[Index];
                //return _mm256_extract_epi64(data, Index);
            }
        };
    } // end of namespace functors for template specialization of extract_value for avx2 using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: avx2.
         *        Data Type: float
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::2019
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<float, avx2>, Index, Idof> {
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
                return data[Index];
                /*__m256 temp = _mm256_permute_ps(data, _MM_SHUFFLE(Index, Index, Index, Index));
                return _mm256_cvtss_f32(temp);*/
            }
        };
    } // end of namespace functors for template specialization of extract_value for avx2 using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "extract_value" (primitive extract_value).
         * @details:
         * Target Extension: avx2.
         *        Data Type: double
         *  Extension Flags: ['avx']
         *      Yaml Source: primitive_data/primitives/ls.yaml::2026
         */
        template<const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value<simd<double, avx2>, Index, Idof> {
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
                return data[Index];
                /*__m256d temp = _mm256_permute4x64_pd(data, _MM_SHUFFLE(Index, Index, Index, Index));
                return _mm256_cvtsd_f64(temp);*/
            }
        };
    } // end of namespace functors for template specialization of extract_value for avx2 using double.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DEFINITIONS_LS_LS_AVX2_HPP