#include "StartsWithStringTest.h"
#include "../src/Core/Test.h"

int test_string_starts_with_letter()
	{
	FakeString str = "Hello World!";
	char letter = 'H';

	FakeTimer timer("StartsWithLetterTest");
	bool result = str.StartsWith(letter);
	timer.Stop();

	if (!assert_equal(timer, result, true))
		{
		return -1;
		}

	return 0;
	}

int test_string_starts_not_with_letter()
	{
	FakeString str = "Hello World!";
	char letter = 'i';

	FakeTimer timer("StartsNotWithLetterTest");
	bool result = str.StartsWith(letter);
	timer.Stop();

	if (!assert_equal(timer, result, false))
		{
		return -1;
		}

	return 0;
	}

int test_string_starts_with_string()
	{
	FakeString str = "Hello World!";
	FakeString testStr = "Hello";

	FakeTimer timer("StartsWithStringTest");
	bool result = str.StartsWith(testStr);
	timer.Stop();

	if (!assert_equal(timer, result, true))
		{
		return -1;
		}

	return 0;
	}

int test_string_starts_not_with_string()
	{
	FakeString str = "Hello World!";
	FakeString testStr = "JohnDoe";

	FakeTimer timer("StartsNotWithString");
	bool result = str.StartsWith(testStr);
	timer.Stop();

	if (!assert_equal(timer, result, false))
		{
		return -1;
		}

	return 0;
	}

