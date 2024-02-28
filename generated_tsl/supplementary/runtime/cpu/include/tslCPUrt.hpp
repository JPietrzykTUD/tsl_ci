#ifndef TSL_SUPPLEMENTARY_RUNTIME_CPU_TSLCPURT_HPP
#define TSL_SUPPLEMENTARY_RUNTIME_CPU_TSLCPURT_HPP
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <type_traits>
#include <climits>

namespace tsl {
  namespace runtime {
    class cpu {
      public:
        using max_width_extension_t = avx2;
        using min_width_extension_t = avx2;
        using available_extensions_tuple = 
          std::tuple< 
            scalar,
            avx2 
          > ;
        template<typename T>
        using available_vector_processing_styles_tuple = 
          std::tuple< 
            simd<T, scalar>,
            simd<T, avx2> 
          > ;
      public:
        cpu() = default;
      public:
        template<typename T>
          auto allocate(size_t element_count, size_t alignment = 0) {
            T * buffer;
            if (alignment == 0) {
              if ((buffer = reinterpret_cast<T*>(malloc(element_count*sizeof(T)))) == nullptr) {
                std::cerr << "ERROR: could not allocate space on host" << std::endl;
                std::terminate();
              }
            } else {
              if ((buffer = reinterpret_cast<T*>(std::aligned_alloc(alignment, element_count*sizeof(T)))) == nullptr) {
                std::cerr << "ERROR: could not allocate space on host" << std::endl;
                std::terminate();
              }
            }
            return buffer;
          }
        template<typename T>
          void deallocate(T ptr) {
            if constexpr(std::is_pointer_v<std::remove_reference_t<T>>) {
              free(ptr);
            } else {
              std::cerr << "Can only free a pointer." << std::endl;
              std::terminate();
            }
            
          }
        template<typename OutT, typename InT>
          void copy(OutT out, InT in, size_t element_count) {
            if constexpr(
              std::is_pointer_v<std::remove_reference_t<OutT>> &&
              std::is_pointer_v<std::remove_reference_t<InT>>
            ) {
              std::memcpy(out, in, element_count*sizeof(InT));
            } else {
              for (size_t i = 0; i < element_count; ++i) {
                out[i] = in[i];
              }
            }
          }
      public:
        template<class Functor, typename... Args>
        decltype(auto) submit(Functor& fun, Args... args) {
          return fun(args...);
        }
        template<class Functor, typename... Args>
        decltype(auto) submit(Functor&& fun, Args... args) {
          return fun(args...);
        }
        template<VectorProcessingStyle PS, template<typename...> class Fun, typename... Args>
          decltype(auto) submit(Args... args) {
            return Fun<PS, Args...>::apply(args...);
          }
        template<template<typename...> class Fun, typename... Args>
          decltype(auto) submit(Args... args) {
            return Fun<Args...>::apply(args...);
          }
        template<typename BaseT, int VectorLength, template<typename...> class Fun, typename... Args>
          decltype(auto) submit(Args... args) {
            if constexpr(VectorLength == 1) {
              return Fun<simd<BaseT, scalar>, Args...>::apply(args...);
            } 
            else if constexpr(sizeof(BaseT)*CHAR_BIT*VectorLength == 256) {
              return Fun<simd<BaseT, avx2>, Args...>::apply(args...);
            }
            else {
              std::cerr << "ERROR: unsupported vector length" << std::endl;
              throw std::runtime_error("unsupported vector length");
            }
          }
        template<class Fun, typename... Args>
          decltype(auto) submit(Args... args) {
            return Fun::apply(args...);
          }

        template<class Fun, typename... Args>
          decltype(auto) detach(Args... args) {
            Fun::apply(args...);
          }
        
        template<TSLArithmetic BaseT>
          static constexpr std::array<uint32_t, 2> available_parallelism() {
          	return { 1, 256 / (sizeof(BaseT)*CHAR_BIT) };
          }

        void wait() { }
    };
  }
}
#endif