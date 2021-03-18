#!/bin/bash
# 
# <c> 2021 by Can Karka

gcc FakeString/FakeString/src/Core/FakeConsole.cpp FakeString/FakeString/src/Core/FakeTimer.cpp FakeString/FakeString/src/Core/Test.cpp FakeString/FakeString/src/Platform/Unix/FakeUnixConsole.cpp FakeString/FakeString/src/FakeString.cpp FakeString/FakeString/src/Main.cpp FakeString/FakeString/tests/AppendToStringTest.cpp FakeString/FakeString/tests/AtStringIndexTest.cpp FakeString/FakeString/tests/ContainsStringTest.cpp FakeString/FakeString/tests/CStringTest.cpp FakeString/FakeString/tests/EmptyStringTest.cpp FakeString/FakeString/tests/EndsWithStringTest.cpp FakeString/FakeString/tests/FirstIndexNotOfStringTest.cpp FakeString/FakeString/tests/FirstIndexOfStringTest.cpp FakeString/FakeString/tests/IndexOfStringTest.cpp FakeString/FakeString/tests/InvertStringTest.cpp FakeString/FakeString/tests/LastIndexOfStringTest.cpp FakeString/FakeString/tests/LengthStringTest.cpp FakeString/FakeString/tests/LowerCaseStringTest.cpp FakeString/FakeString/tests/PrintStringTest.cpp FakeString/FakeString/tests/RemoveFromStringTest.cpp FakeString/FakeString/tests/ReplaceStringTest.cpp FakeString/FakeString/tests/ResizeStringTest.cpp FakeString/FakeString/tests/SplitStringTest.cpp FakeString/FakeString/tests/StartsWithStringTest.cpp FakeString/FakeString/tests/SubStringTest.cpp FakeString/FakeString/tests/ToStringTest.cpp FakeString/FakeString/tests/UpperCaseStringTest.cpp FakeString/FakeString/tests/WStringTest.cpp -std=c++14 -lstdc++ -g -DPLATFORM_LINUX -D_SILENCE_ALL_CXX17_DEPRECATION_WARNINGS -D_CRT_SECURE_NO_WARNINGS -o FakeStringUnitTests
