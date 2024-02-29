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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/sse_only/include/generated/declarations/ls.hpp
 * \date 2024-02-29
 * \brief Load/Store primitives
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : d17f8eb (d17f8eb76bb8c5acffdd50fd389e77f1972f0fa7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DECLARATIONS_LS_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DECLARATIONS_LS_HPP

#include <array>
#include <tuple>

namespace tsl {

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_LOAD_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "load".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct load{};
    }

    /*
     * \brief Loads data from aligned memory into a vector register.
     * \details todo.
     * \param memory Aligned memory which should be transferred into a vector register.
     * \return Vector containing the loaded data.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto load(
        const typename Vec::base_type* memory
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::load<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::load<Vec, Idof>::apply(
            memory
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_LOADU_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "loadu".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct loadu{};
    }

    /*
     * \brief Loads data from (un)aligned memory into a vector register.
     * \details todo.
     * \param memory (Un)aligned memory which should be transferred into a vector register.
     * \return Vector containing the loaded data.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto loadu(
        const typename Vec::base_type* memory
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::loadu<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::loadu<Vec, Idof>::apply(
            memory
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_STORE_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "store".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct store{};
    }

    /*
     * \brief Stores data from a vector register to aligned memory.
     * \details todo.
     * \param memory Aligned memory where the data should be stored into.
     * \param data Vector containing the data.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    TSL_FORCE_INLINE auto store(
        typename Vec::base_type* memory, const typename Vec::register_type data
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::store<Vec, Idof>>::value,
      void
    >{
        functors::store<Vec, Idof>::apply(
            memory, data
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_STOREU_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "storeu".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct storeu{};
    }

    /*
     * \brief Stores data from a vector register to (un)aligned memory.
     * \details todo.
     * \param memory (Un)aligned memory where the data should be stored into.
     * \param data Vector containing the data.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    TSL_FORCE_INLINE auto storeu(
        typename Vec::base_type* memory, const typename Vec::register_type data
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::storeu<Vec, Idof>>::value,
      void
    >{
        functors::storeu<Vec, Idof>::apply(
            memory, data
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_TO_ARRAY_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "to_array".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct to_array{};
    }

    /*
     * \brief Stores SIMD register to array.
     * \details todo.
     * \param data Data register.
     * \return Array containing the values from data.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto to_array(
        const typename Vec::register_type data
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::to_array<Vec, Idof>>::value,
      __attribute__((__aligned__(Vec::vector_alignment()))) std::array<typename Vec::base_type, Vec::vector_element_count()>
    >{
        return functors::to_array<Vec, Idof>::apply(
            data
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_SET1_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "set1".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct set1{};
    }

    /*
     * \brief Broadcasts a single value into all lanes of a vector register.
     * \details todo.
     * \param value Value which should be broadcasted.
     * \return Vector containing the same value in all lanes.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto set1(
        const typename Vec::base_type value
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::set1<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::set1<Vec, Idof>::apply(
            value
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_SET_ZERO_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "set_zero".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct set_zero{};
    }

    /*
     * \brief Set all lanes to zero.
     * \details todo.
     * \return Vector containing 0 in all lanes.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto set_zero(
        
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::set_zero<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::set_zero<Vec, Idof>::apply(
            
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_SET_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "set".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct set{};
    }

    /*
     * \brief Transfers provided elements into a vector register.
     * \details todo.
     * \param args Values which should be transferred.
     * \return Vector register containing the values.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround, typename... Ts
    >
    [[nodiscard]] TSL_FORCE_INLINE auto set(
        Ts... args
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::set<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::set<Vec, Idof>::apply(
            args...
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_SEQUENCE_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "sequence".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct sequence{};
    }

    /*
     * \brief Creates a sequence [0..SIMD-Reg-Element-Count].
     * \details todo.
     * \return Vector register containing the sequence.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto sequence(
        
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::sequence<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::sequence<Vec, Idof>::apply(
            
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_CUSTOM_SEQUENCE_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "custom_sequence".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct custom_sequence{};
    }

    /*
     * \brief Creates a sequence.
     * \details todo.
     * \param start Start value for sequence.
     * \param stepwidth Stepwidth.
     * \return Vector register containing the sequence.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto custom_sequence(
        typename Vec::base_type start=0, [[maybe_unused]] typename Vec::base_type stepwidth=1
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::custom_sequence<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::custom_sequence<Vec, Idof>::apply(
            start, stepwidth
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_GATHER_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "gather".
        template<VectorProcessingStyle Vec, typename IndicesType, int N, ImplementationDegreeOfFreedom Idof>
        struct gather{};
    }

    /*
     * \brief Transfers data from arbitrary locations into a vector register.
     * \details todo.
     * \param memory (Start)pointer of the memory (which is used as base for address calculation).
     * \param index Offsets array containing simd<offset_t, EXTENSION> register_types containing relative offsets to the start pointer (the number of array elements depend on the sizeof(offset_type)/sizeof(base_type) ratio, where sizeof(offset_type) should be 8).
     * \param scale Scale.
     * \return Vector containing gathered data.
     */
    template<
        VectorProcessingStyle Vec,
        typename IndicesType = typename Vec::offset_register_type, int N = sizeof(typename Vec::base_type), ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto gather(
        const void* memory, const typename IndicesType::register_type index, [[maybe_unused]] std::integral_constant<int, N> scale=std::integral_constant<int, sizeof(typename Vec::base_type)>{}
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::gather<Vec, IndicesType, N, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::gather<Vec, IndicesType, N, Idof>::apply(
            memory, index, scale
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MASK_GATHER_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "mask_gather".
        template<VectorProcessingStyle Vec, typename IndicesType, int N, ImplementationDegreeOfFreedom Idof>
        struct mask_gather{};
    }

    /*
     * \brief If mask[i] is 1, load memory[index[i] * scale], otherwise use source[i]
     * \details todo.
     * \param mask Mask indicating which lanes should be gathered.
     * \param source Vector register containing values which should be preserved depending on the mask (if mask[i] == 0).
     * \param memory (Start)pointer of the memory (which is used as base for address calculation).
     * \param index Offsets array containing simd<offset_t, EXTENSION> register_types containing relative offsets to the start pointer (the number of array elements depend on the sizeof(offset_type)/sizeof(base_type) ratio, where sizeof(offset_type) should be 8).
     * \param scale Scale.
     * \return Vector containing gathered data.
     */
    template<
        VectorProcessingStyle Vec,
        typename IndicesType = typename Vec::offset_register_type, int N, ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto gather(
        const typename Vec::mask_type mask, const typename Vec::register_type source, const void* memory, const typename IndicesType::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
    ) -> std::enable_if_t<
    #ifdef TSL_FUNCTORS_GATHER_STRUCT_DEFINED
      !tsl_primitive_ambiguous<functors::gather<Vec, IndicesType, N, Idof>, functors::mask_gather<Vec, IndicesType, N, Idof>>(),
    #else
      true,
    #endif
      typename Vec::register_type
    >{
        return functors::mask_gather<Vec, IndicesType, N, Idof>::apply(
            mask, source, memory, index, scale
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_SCATTER_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "scatter".
        template<VectorProcessingStyle Vec, int N, ImplementationDegreeOfFreedom Idof>
        struct scatter{};
    }

    /*
     * \brief Transfers data from a vector register to an arbitrary locations.
     * \details todo.
     * \param data Vector register containing values which should be scattered to memory.
     * \param memory (Start)pointer of the memory (which is used as base for address calculation).
     * \param index Offsets array containing simd<offset_t, EXTENSION> register_types containing relative offsets to the start pointer (the number of array elements depend on the sizeof(offset_type)/sizeof(base_type) ratio, where sizeof(offset_type) should be 8).
     * \param scale Scale.
     */
    template<
        VectorProcessingStyle Vec,
        int N, ImplementationDegreeOfFreedom Idof = workaround
    >
    TSL_FORCE_INLINE auto scatter(
        const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::scatter<Vec, N, Idof>>::value,
      void
    >{
        functors::scatter<Vec, N, Idof>::apply(
            data, memory, index, scale
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MASK_SCATTER_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "mask_scatter".
        template<VectorProcessingStyle Vec, int N, ImplementationDegreeOfFreedom Idof>
        struct mask_scatter{};
    }

    /*
     * \brief Transfers data from a vector register to an arbitrary locations.
     * \details todo.
     * \param mask Mask indicating which lanes should be scattered.
     * \param data Vector register containing values which should be scattered to memory.
     * \param memory (Start)pointer of the memory (which is used as base for address calculation).
     * \param index Offsets array containing simd<offset_t, EXTENSION> register_types containing relative offsets to the start pointer (the number of array elements depend on the sizeof(offset_type)/sizeof(base_type) ratio, where sizeof(offset_type) should be 8).
     * \param scale Scale.
     */
    template<
        VectorProcessingStyle Vec,
        int N, ImplementationDegreeOfFreedom Idof = workaround
    >
    TSL_FORCE_INLINE auto scatter(
        const typename Vec::mask_type mask, const typename Vec::register_type data, void* memory, const typename Vec::offset_base_register_type index, [[maybe_unused]] std::integral_constant<int, N> scale
    ) -> std::enable_if_t<
    #ifdef TSL_FUNCTORS_SCATTER_STRUCT_DEFINED
      !tsl_primitive_ambiguous<functors::scatter<Vec, N, Idof>, functors::mask_scatter<Vec, N, Idof>>(),
    #else
      true,
    #endif
      void
    >{
        functors::mask_scatter<Vec, N, Idof>::apply(
            mask, data, memory, index, scale
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_COMPRESS_STORE_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "compress_store".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct compress_store{};
    }

    /*
     * \brief Stores elements from data consecutively, if the corresponding bit in mask is set to 1.
     * \details todo.
     * \param mask Mask
     * \param memory Memory
     * \param data Data
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    TSL_FORCE_INLINE auto compress_store(
        const typename Vec::imask_type mask, typename Vec::base_type* memory, const typename Vec::register_type data
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::compress_store<Vec, Idof>>::value,
      void
    >{
        functors::compress_store<Vec, Idof>::apply(
            mask, memory, data
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_MASKED_SET1_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "masked_set1".
        template<VectorProcessingStyle Vec, ImplementationDegreeOfFreedom Idof>
        struct masked_set1{};
    }

    /*
     * \brief Partially override a Vector with a single value.
     * \details todo.
     * \param src Base Vector.
     * \param mask Mask of elements to change.
     * \param value Value to set for elements where the mask bit is 1.
     * \return Base Vector, with the elements specified by mask changed to value.
     */
    template<
        VectorProcessingStyle Vec,
        ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto masked_set1(
        const typename Vec::register_type src, const typename Vec::imask_type mask, const typename Vec::base_type value
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::masked_set1<Vec, Idof>>::value,
      typename Vec::register_type
    >{
        return functors::masked_set1<Vec, Idof>::apply(
            src, mask, value
        );
    }

    namespace functors {
        // Definition of a preprocessor variable to detect overload ambiguity.
        #define TSL_FUNCTORS_EXTRACT_VALUE_STRUCT_DEFINED
        // Forward declaration of implementation struct for TSL-primitive "extract_value".
        template<VectorProcessingStyle Vec, const int Index, ImplementationDegreeOfFreedom Idof>
        struct extract_value{};
    }

    /*
     * \brief Extracts value on given index.
     * \details todo.
     * \param data todo.
     * \return Extracted value.
     */
    template<
        VectorProcessingStyle Vec,
        const int Index, ImplementationDegreeOfFreedom Idof = workaround
    >
    [[nodiscard]] TSL_FORCE_INLINE auto extract_value(
        const typename Vec::register_type data
    ) -> std::enable_if_t<
      tsl_functor_defined<functors::extract_value<Vec, Index, Idof>>::value,
      typename Vec::base_type
    >{
        return functors::extract_value<Vec, Index, Idof>::apply(
            data
        );
    }

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_SSE_ONLY_INCLUDE_GENERATED_DECLARATIONS_LS_HPP