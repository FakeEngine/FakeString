#include "IndexOfStringTest.h"
#include "../src/Core/Test.h"

int test_index_of_letter()
	{
	FakeString str = "Hello World!";
	char letter = '!';

	FakeTimer timer("IndexOfLetterTest");
	uint32 pos = str.IndexOf(letter);
	timer.Stop();

	if (!assert_equal(timer, pos, str.Length() - 1))
		{
		return -1;
		}

	return 0;
	}

int test_index_of_string()
	{
	FakeString str = "Hello World!";
	FakeString testStr = "World";

	FakeTimer timer("IndexOfStringTest");
	int32 pos = str.IndexOf(testStr);
	timer.Stop();

	if (!assert_equal(timer, pos, 6))
		{
		return -1;
		}

	return 0;
	}

int test_index_of_not_letter()
	{
	FakeString str = "Hello World!";
	char letter = 'i';

	FakeTimer timer("IndexOfNotLetterTest");
	uint32 pos = str.IndexOf(letter);
	timer.Stop();

	if (!assert_equal(timer, pos, FakeString::NPOS))
		{
		return -1;
		}

	return 0;
	}

int test_index_of_not_string()
	{
	FakeString str = "Hello World!";
	FakeString testStr = "JohnDoe";

	FakeTimer timer("IndexOfNotStringTest");
	uint32 pos = str.IndexOf(testStr);
	timer.Stop();

	if (!assert_equal(timer, pos, FakeString::NPOS))
		{
		return -1;
		}

	return 0;
	}

