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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/include/generated/declarations/io.hpp
 * \date 2024-02-28
 * \brief Input/Output primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : 48d9b97 (48d9b974aa94a5b73824da4bb473bf36985664c7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DECLARATIONS_IO_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DECLARATIONS_IO_HPP

#include <ostream>
#include <iomanip>
#include <bitset>
#include <tuple>

namespace tsl {

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_TO_OSTREAM_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "to_ostream".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct to_ostream{};
    }

    /*
     * \brief Loads data from aligned memory into a vector register.
     * \details todo.
     * \param out 
     * \param data 
     * \param ostream_modifier 
     * \return 
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto to_ostream(
        std::ostream & out, typename Vec::register_type const data, modifier ostream_modifier=modifier::DEC
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::to_ostream<Vec, Idof>>::value,
      std::ostream &
    >{
        return functors::to_ostream<Vec, Idof>::apply(
            out, data, ostream_modifier
        );
    }

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DECLARATIONS_IO_HPP