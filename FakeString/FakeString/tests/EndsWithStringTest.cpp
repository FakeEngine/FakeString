#include "EndsWithStringTest.h"
#include "../src/Core/Test.h"

int test_string_ends_with_letter()
	{
	FakeString str = "Hello World!";
	char letter = '!';
	FakeTimer timer("StringEndsWithLetterTest");
	bool result = str.EndsWith(letter);
	timer.Stop();

	if (!assert_equal(timer, result, true))
		{
		return -1;
		}

	return 0;
	}

int test_string_ends_not_with_letter()
	{
	FakeString str = "Hello World!";
	char letter = 'H';
	FakeTimer timer("StringEndsWithLetterTest");
	bool result = str.EndsWith(letter);
	timer.Stop();

	if (!assert_equal(timer, result, false))
		{
		return -1;
		}

	return 0;
	}

int test_string_ends_with_string()
	{
	FakeString str = "Hello World!";
	FakeString endsStr = "World!";
	FakeTimer timer("StringEndsWithLetterTest");
	bool result = str.EndsWith(endsStr);
	timer.Stop();

	if (!assert_equal(timer, result, true))
		{
		return -1;
		}

	return 0;
	}

int test_string_ends_not_with_string()
	{
	FakeString str = "Hello World!";
	FakeString endsStr = "Hello!";
	FakeTimer timer("StringEndsWithLetterTest");
	bool result = str.EndsWith(endsStr);
	timer.Stop();

	if (!assert_equal(timer, result, false))
		{
		return -1;
		}

	return 0;
	}
