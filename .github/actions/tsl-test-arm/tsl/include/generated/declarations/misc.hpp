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
 * \file /github/workspace/ci/generation/neon/include/generated/declarations/misc.hpp
 * \date 2024-03-08
 * \brief Miscellaneous primitives.
 * \note
 * Git-Local Url : /github/workspace
 * Git-Remote Url: unknown url
 * Git-Branch    : unknown branch
 * Git-Commit    : unknown commit (unknown commit)
 *
 */
#ifndef TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DECLARATIONS_MISC_HPP
#define TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DECLARATIONS_MISC_HPP

#include <tuple>

namespace tsl {

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_CONFLICT_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "conflict".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct conflict{};
    }

    /*
     * \brief Checks whether all elements are unique in a register.
     * \details todo.
     * \param data Data vector.
     * \return Vector containing result of the uniqueness check.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto conflict(
        [[maybe_unused]] const typename Vec::register_type data
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::conflict<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::conflict<Vec, Idof>::apply(
            data
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_IMASK_CONFLICT_FREE_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "imask_conflict_free".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct imask_conflict_free{};
    }

    /*
     * \brief Checks whether all elements are unique in a register and returns a mask indicating which elements don't have preceeding conflicts.
     * \details todo.
     * \param mask Mask indicating which lanes should be considered for conflict detection. Be aware, that non-valid lanes can still conflict with others.
     * \param data Data vector.
     * \return integral mask containing result of the uniqueness check.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto conflict_free(
        [[maybe_unused]] const typename Vec::imask_type mask, [[maybe_unused]] const typename Vec::register_type data
    ) -> std::enable_if_t<
    #ifdef TSL_FUNCTORS_CONFLICT_FREE_STRUCT_DEFINED
      !tsl_primitive_ambiguous<functors::conflict_free<Vec, Idof>, functors::imask_conflict_free<Vec, Idof>>(),
    #else
      true,
    #endif
      typename Vec::imask_type
    >{
        return functors::imask_conflict_free<Vec, Idof>::apply(
            mask, data
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_BLEND_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "blend".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct blend{};
    }

    /*
     * \brief Blends two registers using provided bitmask.
     * \details todo.
     * \param control If control[i] == 0, the corresponding value from left register is used, from right otherwise.
     * \param left Left data.
     * \param right Right data.
     * \return Vector containing blended data.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto blend(
        const typename Vec::mask_type control, const typename Vec::register_type left, const typename Vec::register_type right
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::blend<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::blend<Vec, Idof>::apply(
            control, left, right
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_IMASKZ_MOV_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "imaskz_mov".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct imaskz_mov{};
    }

    /*
     * \brief Copy elements from a vector, where the mask bit it set, otherwise write zero
     * \details todo.
     * \param mask Mask of elements to change.
     * \param src Base Vector.
     * \return Base Vector, with the elements specified by mask changed to value.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto maskz_mov(
        const typename Vec::imask_type mask, const typename Vec::register_type src
    ) -> std::enable_if_t<
    #ifdef TSL_FUNCTORS_MASKZ_MOV_STRUCT_DEFINED
      !tsl_primitive_ambiguous<functors::maskz_mov<Vec, Idof>, functors::imaskz_mov<Vec, Idof>>(),
    #else
      true,
    #endif
      typename Vec::register_type
    >{
        return functors::imaskz_mov<Vec, Idof>::apply(
            mask, src
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MASK_MOV_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "mask_mov".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct mask_mov{};
    }

    /*
     * \brief Merge two vectors while picking the source of each element based on the corresponding mask bit
     * \details todo.
     * \param src Vector to pick elements from if mask bit is 0
     * \param mask Mask of elements to change.
     * \param data Vector to pick elements from if mask bit is 1
     * \return Base Vector, with the elements specified by mask changed to value.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto mask_mov(
        const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::register_type data
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::mask_mov<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::mask_mov<Vec, Idof>::apply(
            src, mask, data
        );
    }

} // end of namespace tsl
#endif //TUD_D2RG_TSL_GITHUB_WORKSPACE_CI_GENERATION_NEON_INCLUDE_GENERATED_DECLARATIONS_MISC_HPP