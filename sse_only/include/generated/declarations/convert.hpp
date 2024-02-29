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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/sse_only/include/generated/declarations/convert.hpp
 * \date 2024-02-29
 * \brief Conversion primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : d17f8eb (d17f8eb76bb8c5acffdd50fd389e77f1972f0fa7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DECLARATIONS_CONVERT_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DECLARATIONS_CONVERT_HPP

#include <tuple>

namespace tsl {

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_REINTERPRET_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "reinterpret".
        template<VectorProcessingStyle Vec, typename ToType, ImplementationDegreeOfFreedom Idof>
        struct reinterpret{};
    }

    /*
     * \brief todo.
     * \details todo.
     * \param data todo.
     * \return Casted register.
     */
    template<
        VectorProcessingStyle Vec,
        typename ToType, ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto reinterpret(
        const typename Vec::register_type data
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::reinterpret<Vec, ToType, Idof>>::value,
      typename ToType::register_type
    >{
        return functors::reinterpret<Vec, ToType, Idof>::apply(
            data
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_CAST_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "cast".
        template<VectorProcessingStyle Vec, typename ToType, ImplementationDegreeOfFreedom Idof>
        struct cast{};
    }

    /*
     * \brief todo.
     * \details todo.
     * \param data todo.
     * \return Casted SIMD register.
     */
    template<
        VectorProcessingStyle Vec,
        typename ToType, ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto cast(
        const typename Vec::register_type data
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::cast<Vec, ToType, Idof>>::value,
      typename ToType::register_type
    >{
        return functors::cast<Vec, ToType, Idof>::apply(
            data
        );
    }

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DECLARATIONS_CONVERT_HPP