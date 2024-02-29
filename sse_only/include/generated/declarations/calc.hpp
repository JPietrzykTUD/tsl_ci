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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/sse_only/include/generated/declarations/calc.hpp
 * \date 2024-02-29
 * \brief This file contains arithmetic primitives.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : d17f8eb (d17f8eb76bb8c5acffdd50fd389e77f1972f0fa7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DECLARATIONS_CALC_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DECLARATIONS_CALC_HPP

#include <array>
#include <cstddef>
#include <cmath>
#include <algorithm>
#include <tuple>

namespace tsl {

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_ADD_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "add".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct add{};
    }

    /*
     * \brief Adds two vector registers.
     * \details todo.
     * \param vec_a First vector.
     * \param vec_b Second vector.
     * \return Vector containing result of the addition.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto add(
        const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::add<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::add<Vec, Idof>::apply(
            vec_a, vec_b
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_SUB_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "sub".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct sub{};
    }

    /*
     * \brief Subtracts two vector registers.
     * \details todo.
     * \param vec_a First vector.
     * \param vec_b Second vector.
     * \return Vector containing result of the subtraction.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto sub(
        const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::sub<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::sub<Vec, Idof>::apply(
            vec_a, vec_b
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MASK_ADD_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "mask_add".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct mask_add{};
    }

    /*
     * \brief Adds two vector registers, depending on a mask: result[*] = (m[*])? vec_a[*]+vec_b[*] : vec_a[*].
     * \details todo.
     * \param mask Vector mask register indicating which elements should be added.
     * \param vec_a First vector.
     * \param vec_b Second vector.
     * \return Vector containing result of the addition.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto add(
        const typename Vec::mask_type mask, const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
    ) -> std::enable_if_t<
    #ifdef TSL_FUNCTORS_ADD_STRUCT_DEFINED
      !tsl_primitive_ambiguous<functors::add<Vec, Idof>, functors::mask_add<Vec, Idof>>(),
    #else
      true,
    #endif
      typename Vec::register_type
    >{
        return functors::mask_add<Vec, Idof>::apply(
            mask, vec_a, vec_b
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MUL_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "mul".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct mul{};
    }

    /*
     * \brief Multiplies two vector registers.
     * \details todo.
     * \param vec_a First vector.
     * \param vec_b Second vector.
     * \return Vector containing result of the multiplication.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto mul(
        const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::mul<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::mul<Vec, Idof>::apply(
            vec_a, vec_b
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MUL_CONSTANT_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "mul_constant".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct mul_constant{};
    }

    /*
     * \brief Multiplies a vector register with a constant.
     * \details todo.
     * \param vec_a First vector.
     * \param mul_var Multiply constant.
     * \return Vector containing result of the multiplication.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto mul(
        const typename Vec::register_type vec_a, const typename Vec::base_type mul_var
    ) -> std::enable_if_t<
    #ifdef TSL_FUNCTORS_MUL_STRUCT_DEFINED
      !tsl_primitive_ambiguous<functors::mul<Vec, Idof>, functors::mul_constant<Vec, Idof>>(),
    #else
      true,
    #endif
      typename Vec::register_type
    >{
        return functors::mul_constant<Vec, Idof>::apply(
            vec_a, mul_var
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_HADD_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "hadd".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct hadd{};
    }

    /*
     * \brief Reduces the elements to a sum.
     * \details todo.
     * \param value Input vector.
     * \return Scalar value after adding all elements in the vector.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto hadd(
        const typename Vec::register_type value
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::hadd<Vec, Idof>>::value,
      typename Vec::base_type
    >{
        return functors::hadd<Vec, Idof>::apply(
            value
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MIN_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "min".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct min{};
    }

    /*
     * \brief compares the values of 2 vectors and returns a vector with the minimum of each corrisponding values
     * \details todo.
     * \param vec_a First vector
     * \param vec_b Second vector
     * \return Vector containing result of the comparison
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto min(
        const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::min<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::min<Vec, Idof>::apply(
            vec_a, vec_b
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_DIV_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "div".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct div{};
    }

    /*
     * \brief Divides two vector registers.
     * \details todo.
     * \param vec_a First vector.
     * \param vec_b Second vector.
     * \return Vector containing result of the division.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto div(
        const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::div<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::div<Vec, Idof>::apply(
            vec_a, vec_b
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MOD_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "mod".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct mod{};
    }

    /*
     * \brief Operates the modulo operation on one datavector modulo another data vector.
     * \details todo.
     * \param vec_data Input Vector
     * \param vec_mod Modulo Vector
     * \return Resulting Vector
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto mod(
        const typename Vec::register_type vec_data, const typename Vec::register_type vec_mod
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::mod<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::mod<Vec, Idof>::apply(
            vec_data, vec_mod
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MOD_CONSTANT_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "mod_constant".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct mod_constant{};
    }

    /*
     * \brief Operates the modulo operation on one datavector modulo one input value.
     * \details todo.
     * \param vec Input Vector
     * \param val Modulo value
     * \return Resulting Vector
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto mod(
        const typename Vec::register_type vec, const typename Vec::base_type val
    ) -> std::enable_if_t<
    #ifdef TSL_FUNCTORS_MOD_STRUCT_DEFINED
      !tsl_primitive_ambiguous<functors::mod<Vec, Idof>, functors::mod_constant<Vec, Idof>>(),
    #else
      true,
    #endif
      typename Vec::register_type
    >{
        return functors::mod_constant<Vec, Idof>::apply(
            vec, val
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MOD_SAFE_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "mod_safe".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct mod_safe{};
    }

    /*
     * \brief Operates the modulo operation on one datavector modulo one input value.
     * \details todo.
     * \param vec Input Vector
     * \param val Modulo value
     * \return Resulting Vector
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto mod_safe(
        const typename Vec::register_type vec, const typename Vec::base_type val
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::mod_safe<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::mod_safe<Vec, Idof>::apply(
            vec, val
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_HMAX_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "hmax".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct hmax{};
    }

    /*
     * \brief Reduces the elements to the maximum value.
     * \details todo.
     * \param data Input vector.
     * \return Scalar value after adding all elements in the vector.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto hmax(
        const typename Vec::register_type data
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::hmax<Vec, Idof>>::value,
      typename Vec::base_type
    >{
        return functors::hmax<Vec, Idof>::apply(
            data
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_HMIN_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "hmin".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct hmin{};
    }

    /*
     * \brief Reduces the elements to the minimum value.
     * \details todo.
     * \param data Input vector.
     * \return Scalar value after adding all elements in the vector.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto hmin(
        const typename Vec::register_type data
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::hmin<Vec, Idof>>::value,
      typename Vec::base_type
    >{
        return functors::hmin<Vec, Idof>::apply(
            data
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MAX_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "max".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct max{};
    }

    /*
     * \brief compares the values of 2 vectors and returns a vector with the maximum of each corrisponding values
     * \details todo.
     * \param vec_a First vector
     * \param vec_b Second vector
     * \return Vector containing result of the comparison
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto max(
        const typename Vec::register_type vec_a, const typename Vec::register_type vec_b
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::max<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::max<Vec, Idof>::apply(
            vec_a, vec_b
        );
    }

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DECLARATIONS_CALC_HPP