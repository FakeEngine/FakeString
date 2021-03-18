#include "Test.h"

int perform_tests(TestFn funcs[], uint32 count)
	{
	FakeTimer timer("GlobalTimer");
	Ref<FakeConsole> console = FakeConsole::Create();
	FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
	FakeConsoleBackground background = FakeConsoleBackground::BLACK;

	for (uint32 i = 0; i < count; ++i)
		{
		int exitCode = funcs[i]();
		if (exitCode == -1)
			{
			foreground = FakeConsoleForeground::RED;
			console->WriteLine("Error: Some tests have failed!", foreground, background);
			return -1;
			}
		}

	timer.Stop();
	console->WriteLine("OK: All Tests have passed successfully!" + timer.GetOutputString(), foreground, background);
	return 0;
	}

bool assert_equal(const FakeTimer &timer, const char *str1, wchar_t *str2)
	{
	std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> conv;
	std::string result = conv.to_bytes(str2);

	FAKE_ASSERT(str1 == result, timer.GetName());

	Ref<FakeConsole> console = FakeConsole::Create();
	FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
	FakeConsoleBackground background = FakeConsoleBackground::BLACK;
	console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);

	return true;
	}

bool assert_not_equal(const FakeTimer &timer, const char *str1, wchar_t *str2)
	{
	std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> conv;
	std::string result = conv.to_bytes(str2);

	FAKE_ASSERT(str1 != result, timer.GetName());

	Ref<FakeConsole> console = FakeConsole::Create();
	FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
	FakeConsoleBackground background = FakeConsoleBackground::BLACK;
	console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);

	return false;
	}

bool assert_equal(const FakeTimer &timer, const std::vector<FakeString> &arr1, const std::vector<FakeString> &arr2)
	{
	FAKE_ASSERT(arr1.size() == arr2.size(), timer.GetName());

	int32 equalCount = 0;
	for (size_t i = 0; i < arr1.size(); ++i)
		{
		if (arr1[i] == arr2[i])
			{
			++equalCount;
			}
		}

	FAKE_ASSERT(equalCount == arr1.size(), timer.GetName());

	Ref<FakeConsole> console = FakeConsole::Create();
	FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
	FakeConsoleBackground background = FakeConsoleBackground::BLACK;
	console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);

	return true;
	}

bool assert_not_equal(const FakeTimer &timer, const std::vector<FakeString> &arr1, const std::vector<FakeString> &arr2)
	{
	FAKE_ASSERT(arr1.size() != arr2.size(), timer.GetName());

	int32 equalCount = 0;
	for (size_t i = 0; i < arr1.size(); ++i)
		{
		if (arr1[i] == arr2[i])
			{
			++equalCount;
			}
		}

	FAKE_ASSERT(equalCount != arr1.size(), timer.GetName());

	Ref<FakeConsole> console = FakeConsole::Create();
	FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
	FakeConsoleBackground background = FakeConsoleBackground::BLACK;
	console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);

	return false;
	}

bool assert_equal(const FakeTimer &timer, FakeString *arr1, uint32 count1, FakeString *arr2, uint32 count2)
	{
	FAKE_ASSERT(count1 == count2, timer.GetName());

	int32 equalCount = 0;
	for (size_t i = 0; i < count1; ++i)
		{
		if (arr1[i] == arr2[i])
			{
			++equalCount;
			}
		}

	FAKE_ASSERT(equalCount == count1, timer.GetName());

	Ref<FakeConsole> console = FakeConsole::Create();
	FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
	FakeConsoleBackground background = FakeConsoleBackground::BLACK;
	console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);

	return true;
	}

bool assert_not_equal(const FakeTimer &timer, FakeString *arr1, uint32 count1, FakeString *arr2, uint32 count2)
	{
	FAKE_ASSERT(count1 != count2, timer.GetName());

	int32 equalCount = 0;
	for (size_t i = 0; i < count1; ++i)
		{
		if (arr1[i] == arr2[i])
			{
			++equalCount;
			}
		}

	FAKE_ASSERT(equalCount != count1, timer.GetName());

	Ref<FakeConsole> console = FakeConsole::Create();
	FakeConsoleForeground foreground = FakeConsoleForeground::GREEN;
	FakeConsoleBackground background = FakeConsoleBackground::BLACK;
	console->WriteLine("OK: Test " + timer.GetName() + " has passed." + timer.GetOutputString(), foreground, background);

	return false;
	}

