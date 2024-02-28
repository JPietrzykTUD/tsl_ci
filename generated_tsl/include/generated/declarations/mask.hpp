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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/include/generated/declarations/mask.hpp
 * \date 2024-02-28
 * \brief Mask related primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : 48d9b97 (48d9b974aa94a5b73824da4bb473bf36985664c7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DECLARATIONS_MASK_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DECLARATIONS_MASK_HPP

#include <tuple>

namespace tsl {

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_TO_INTEGRAL_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "to_integral".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct to_integral{};
    }

    /*
     * \brief Forms an integral value from the most significant bits of every lane in a vector mask register.
     * \details todo.
     * \param vec_mask Vector mask register containing mask style data.
     * \return Integral value representing of the vector mask register.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto to_integral(
        const typename Vec::mask_type vec_mask
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::to_integral<Vec, Idof>>::value,
      typename Vec::imask_type
    >{
        return functors::to_integral<Vec, Idof>::apply(
            vec_mask
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_TO_VECTOR_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "to_vector".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct to_vector{};
    }

    /*
     * \brief Forms an vector register from an integral where all bits are set in a lane if the corresponding mask bit is set to 1.
     * \details todo.
     * \param mask Vector mask register containing mask style data.
     * \return Integral value representing the vector mask register.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto to_vector(
        const typename Vec::mask_type mask
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::to_vector<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::to_vector<Vec, Idof>::apply(
            mask
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_TO_MASK_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "to_mask".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct to_mask{};
    }

    /*
     * \brief Forms a mask type from an integral.
     * \details todo.
     * \param mask Integral value representing the vector mask register.
     * \return Vector mask register containing mask style data.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto to_mask(
        const typename Vec::imask_type mask
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::to_mask<Vec, Idof>>::value,
      typename Vec::mask_type
    >{
        return functors::to_mask<Vec, Idof>::apply(
            mask
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_IMASK_BINARY_NOT_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "imask_binary_not".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct imask_binary_not{};
    }

    /*
     * \brief Binary NOT of a vector integral mask type.
     * \details todo.
     * \param mask Mask.
     * \return todo.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto mask_binary_not(
        const typename Vec::imask_type mask
    ) -> std::enable_if_t<
    #ifdef TSL_FUNCTORS_MASK_BINARY_NOT_STRUCT_DEFINED
      !tsl_primitive_ambiguous<functors::mask_binary_not<Vec, Idof>, functors::imask_binary_not<Vec, Idof>>(),
    #else
      true,
    #endif
      typename Vec::imask_type
    >{
        return functors::imask_binary_not<Vec, Idof>::apply(
            mask
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MASK_BINARY_AND_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "mask_binary_and".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct mask_binary_and{};
    }

    /*
     * \brief Binary AND of two vector mask types.
     * \details todo.
     * \param first First mask.
     * \param second Second mask.
     * \return Vector mask register containing the result.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto mask_binary_and(
        const typename Vec::mask_type first, const typename Vec::mask_type second
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::mask_binary_and<Vec, Idof>>::value,
      typename Vec::mask_type
    >{
        return functors::mask_binary_and<Vec, Idof>::apply(
            first, second
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_IMASK_BINARY_AND_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "imask_binary_and".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct imask_binary_and{};
    }

    /*
     * \brief Binary AND of two vector integral mask types.
     * \details todo.
     * \param first First mask.
     * \param second Second mask.
     * \return Vector mask register containing the result.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto mask_binary_and(
        const typename Vec::imask_type first, const typename Vec::imask_type second
    ) -> std::enable_if_t<
    #ifdef TSL_FUNCTORS_MASK_BINARY_AND_STRUCT_DEFINED
      !tsl_primitive_ambiguous<functors::mask_binary_and<Vec, Idof>, functors::imask_binary_and<Vec, Idof>>(),
    #else
      true,
    #endif
      typename Vec::imask_type
    >{
        return functors::imask_binary_and<Vec, Idof>::apply(
            first, second
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MASK_BINARY_OR_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "mask_binary_or".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct mask_binary_or{};
    }

    /*
     * \brief Binary OR of two vector mask types.
     * \details todo.
     * \param first First mask.
     * \param second Second mask.
     * \return Vector mask register containing the result.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto mask_binary_or(
        const typename Vec::mask_type first, const typename Vec::mask_type second
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::mask_binary_or<Vec, Idof>>::value,
      typename Vec::mask_type
    >{
        return functors::mask_binary_or<Vec, Idof>::apply(
            first, second
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MASK_BINARY_XOR_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "mask_binary_xor".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct mask_binary_xor{};
    }

    /*
     * \brief Binary XOR of two vector mask types.
     * \details todo.
     * \param first First mask.
     * \param second Second mask.
     * \return Vector mask register containing the result.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto mask_binary_xor(
        const typename Vec::mask_type first, const typename Vec::mask_type second
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::mask_binary_xor<Vec, Idof>>::value,
      typename Vec::mask_type
    >{
        return functors::mask_binary_xor<Vec, Idof>::apply(
            first, second
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_IMASK_POPULATION_COUNT_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "imask_population_count".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct imask_population_count{};
    }

    /*
     * \brief todo.
     * \details todo.
     * \param mask Mask.
     * \return Numer of bits set to 1.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto mask_population_count(
        const typename Vec::imask_type mask
    ) -> std::enable_if_t<
    #ifdef TSL_FUNCTORS_MASK_POPULATION_COUNT_STRUCT_DEFINED
      !tsl_primitive_ambiguous<functors::mask_population_count<Vec, Idof>, functors::imask_population_count<Vec, Idof>>(),
    #else
      true,
    #endif
      unsigned int
    >{
        return functors::imask_population_count<Vec, Idof>::apply(
            mask
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_INTEGRAL_ALL_TRUE_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "integral_all_true".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct integral_all_true{};
    }

    /*
     * \brief todo.
     * \details todo.
     * \return Integral value where all values are set to 1.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto integral_all_true(
        
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::integral_all_true<Vec, Idof>>::value,
      typename Vec::imask_type
    >{
        return functors::integral_all_true<Vec, Idof>::apply(
            
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_INTEGRAL_ALL_FALSE_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "integral_all_false".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct integral_all_false{};
    }

    /*
     * \brief todo.
     * \details todo.
     * \return Integral value where all values are set to 0.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto integral_all_false(
        
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::integral_all_false<Vec, Idof>>::value,
      typename Vec::imask_type
    >{
        return functors::integral_all_false<Vec, Idof>::apply(
            
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_LOAD_MASK_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "load_mask".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct load_mask{};
    }

    /*
     * \brief Loads data from memory to a mask.
     * \details todo.
     * \param memory Memory where the mask data should be loaded from.
     * \return Mask containing the loaded data.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto load_mask(
        typename Vec::imask_type const* memory
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::load_mask<Vec, Idof>>::value,
      typename Vec::mask_type
    >{
        return functors::load_mask<Vec, Idof>::apply(
            memory
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_LOAD_IMASK_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "load_imask".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct load_imask{};
    }

    /*
     * \brief Loads data from memory to a mask.
     * \details todo.
     * \param memory Memory where the mask data should be loaded from.
     * \return Mask containing the loaded data.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto load_imask(
        typename Vec::imask_type const* memory
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::load_imask<Vec, Idof>>::value,
      typename Vec::imask_type
    >{
        return functors::load_imask<Vec, Idof>::apply(
            memory
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_STORE_IMASK_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "store_imask".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct store_imask{};
    }

    /*
     * \brief Stores an integral mask to memory.
     * \details todo.
     * \param memory Memory where the mask data should be loaded from.
     * \param mask Mask to be stored.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    TSL_FORCE_INLINE auto store_imask(
        typename Vec::imask_type * memory, typename Vec::imask_type mask
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::store_imask<Vec, Idof>>::value,
      void
    >{
        functors::store_imask<Vec, Idof>::apply(
            memory, mask
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_TEST_IMASK_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "test_imask".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct test_imask{};
    }

    /*
     * \brief Tests whether a specific bit is set to 1.
     * \details todo.
     * \param mask Mask to be tested.
     * \param position Position that should be tested.
     * \return True if the bit is set to 1, false otherwise.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto test_mask(
        typename Vec::imask_type mask, int position
    ) -> std::enable_if_t<
    #ifdef TSL_FUNCTORS_TEST_MASK_STRUCT_DEFINED
      !tsl_primitive_ambiguous<functors::test_mask<Vec, Idof>, functors::test_imask<Vec, Idof>>(),
    #else
      true,
    #endif
      bool
    >{
        return functors::test_imask<Vec, Idof>::apply(
            mask, position
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_INSERT_IMASK_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "insert_imask".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct insert_imask{};
    }

    /*
     * \brief Merges two masks. result[0:i-1] = mask_a[0:i-1]; result[i:N-1] = mask_b[0:N-1] where N is the number of effective bits in mask.
     * \details todo.
     * \param mask_a First mask.
     * \param mask_b Second mask.
     * \param position Position where the masks should be merged.
     * \return Merged mask.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto insert_mask(
        typename Vec::imask_type mask_a, typename Vec::imask_type mask_b, int position
    ) -> std::enable_if_t<
    #ifdef TSL_FUNCTORS_INSERT_MASK_STRUCT_DEFINED
      !tsl_primitive_ambiguous<functors::insert_mask<Vec, Idof>, functors::insert_imask<Vec, Idof>>(),
    #else
      true,
    #endif
      typename Vec::imask_type
    >{
        return functors::insert_imask<Vec, Idof>::apply(
            mask_a, mask_b, position
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_EXTRACT_IMASK_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "extract_imask".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct extract_imask{};
    }

    /*
     * \brief Extracts one mask from another.
     * \details todo.
     * \param mask First mask.
     * \param position Position where the masks should be merged.
     * \return Extracted mask.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto extract_mask(
        typename Vec::imask_type mask, int position
    ) -> std::enable_if_t<
    #ifdef TSL_FUNCTORS_EXTRACT_MASK_STRUCT_DEFINED
      !tsl_primitive_ambiguous<functors::extract_mask<Vec, Idof>, functors::extract_imask<Vec, Idof>>(),
    #else
      true,
    #endif
      typename Vec::imask_type
    >{
        return functors::extract_imask<Vec, Idof>::apply(
            mask, position
        );
    }

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_GENERATED_DECLARATIONS_MASK_HPP