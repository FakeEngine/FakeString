#include "ResizeStringTest.h"
#include "../src/Core/Test.h"

int test_resize_string()
	{
	FakeString str = "Hello World!";
	FakeString strToCopy = "LOL";
	FakeString result;

	FakeTimer timer("ResizeStringTest");
	result.Resize(strToCopy.Length());
	memcpy(*result, *strToCopy, strToCopy.Length());
	timer.Stop();

	if (!assert_equal<FakeString>(timer, result, "LOL"))
		{
		return -1;
		}

	return 0;
	}

