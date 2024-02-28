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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/include/static/utils/type_concepts.hpp
 * \date 2024-02-28
 * \brief TODO.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : 48d9b97 (48d9b974aa94a5b73824da4bb473bf36985664c7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_STATIC_UTILS_TYPE_CONCEPTS_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_STATIC_UTILS_TYPE_CONCEPTS_HPP

#include "type_helper.hpp"
#include <tuple>

namespace tsl {

    #ifdef TSL_USE_CONCEPTS
    #   include <concepts> //this is ugly, but the generator does not support conditional includes
        template<typename T> concept TSLArithmetic = std::is_arithmetic_v<T>;
        template<typename T> concept TSLConstArithmetic = TSLArithmetic<T> && std::is_const_v<T>;
        template<typename T> concept TSLArithmeticReference = std::is_reference_v<T> && TSLArithmetic<std::remove_reference_t<T>>;
        template<typename T> concept TSLArithmeticPointer = std::is_pointer_v<T> && TSLArithmetic<std::remove_pointer_t<T>>;
        template<typename T> concept TSLConstArithmeticPointer = TSLArithmeticPointer<T> && TSLConstArithmetic<std::remove_pointer_t<T>>;
        template<typename T> concept TSLTuple = is_tuple<T>::value;
    #else
    #   define TSLArithmetic typename
    #   define TSLConstArithmetic typename
    #   define TSLArithmeticReference typename
    #   define TSLArithmeticPointer typename
    #   define TSLConstArithmeticPointer typename
    #   define TSLTuple typename
    #endif

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_STATIC_UTILS_TYPE_CONCEPTS_HPP