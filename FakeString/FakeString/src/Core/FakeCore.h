/*
 * \file  FakeCore.h
 * \brief Contains base definitions that would be made by the engine itself.
 *
 * \author Can Karka
 * \date   March 2021
 *
 * Copyright (C) 2021 Can Karka
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FAKE_CORE_H
#define FAKE_CORE_H

#include <memory>

typedef unsigned int uint32;
typedef signed int int32;
typedef unsigned long long uint64;
typedef signed long long int64;

template<typename T>
using Ref = std::shared_ptr<T>;

template<typename T, typename ... Args>
constexpr Ref<T> CreateRef(Args&& ... args)
	{
	return std::make_shared<T>(std::forward<Args>(args)...);
	}

#endif
