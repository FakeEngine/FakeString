/*
 * \file  FakeLinuxConsole.h
 * \brief Implements a Linux specific implementation of the FakeConsole class.
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

#ifndef FAKE_UNIX_CONSOLE_H
#define FAKE_UNIX_CONSOLE_H

#include "../../Core/FakeConsole.h"

class FakeUnixConsole : public FakeConsole
	{
	private:



	public:

		virtual void SetColor(int32 color = 0x07) override;
		virtual void EnableVirtualTerminalProcessing() override;
		virtual void ResetTerminalFormat() override;
		virtual void SetVirtualTerminalFormat(FakeConsoleForeground foreground, FakeConsoleBackground background, std::set<FakeConsoleTextStyle> styles) override;
		virtual void Clear() override;
		virtual void Write(const FakeString &str, FakeConsoleForeground foreground = FakeConsoleForeground::NONE, FakeConsoleBackground background = FakeConsoleBackground::NONE, std::set<FakeConsoleTextStyle> styles = {}) override;
		virtual void WriteLine(const FakeString &str, FakeConsoleForeground foreground = FakeConsoleForeground::NONE, FakeConsoleBackground background = FakeConsoleBackground::NONE, std::set<FakeConsoleTextStyle> styles = {}) override;
		virtual void WriteLine() override;
	};

#endif
