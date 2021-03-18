#include "LowerCaseStringTest.h"
#include "../src/Core/Test.h"

int test_lower_case_string_test()
	{
	FakeString str = "HELLO WORLD!";
	FakeString expectedStr = "hello world!";

	FakeTimer timer("LowerCaseStringTest");
	FakeString result = str.ToLower();
	timer.Stop();

	if (!assert_equal(timer, result, expectedStr))
		{
		return -1;
		}

	return 0;
	}

