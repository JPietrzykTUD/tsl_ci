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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/sse_only/include/generated/definitions/io/io_sse.hpp
 * \date 2024-02-29
 * \brief Input/Output primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : d17f8eb (d17f8eb76bb8c5acffdd50fd389e77f1972f0fa7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_IO_IO_SSE_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_IO_IO_SSE_HPP

#include "../../declarations/io.hpp"
#include <tuple>

namespace tsl {

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/io.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_ostream<simd<uint8_t, sse>, Idof> {
            using Vec = simd<uint8_t, sse>;
            
            using return_type = std::ostream &;
            using param_tuple_t = std::tuple<std::ostream &, typename Vec::register_type const, modifier>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {
                using cast_type = typename std::conditional_t<
                  (sizeof(typename Vec::base_type) <= 2),
                  std::conditional_t<
                    std::is_signed_v<typename Vec::base_type>,
                    int,
                    unsigned int
                  >,
                  typename Vec::base_type
                >;
                std::ios_base::fmtflags f(out.flags());
                if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
                } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
                } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
                } else {
                  out << std::dec;
                }
                for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                      out << std::bitset<sizeof(typename Vec::base_type)*8>{static_cast<unsigned long long>(data[(Vec::vector_element_count()-1)-idx])} << "|";
                  } else {
                      out << std::setw(sizeof(typename Vec::base_type)*8) << static_cast<cast_type>(data[(Vec::vector_element_count()-1)-idx]) << "|";
                  }
                }
                out.flags(f);
                out << std::endl;
                return out;
            }
        };
    } // end of namespace functors for template specialization of to_ostream for sse using uint8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
         * @details:
         * Target Extension: sse.
         *        Data Type: int8_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/io.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_ostream<simd<int8_t, sse>, Idof> {
            using Vec = simd<int8_t, sse>;
            
            using return_type = std::ostream &;
            using param_tuple_t = std::tuple<std::ostream &, typename Vec::register_type const, modifier>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {
                using cast_type = typename std::conditional_t<
                  (sizeof(typename Vec::base_type) <= 2),
                  std::conditional_t<
                    std::is_signed_v<typename Vec::base_type>,
                    int,
                    unsigned int
                  >,
                  typename Vec::base_type
                >;
                std::ios_base::fmtflags f(out.flags());
                if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
                } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
                } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
                } else {
                  out << std::dec;
                }
                for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                      out << std::bitset<sizeof(typename Vec::base_type)*8>{static_cast<unsigned long long>(data[(Vec::vector_element_count()-1)-idx])} << "|";
                  } else {
                      out << std::setw(sizeof(typename Vec::base_type)*8) << static_cast<cast_type>(data[(Vec::vector_element_count()-1)-idx]) << "|";
                  }
                }
                out.flags(f);
                out << std::endl;
                return out;
            }
        };
    } // end of namespace functors for template specialization of to_ostream for sse using int8_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/io.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_ostream<simd<uint16_t, sse>, Idof> {
            using Vec = simd<uint16_t, sse>;
            
            using return_type = std::ostream &;
            using param_tuple_t = std::tuple<std::ostream &, typename Vec::register_type const, modifier>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {
                using cast_type = typename std::conditional_t<
                  (sizeof(typename Vec::base_type) <= 2),
                  std::conditional_t<
                    std::is_signed_v<typename Vec::base_type>,
                    int,
                    unsigned int
                  >,
                  typename Vec::base_type
                >;
                std::ios_base::fmtflags f(out.flags());
                if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
                } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
                } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
                } else {
                  out << std::dec;
                }
                for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                      out << std::bitset<sizeof(typename Vec::base_type)*8>{static_cast<unsigned long long>(data[(Vec::vector_element_count()-1)-idx])} << "|";
                  } else {
                      out << std::setw(sizeof(typename Vec::base_type)*8) << static_cast<cast_type>(data[(Vec::vector_element_count()-1)-idx]) << "|";
                  }
                }
                out.flags(f);
                out << std::endl;
                return out;
            }
        };
    } // end of namespace functors for template specialization of to_ostream for sse using uint16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
         * @details:
         * Target Extension: sse.
         *        Data Type: int16_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/io.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_ostream<simd<int16_t, sse>, Idof> {
            using Vec = simd<int16_t, sse>;
            
            using return_type = std::ostream &;
            using param_tuple_t = std::tuple<std::ostream &, typename Vec::register_type const, modifier>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {
                using cast_type = typename std::conditional_t<
                  (sizeof(typename Vec::base_type) <= 2),
                  std::conditional_t<
                    std::is_signed_v<typename Vec::base_type>,
                    int,
                    unsigned int
                  >,
                  typename Vec::base_type
                >;
                std::ios_base::fmtflags f(out.flags());
                if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
                } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
                } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
                } else {
                  out << std::dec;
                }
                for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                      out << std::bitset<sizeof(typename Vec::base_type)*8>{static_cast<unsigned long long>(data[(Vec::vector_element_count()-1)-idx])} << "|";
                  } else {
                      out << std::setw(sizeof(typename Vec::base_type)*8) << static_cast<cast_type>(data[(Vec::vector_element_count()-1)-idx]) << "|";
                  }
                }
                out.flags(f);
                out << std::endl;
                return out;
            }
        };
    } // end of namespace functors for template specialization of to_ostream for sse using int16_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/io.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_ostream<simd<uint32_t, sse>, Idof> {
            using Vec = simd<uint32_t, sse>;
            
            using return_type = std::ostream &;
            using param_tuple_t = std::tuple<std::ostream &, typename Vec::register_type const, modifier>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {
                using cast_type = typename std::conditional_t<
                  (sizeof(typename Vec::base_type) <= 2),
                  std::conditional_t<
                    std::is_signed_v<typename Vec::base_type>,
                    int,
                    unsigned int
                  >,
                  typename Vec::base_type
                >;
                std::ios_base::fmtflags f(out.flags());
                if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
                } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
                } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
                } else {
                  out << std::dec;
                }
                for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                      out << std::bitset<sizeof(typename Vec::base_type)*8>{static_cast<unsigned long long>(data[(Vec::vector_element_count()-1)-idx])} << "|";
                  } else {
                      out << std::setw(sizeof(typename Vec::base_type)*8) << static_cast<cast_type>(data[(Vec::vector_element_count()-1)-idx]) << "|";
                  }
                }
                out.flags(f);
                out << std::endl;
                return out;
            }
        };
    } // end of namespace functors for template specialization of to_ostream for sse using uint32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
         * @details:
         * Target Extension: sse.
         *        Data Type: int32_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/io.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_ostream<simd<int32_t, sse>, Idof> {
            using Vec = simd<int32_t, sse>;
            
            using return_type = std::ostream &;
            using param_tuple_t = std::tuple<std::ostream &, typename Vec::register_type const, modifier>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {
                using cast_type = typename std::conditional_t<
                  (sizeof(typename Vec::base_type) <= 2),
                  std::conditional_t<
                    std::is_signed_v<typename Vec::base_type>,
                    int,
                    unsigned int
                  >,
                  typename Vec::base_type
                >;
                std::ios_base::fmtflags f(out.flags());
                if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
                } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
                } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
                } else {
                  out << std::dec;
                }
                for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                      out << std::bitset<sizeof(typename Vec::base_type)*8>{static_cast<unsigned long long>(data[(Vec::vector_element_count()-1)-idx])} << "|";
                  } else {
                      out << std::setw(sizeof(typename Vec::base_type)*8) << static_cast<cast_type>(data[(Vec::vector_element_count()-1)-idx]) << "|";
                  }
                }
                out.flags(f);
                out << std::endl;
                return out;
            }
        };
    } // end of namespace functors for template specialization of to_ostream for sse using int32_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
         * @details:
         * Target Extension: sse.
         *        Data Type: uint64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/io.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_ostream<simd<uint64_t, sse>, Idof> {
            using Vec = simd<uint64_t, sse>;
            
            using return_type = std::ostream &;
            using param_tuple_t = std::tuple<std::ostream &, typename Vec::register_type const, modifier>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {
                using cast_type = typename std::conditional_t<
                  (sizeof(typename Vec::base_type) <= 2),
                  std::conditional_t<
                    std::is_signed_v<typename Vec::base_type>,
                    int,
                    unsigned int
                  >,
                  typename Vec::base_type
                >;
                std::ios_base::fmtflags f(out.flags());
                if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
                } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
                } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
                } else {
                  out << std::dec;
                }
                for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                      out << std::bitset<sizeof(typename Vec::base_type)*8>{static_cast<unsigned long long>(data[(Vec::vector_element_count()-1)-idx])} << "|";
                  } else {
                      out << std::setw(sizeof(typename Vec::base_type)*8) << static_cast<cast_type>(data[(Vec::vector_element_count()-1)-idx]) << "|";
                  }
                }
                out.flags(f);
                out << std::endl;
                return out;
            }
        };
    } // end of namespace functors for template specialization of to_ostream for sse using uint64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
         * @details:
         * Target Extension: sse.
         *        Data Type: int64_t
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/io.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_ostream<simd<int64_t, sse>, Idof> {
            using Vec = simd<int64_t, sse>;
            
            using return_type = std::ostream &;
            using param_tuple_t = std::tuple<std::ostream &, typename Vec::register_type const, modifier>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {
                using cast_type = typename std::conditional_t<
                  (sizeof(typename Vec::base_type) <= 2),
                  std::conditional_t<
                    std::is_signed_v<typename Vec::base_type>,
                    int,
                    unsigned int
                  >,
                  typename Vec::base_type
                >;
                std::ios_base::fmtflags f(out.flags());
                if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
                } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
                } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
                } else {
                  out << std::dec;
                }
                for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                      out << std::bitset<sizeof(typename Vec::base_type)*8>{static_cast<unsigned long long>(data[(Vec::vector_element_count()-1)-idx])} << "|";
                  } else {
                      out << std::setw(sizeof(typename Vec::base_type)*8) << static_cast<cast_type>(data[(Vec::vector_element_count()-1)-idx]) << "|";
                  }
                }
                out.flags(f);
                out << std::endl;
                return out;
            }
        };
    } // end of namespace functors for template specialization of to_ostream for sse using int64_t.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
         * @details:
         * Target Extension: sse.
         *        Data Type: float
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/io.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_ostream<simd<float, sse>, Idof> {
            using Vec = simd<float, sse>;
            
            using return_type = std::ostream &;
            using param_tuple_t = std::tuple<std::ostream &, typename Vec::register_type const, modifier>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {
                using cast_type = typename std::conditional_t<
                  (sizeof(typename Vec::base_type) <= 2),
                  std::conditional_t<
                    std::is_signed_v<typename Vec::base_type>,
                    int,
                    unsigned int
                  >,
                  typename Vec::base_type
                >;
                std::ios_base::fmtflags f(out.flags());
                if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
                } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
                } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
                } else {
                  out << std::dec;
                }
                for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                      out << std::bitset<sizeof(typename Vec::base_type)*8>{static_cast<unsigned long long>(data[(Vec::vector_element_count()-1)-idx])} << "|";
                  } else {
                      out << std::setw(sizeof(typename Vec::base_type)*8) << static_cast<cast_type>(data[(Vec::vector_element_count()-1)-idx]) << "|";
                  }
                }
                out.flags(f);
                out << std::endl;
                return out;
            }
        };
    } // end of namespace functors for template specialization of to_ostream for sse using float.

    namespace functors {
        /**
         * @brief: Template specialization of implementation for "to_ostream" (primitive to_ostream).
         * @details:
         * Target Extension: sse.
         *        Data Type: double
         *  Extension Flags: ['sse2']
         *      Yaml Source: primitive_data/primitives/io.yaml::93
         */
        template<ImplementationDegreeOfFreedom Idof>
        struct to_ostream<simd<double, sse>, Idof> {
            using Vec = simd<double, sse>;
            
            using return_type = std::ostream &;
            using param_tuple_t = std::tuple<std::ostream &, typename Vec::register_type const, modifier>;
            static constexpr bool parameters_queryable() {
                return true;
            }
            static constexpr bool has_return_value() {
                return true;
            }
            static constexpr bool native_supported() {
                return true;
            }
            [[nodiscard]] 
            TSL_FORCE_INLINE 
            static std::ostream & apply(
                std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier
            ) {
                using cast_type = typename std::conditional_t<
                  (sizeof(typename Vec::base_type) <= 2),
                  std::conditional_t<
                    std::is_signed_v<typename Vec::base_type>,
                    int,
                    unsigned int
                  >,
                  typename Vec::base_type
                >;
                std::ios_base::fmtflags f(out.flags());
                if(ostream_modifier == modifier::HEX) {
                  out << std::hex;
                } else if(ostream_modifier == modifier::DEC) {
                  out << std::dec;
                } else if(ostream_modifier == modifier::OCT) {
                  out << std::oct;
                } else {
                  out << std::dec;
                }
                for(std::size_t idx = 0; idx < Vec::vector_element_count(); ++idx ) {
                  if(ostream_modifier == modifier::BIN) {
                      out << std::bitset<sizeof(typename Vec::base_type)*8>{static_cast<unsigned long long>(data[(Vec::vector_element_count()-1)-idx])} << "|";
                  } else {
                      out << std::setw(sizeof(typename Vec::base_type)*8) << static_cast<cast_type>(data[(Vec::vector_element_count()-1)-idx]) << "|";
                  }
                }
                out.flags(f);
                out << std::endl;
                return out;
            }
        };
    } // end of namespace functors for template specialization of to_ostream for sse using double.

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DEFINITIONS_IO_IO_SSE_HPP