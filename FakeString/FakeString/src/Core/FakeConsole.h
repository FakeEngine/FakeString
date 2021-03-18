/*
 * \file  FakeConsole.h
 * \brief Implements a platform dependent base logging system, to print text in different colors to the console.
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

#ifndef FAKE_CONSOLE_H
#define FAKE_CONSOLE_H

#include <set>

#include "../FakeString.h"

enum class FakeConsoleTextStyle
	{
	NONE = 0,
	BOLD = 1,
	FAINT = 2,
	ITALIC = 3,
	UNDERLINE = 4,
	SLOW_BLINK = 5,
	RAPID_BLINK = 6,
	REVERSE = 7,
	};

enum class FakeConsoleForeground
	{
	NONE = 0,
	BLACK,
	DARK_RED,
	DARK_GREEN,
	DARK_YELLOW,
	DARK_BLUE,
	DARK_MAGENTA,
	DARK_CYAN,
	GRAY,
	DARK_GRAY,
	RED,
	GREEN,
	YELLOW,
	BLUE,
	MAGENTA,
	CYAN,
	WHITE
	};

enum class FakeConsoleBackground
	{
	NONE = 0,
	BLACK,
	DARK_RED,
	DARK_GREEN,
	DARK_YELLOW,
	DARK_BLUE,
	DARK_MAGENTA,
	DARK_CYAN,
	GRAY,
	DARK_GRAY,
	RED,
	GREEN,
	YELLOW,
	BLUE,
	MAGENTA,
	CYAN,
	WHITE
	};

class FakeConsole
	{
	public:
		virtual void SetColor(int32 color = 0x07) = 0;
		virtual void EnableVirtualTerminalProcessing() = 0;
		virtual void ResetTerminalFormat() = 0;
		virtual void SetVirtualTerminalFormat(FakeConsoleForeground foreground, FakeConsoleBackground background, std::set<FakeConsoleTextStyle> styles) = 0;
		virtual void Clear() = 0;
		virtual void Write(const FakeString &str, FakeConsoleForeground foreground = FakeConsoleForeground::NONE, FakeConsoleBackground background = FakeConsoleBackground::NONE, std::set<FakeConsoleTextStyle> styles = {}) = 0;
		virtual void WriteLine(const FakeString &str, FakeConsoleForeground foreground = FakeConsoleForeground::NONE, FakeConsoleBackground background = FakeConsoleBackground::NONE, std::set<FakeConsoleTextStyle> styles = {}) = 0;
		virtual void WriteLine() = 0;
		static Ref<FakeConsole> Create();
	};

#endif
