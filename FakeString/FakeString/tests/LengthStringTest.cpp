#include "LengthStringTest.h"
#include "../src/Core/Test.h"

int test_length_of_string()
	{
	FakeString str = "Hello World!";

	FakeTimer timer("LengthOfStringTest");
	int32 len = str.Length();
	timer.Stop();

	if (!assert_equal(timer, len, 12))
		{
		return -1;
		}

	return 0;
	}

