#include "UpperCaseStringTest.h"
#include "../src/Core/Test.h"

int test_upper_case_string()
	{
	FakeString str = "hello world!";
	FakeString expectedStr = "HELLO WORLD!";

	FakeTimer timer("UpperCaseStringTest");
	FakeString result = str.ToUpper();
	timer.Stop();

	if (!assert_equal(timer, result, expectedStr))
		{
		return -1;
		}

	return 0;
	}

