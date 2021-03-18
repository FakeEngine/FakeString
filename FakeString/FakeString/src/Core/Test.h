/*
 * \file  Test.h
 * \brief Functions in this file build the base of every unit test of this project.
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

#ifndef TEST_H
#define TEST_H

#include <functional>
#include <iostream>
#include <locale>
#include <codecvt>
#include <algorithm>

#include "FakeAssert.h"
#include "FakeTimer.h"
#include "FakeConsole.h"
#include "../FakeString.h"

using TestFn = std::function<int()>;

int perform_tests(TestFn funcs[], uint32 count);

bool assert_equal(const FakeTimer &timer, const char *str1, wchar_t *str2);
bool assert_not_equal(const FakeTimer &timer, const char *str1, wchar_t *str2);

bool assert_equal(const FakeTimer &timer, const std::vector<FakeString> &arr1, const std::vector<FakeString> &arr2);
bool assert_not_equal(const FakeTimer &timer, const std::vector<FakeString> &arr1, const std::vector<FakeString> &arr2);

bool assert_equal(const FakeTimer &timer, FakeString *arr1, uint32 count1, FakeString *arr2, uint32 count2);
bool assert_not_equal(const FakeTimer &timer, FakeString *arr1, uint32 count1, FakeString *arr2, uint32 count2);

template<typename T>
inline static bool assert_equal(const FakeTimer &timer, const T &str1, const T &str2)
	{
	FAKE_ASSERT(str1 == str2, timer.GetName());

	Ref<FakeConsole> console = FakeConsole::Create();
	FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
	FakeConsoleBackground background = FakeConsoleBackground::BLACK;
	console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);

	return true;
	}

template<typename T>
inline static bool assert_not_equal(const FakeTimer &timer, const T &str1, const T &str2)
	{
	FAKE_ASSERT(str1 != str2, timer.GetName());

	Ref<FakeConsole> console = FakeConsole::Create();
	FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
	FakeConsoleBackground background = FakeConsoleBackground::BLACK;
	console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);

	return false;
	}

#endif