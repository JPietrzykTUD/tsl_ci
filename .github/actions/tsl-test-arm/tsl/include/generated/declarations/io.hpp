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
 * \file /github/workspace/ci/generation/neon/include/generated/declarations/io.hpp
 * \date 2024-03-08
 * \brief Input/Output primitives.
 * \note
 * Git-Local Url : /github/workspace
 * Git-Remote Url: unknown url
 * Git-Branch    : unknown branch
 * Git-Commit    : unknown commit (unknown commit)
 *
 */
#ifndef TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DECLARATIONS_IO_HPP
#define TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DECLARATIONS_IO_HPP

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
#endif //TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DECLARATIONS_IO_HPP