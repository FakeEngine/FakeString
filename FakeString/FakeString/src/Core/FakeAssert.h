/*
 * \file  FakeAssert.h
 * \brief The internal Assert class, changed to fit the purpose of this project but copied from the FakeEngine.
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

#ifndef FAKE_ASSERT_H
#define FAKE_ASSERT_H

#define FAKE_ENABLE_ASSERTS 1

#ifdef FAKE_ENABLE_ASSERTS
#define FAKE_ASSERT(x, testName) { if(!(x)) { Ref<FakeConsole> console = FakeConsole::Create(); FakeConsoleForeground foreground = FakeConsoleForeground::RED; FakeConsoleBackground background = FakeConsoleBackground::BLACK; console->WriteLine("Error: Test " + testName + " has failed.", foreground, background); return false; } }
#else
#define FAKE_ASSERT(x)
#endif

#endif