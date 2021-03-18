/*
 * \file  FakeTimer.h
 * \brief The internal Timer class, used by the FakeEngine.
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

#ifndef FAKE_TIMER_H
#define FAKE_TIMER_H

#include <chrono>

#include "../FakeString.h"

class FakeTimer
	{
	private:
		bool Stopped;
		FakeString Name;
		FakeString OutputString;
		std::chrono::time_point<std::chrono::high_resolution_clock> StartPoint;

	public:

		FakeTimer(const FakeString &name = "default");
		~FakeTimer();

		void Start(const FakeString &name = "");
		void Stop();

		const FakeString &GetName() const;
		const FakeString &GetOutputString() const;
		void PrintOutputString();
	};

#endif
