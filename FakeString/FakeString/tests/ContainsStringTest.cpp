#include "ContainsStringTest.h"
#include "../src/Core/Test.h"

int test_contains_letter()
	{
	FakeString str = "Hello World!";
	char letter = '!';

	FakeTimer timer("StringContainsLetterTest");
	bool result = str.Contains(letter);
	timer.Stop();
	if (!assert_equal(timer, result, true))
		{
		return -1;
		}

	return 0;
	}

int test_contains_string()
	{
	FakeString str = "Hello World!";
	FakeString containsStr = "Hello";

	FakeTimer timer("StringContainsStringTest");
	bool result = str.Contains(containsStr);
	timer.Stop();
	if (!assert_equal(timer, result, true))
		{
		return -1;
		}

	return 0;
	}

int test_contains_not_letter()
	{
	FakeString str = "Hello World";
	char letter = '!';

	FakeTimer timer("StringContainsNotLetterTest");
	bool result = str.Contains(letter);
	timer.Stop();
	if (!assert_equal(timer, result, false))
		{
		return -1;
		}

	return 0;
	}

int test_contains_not_string()
	{
	FakeString str = "Hello World!";
	FakeString containsStr = "JohnDoe";

	FakeTimer timer("StringContainsNotStringTest");
	bool result = str.Contains(containsStr);
	timer.Stop();
	if (!assert_equal(timer, result, false))
		{
		return -1;
		}

	return 0;
	}

