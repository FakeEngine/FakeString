#include "EmptyStringTest.h"
#include "../src/Core/Test.h"

int test_empty_string()
	{
	FakeString str = "";
	FakeTimer timer("EmptyStringTest");
	bool result = str.IsEmpty();
	timer.Stop();

	if (!assert_equal(timer, result, true))
		{
		return -1;
		}

	return 0;
	}

int test_not_empty_string()
	{
	FakeString str = "HelloWorld";
	FakeTimer timer("NotEmptyStringTest");
	bool result = str.IsEmpty();
	timer.Stop();

	if (!assert_equal(timer, result, false))
		{
		return -1;
		}

	return 0;
	}

