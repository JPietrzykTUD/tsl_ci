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
 * \file /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci/generated_tsl/include/static/utils/runtime.hpp
 * \date 2024-02-28
 * \brief Static header that defines the runtime.
 * \note
 * Git-Local Url : /home/jpietrzyk/tmp/TSL_ACTIONS/tsl_ci
 * Git-Remote Url: git@github.com:JPietrzykTUD/tsl_ci.git
 * Git-Branch    : main
 * Git-Commit    : 48d9b97 (48d9b974aa94a5b73824da4bb473bf36985664c7)
 *
 */
#ifndef TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_STATIC_UTILS_RUNTIME_HPP
#define TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_STATIC_UTILS_RUNTIME_HPP

#include <cstdlib>
#include <cstddef>
#include <utility>
#include <tuple>

namespace tsl {

    struct MEMORY_ON_HOST{};
    struct MEMORY_ON_DEVICE{};

    template<class ExecTarget>
      class executor {
        private:
          ExecTarget target;
        public:
          template<typename... Args>
            executor(Args&&... args)
            : target{std::forward<Args>(args)...} 
            {}
        public:
          
          template<typename T, typename... Args>
            auto allocate(Args&& ... args) {
              return target.template allocate<T>(std::forward<Args>(args)...);
            }
          template<typename T>
            void deallocate(T ptr) {
              return target.deallocate(ptr);
            }
          template<typename OutT, typename InT>
            void copy(OutT out, InT in, size_t element_count) {
              target.copy(out, in, element_count);
            }
        public:
          template<class Functor, typename... Args>
            decltype(auto) submit(Functor& fun, Args... args) {
              return target.template submit<Functor>(fun, args...);
            }
          template<class Functor, typename... Args>
            decltype(auto) submit(Functor&& fun, Args... args) {
              return target.template submit<Functor>(std::forward<Functor>(fun), args...);
          }
          template<VectorProcessingStyle PS, template<typename...> class Fun, typename... Args>
            decltype(auto) submit(Args... args) {
              return target.template submit<PS, Fun>(args...);
            }
          template<template<typename...> class Fun, typename... Args>
            decltype(auto) submit(Args... args) {
              return target.template submit<Fun>(args...);
            }
          template<typename BaseT, int VectorLength, template<typename...> class Fun, typename... Args>
            decltype(auto) submit(Args... args) {
              return target.template submit<BaseT, VectorLength, Fun, Args...>(args...);
            }
          template<class Fun, typename... Args>
            decltype(auto) submit(Args... args) {
              return target.template submit<Fun>(args...);
            }

          template<VectorProcessingStyle PS, template<typename...> class Fun, typename... Args>
            decltype(auto) detach(Args... args) {
              return target.template detach<PS, Fun>(args...);
            }
          template<template<typename...> class Fun, typename... Args>
            decltype(auto) detach(Args... args) {
              return target.template detach<Fun>(args...);
            }
          template<typename BaseT, int VectorLength, template<typename...> class Fun, typename... Args>
            decltype(auto) detach(Args... args) {
              return target.template detach<BaseT, VectorLength, Fun, Args...>(args...);
            }
          template<class Fun, typename... Args>
            decltype(auto) detach(Args... args) {
              return target.template detach<Fun>(args...);
            }

          template<TSLArithmetic T>
          static constexpr auto available_parallelism() {
            return ExecTarget::template available_parallelism<T>();
          }

          void wait() {
            target.wait();
          }
      };

} // end of namespace tsl
#endif //TUD_D2RG_TSL_HOME_JPIETRZYK_TMP_TSL_ACTIONS_TSL_CI_GENERATED_TSL_INCLUDE_STATIC_UTILS_RUNTIME_HPP