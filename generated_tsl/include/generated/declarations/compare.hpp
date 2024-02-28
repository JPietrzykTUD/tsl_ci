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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/include/generated/declarations/compare.hpp
 * \date 2024-02-28
 * \brief Compare primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : 48d9b97 (48d9b974aa94a5b73824da4bb473bf36985664c7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DECLARATIONS_COMPARE_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DECLARATIONS_COMPARE_HPP

#include <tuple>

namespace tsl {

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_EQUAL_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "equal".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct equal{};
    }

    /*
     * \brief Compares two vector registers for equality.
     * \details todo.
     * \param vec_a Left vector.
     * \param vec_b Right vector.
     * \return Vector mask type indicating whether vec_a[*]==vec_b[*].
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto equal(
        const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::equal<Vec, Idof>>::value,
      typename Vec::mask_type
    >{
        return functors::equal<Vec, Idof>::apply(
            vec_a, vec_b
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MASK_EQUAL_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "mask_equal".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct mask_equal{};
    }

    /*
     * \brief Compares two vector registers for equality.
     * \details todo.
     * \param mask Mask, indicating which lanes should be checked for equality
     * \param vec_a Left vector.
     * \param vec_b Right vector.
     * \return Vector mask type indicating whether vec_a[*]==vec_b[*].
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto equal(
        const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
    ) -> std::enable_if_t<
    #ifdef TSL_FUNCTORS_EQUAL_STRUCT_DEFINED
      !tsl_primitive_ambiguous<functors::equal<Vec, Idof>, functors::mask_equal<Vec, Idof>>(),
    #else
      true,
    #endif
      typename Vec::mask_type
    >{
        return functors::mask_equal<Vec, Idof>::apply(
            mask, vec_a, vec_b
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_EQUAL_MASKS_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "equal_masks".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct equal_masks{};
    }

    /*
     * \brief Compares two imasks for equality.
     * \details todo.
     * \param mask_a Left vector.
     * \param mask_b Right vector.
     * \return bool indicating whether mask_a[*]==mask_b[*].
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto equal(
        const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
    ) -> std::enable_if_t<
    #ifdef TSL_FUNCTORS_EQUAL_STRUCT_DEFINED
      !tsl_primitive_ambiguous<functors::equal<Vec, Idof>, functors::equal_masks<Vec, Idof>>(),
    #else
      true,
    #endif
      bool
    >{
        return functors::equal_masks<Vec, Idof>::apply(
            mask_a, mask_b
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_NEQUAL_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "nequal".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct nequal{};
    }

    /*
     * \brief Compares two vector registers for inequality.
     * \details todo.
     * \param vec_a Left vector.
     * \param vec_b Right vector.
     * \return Vector mask type indicating whether vec_a[*]!=vec_b[*].
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto nequal(
        const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::nequal<Vec, Idof>>::value,
      typename Vec::mask_type
    >{
        return functors::nequal<Vec, Idof>::apply(
            vec_a, vec_b
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_EQUAL_AS_IMASK_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "equal_as_imask".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct equal_as_imask{};
    }

    /*
     * \brief Compares two registers for equality and returns an integral mask.
     * \details todo.
     * \param vec_a Left vector.
     * \param vec_b Right vector.
     * \return Integral mask indicating whether vec_a[*]==vec_b[*].
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto equal_as_imask(
        const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::equal_as_imask<Vec, Idof>>::value,
      typename Vec::imask_type
    >{
        return functors::equal_as_imask<Vec, Idof>::apply(
            vec_a, vec_b
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_NEQUAL_MASKS_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "nequal_masks".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct nequal_masks{};
    }

    /*
     * \brief Compares two imasks for non-equality.
     * \details todo.
     * \param mask_a Left vector.
     * \param mask_b Right vector.
     * \return bool indicating whether mask_a[*]==mask_b[*].
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto nequal(
        const typename Vec::imask_type mask_a, const typename Vec::imask_type mask_b
    ) -> std::enable_if_t<
    #ifdef TSL_FUNCTORS_NEQUAL_STRUCT_DEFINED
      !tsl_primitive_ambiguous<functors::nequal<Vec, Idof>, functors::nequal_masks<Vec, Idof>>(),
    #else
      true,
    #endif
      bool
    >{
        return functors::nequal_masks<Vec, Idof>::apply(
            mask_a, mask_b
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_LESS_THAN_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "less_than".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct less_than{};
    }

    /*
     * \brief Tests whether left elements are smaller than the corresponding right ones.
     * \details todo.
     * \param vec_a Left vector.
     * \param vec_b Right vector.
     * \return Vector mask type indicating whether vec_a[*] < vec_b[*].
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto less_than(
        const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::less_than<Vec, Idof>>::value,
      typename Vec::mask_type
    >{
        return functors::less_than<Vec, Idof>::apply(
            vec_a, vec_b
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_GREATER_THAN_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "greater_than".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct greater_than{};
    }

    /*
     * \brief Tests whether left elements are larger than or equal to the corresponding right ones.
     * \details todo.
     * \param vec_a Left vector.
     * \param vec_b Right vector.
     * \return Vector mask type indicating whether vec_a[*] > vec_b[*].
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto greater_than(
        const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::greater_than<Vec, Idof>>::value,
      typename Vec::mask_type
    >{
        return functors::greater_than<Vec, Idof>::apply(
            vec_a, vec_b
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_LESS_THAN_OR_EQUAL_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "less_than_or_equal".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct less_than_or_equal{};
    }

    /*
     * \brief Tests whether left elements are smaller than or equal to the corresponding right ones.
     * \details todo.
     * \param vec_a Left vector.
     * \param vec_b Right vector.
     * \return Vector mask type indicating whether vec_a[*] <= vec_b[*].
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto less_than_or_equal(
        const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::less_than_or_equal<Vec, Idof>>::value,
      typename Vec::mask_type
    >{
        return functors::less_than_or_equal<Vec, Idof>::apply(
            vec_a, vec_b
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_GREATER_THAN_OR_EQUAL_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "greater_than_or_equal".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct greater_than_or_equal{};
    }

    /*
     * \brief Tests whether left elements are larger than the corresponding right ones.
     * \details todo.
     * \param vec_a Left vector.
     * \param vec_b Right vector.
     * \return Vector mask type indicating whether vec_a[*] >= vec_b[*].
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto greater_than_or_equal(
        const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::greater_than_or_equal<Vec, Idof>>::value,
      typename Vec::mask_type
    >{
        return functors::greater_than_or_equal<Vec, Idof>::apply(
            vec_a, vec_b
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_BETWEEN_INCLUSIVE_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "between_inclusive".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct between_inclusive{};
    }

    /*
     * \brief Checks if the values of a vector are in a specific range (min[*] <= d[*] <= max[*]).
     * \details todo.
     * \param vec_data Data vector.
     * \param vec_min Minimum vector.
     * \param vec_max Maximum vector.
     * \return Vector mask type indicating whether the data is in the given range.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto between_inclusive(
        const typename Vec::register_type vec_data, const typename Vec::register_type vec_min, typename Vec::register_type const vec_max
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::between_inclusive<Vec, Idof>>::value,
      typename Vec::mask_type
    >{
        return functors::between_inclusive<Vec, Idof>::apply(
            vec_data, vec_min, vec_max
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_UNEQUAL_ZERO_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "unequal_zero".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct unequal_zero{};
    }

    /*
     * \brief Checks if the vector register contains at least one value unequal zero.
     * \details todo.
     * \param vec Operating Vector
     * \return Result indicating if the vector register contains at least one value unequal to zero.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto unequal_zero(
        const typename Vec::register_type vec
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::unequal_zero<Vec, Idof>>::value,
      bool
    >{
        return functors::unequal_zero<Vec, Idof>::apply(
            vec
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_COUNT_MATCHES_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "count_matches".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct count_matches{};
    }

    /*
     * \brief Counts number of matches of a chosen value within a vector register.
     * \details todo.
     * \param vec Operating Vector
     * \param val Compared value
     * \return Result of the count
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto count_matches(
        const typename Vec::register_type vec, const typename Vec::base_type val
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::count_matches<Vec, Idof>>::value,
      typename Vec::base_type
    >{
        return functors::count_matches<Vec, Idof>::apply(
            vec, val
        );
    }

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DECLARATIONS_COMPARE_HPP