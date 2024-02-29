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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/sse_only/include/static/simd/simd_primitive_concepts.hpp
 * \date 2024-02-29
 * \brief TODO.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : d17f8eb (d17f8eb76bb8c5acffdd50fd389e77f1972f0fa7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_STATIC_SIMD_SIMD_PRIMITIVE_CONCEPTS_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_STATIC_SIMD_SIMD_PRIMITIVE_CONCEPTS_HPP

#include "../utils/type_concepts.hpp"
#include <tuple>

namespace tsl {

    #ifdef TSL_USE_CONCEPTS
        template<typename T>
        concept SimdPrimitiveImpl = requires {
            { T::native_supported() } -> std::same_as<bool>;
        } && (
            T::native_supported() || (! T::native_supported() ) 
        );
    #else
    #   define SimdPrimitiveImpl class
    #endif

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_STATIC_SIMD_SIMD_PRIMITIVE_CONCEPTS_HPP