#include "SubStringTest.h"
#include "../src/Core/Test.h"

int test_substring_first_5()
	{
	FakeString str = "Hello World!";
	FakeString expected = "Hello";
	
	FakeTimer timer("SubStringFirstFiveTest");
	FakeString result = str.Substr(0, 5);
	timer.Stop();

	if (!assert_equal(timer, result, expected))
		{
		return -1;
		}

	return 0;
	}

int test_substring_first_10()
	{
	FakeString str = "Hello World!";
	FakeString expected = "Hello Worl";
	
	FakeTimer timer("SubStringFirstTenTest");
	FakeString result = str.Substr(0, 10);
	timer.Stop();

	if (!assert_equal(timer, result, expected))
		{
		return -1;
		}

	return 0;
	}

int test_substring_last_5()
	{
	FakeString str = "Hello World!";
	FakeString expected = "orld!";

	FakeTimer timer("SubStringLastFiveTest");
	FakeString result = str.Substr(str.Length() - 5);
	timer.Stop();

	if (!assert_equal(timer, result, expected))
		{
		return -1;
		}

	return 0;
	}

int test_substring_last_10()
	{
	FakeString str = "Hello World!";
	FakeString expected = "llo World!";

	FakeTimer timer("SubStringFirstTenTest");
	FakeString result = str.Substr(str.Length() - 10);
	timer.Stop();

	if (!assert_equal(timer, result, expected))
		{
		return -1;
		}

	return 0;
	}
