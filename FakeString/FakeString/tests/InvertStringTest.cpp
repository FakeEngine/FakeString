#include "InvertStringTest.h"
#include "../src/Core/Test.h"

int test_invert_string()
	{
	FakeString str = "Hello World!";
	FakeString expectedStr = "!dlroW olleH";

	FakeTimer timer("InvertStringTest");
	FakeString result = str.Reverse();
	timer.Stop();

	if (!assert_equal(timer, result, expectedStr))
		{
		return -1;
		}

	return 0;
	}

