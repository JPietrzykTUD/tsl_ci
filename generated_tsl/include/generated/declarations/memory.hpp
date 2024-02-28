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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/include/generated/declarations/memory.hpp
 * \date 2024-02-28
 * \brief Memory related primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : 48d9b97 (48d9b974aa94a5b73824da4bb473bf36985664c7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DECLARATIONS_MEMORY_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DECLARATIONS_MEMORY_HPP

#include <cstring>
#include <tuple>

namespace tsl {

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_ALLOCATE_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "allocate".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct allocate{};
    }

    /*
     * \brief Allocates (unaligned) contiguous memory.
     * \details todo.
     * \param count_bytes Number of bytes which should be allocated.
     * \return Pointer to allocated memory.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto allocate(
        std::size_t count_bytes
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::allocate<Vec, Idof>>::value,
      typename Vec::base_type*
    >{
        return functors::allocate<Vec, Idof>::apply(
            count_bytes
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_ALLOCATE_ALIGNED_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "allocate_aligned".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct allocate_aligned{};
    }

    /*
     * \brief Allocates aligned contiguous memory.
     * \details todo.
     * \param count_bytes Number of bytes which should be allocated.
     * \param alignment Alignment bytes.
     * \return Pointer to allocated memory.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto allocate_aligned(
        std::size_t count_bytes, [[maybe_unused]] std::size_t alignment
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::allocate_aligned<Vec, Idof>>::value,
      typename Vec::base_type*
    >{
        return functors::allocate_aligned<Vec, Idof>::apply(
            count_bytes, alignment
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_DEALLOCATE_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "deallocate".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct deallocate{};
    }

    /*
     * \brief Deallocates (possibly aligned) contiguous memory.
     * \details todo.
     * \param ptr Pointer to memory which should be deallocated.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    TSL_FORCE_INLINE auto deallocate(
        typename Vec::base_type* ptr
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::deallocate<Vec, Idof>>::value,
      void
    >{
        functors::deallocate<Vec, Idof>::apply(
            ptr
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MEMORY_CP_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "memory_cp".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct memory_cp{};
    }

    /*
     * \brief Copy memory.
     * \details todo.
     * \param dst Destination.
     * \param src Source.
     * \param count_bytes Number of bytes, which should be copied
     * \param copy_kind Which type of copy should be performed: {0: host->host, 1: host->device, 2: device->host, 3: device->device}
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    TSL_FORCE_INLINE auto memory_cp(
        typename Vec::base_type* dst, typename Vec::base_type const* src, std::size_t count_bytes, [[maybe_unused]] int copy_kind=0
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::memory_cp<Vec, Idof>>::value,
      void
    >{
        functors::memory_cp<Vec, Idof>::apply(
            dst, src, count_bytes, copy_kind
        );
    }

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DECLARATIONS_MEMORY_HPP