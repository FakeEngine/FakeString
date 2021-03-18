#include "LastIndexOfStringTest.h"
#include "../src/Core/Test.h"

int test_last_index_of_letter()
	{
	FakeString str = "Hello World!";
	char letter = 'o';

	FakeTimer timer("LastIndexOfLetterTest");
	int32 pos = str.LastIndexOf(letter);
	timer.Stop();

	if (!assert_equal(timer, pos, 7))
		{
		return -1;
		}

	return 0;
	}

int test_last_index_of_string()
	{
	FakeString str = "Hello World World!";
	FakeString testStr = "World";

	FakeTimer timer("LastIndexOfStringTest");
	int32 pos = str.LastIndexOf(testStr);
	timer.Stop();

	if (!assert_equal(timer, pos, 18)) // Returns second World index
		{
		return -1;
		}

	return 0;
	}

int test_last_index_of_not_letter()
	{
	FakeString str = "Hello World!";
	char letter = 'i';

	FakeTimer timer("LastIndexOfNotLetterTest");
	uint32 pos = str.LastIndexOf(letter);
	timer.Stop();

	if (!assert_equal(timer, pos, FakeString::NPOS))
		{
		return -1;
		}

	return 0;
	}

int test_last_index_of_not_string()
	{
	FakeString str = "Hello World!";
	FakeString testStr = "JohnDoe";

	FakeTimer timer("LastIndexOfNotStringTest");
	uint32 pos = str.LastIndexOf(testStr);
	timer.Stop();

	if (!assert_equal(timer, pos, FakeString::NPOS))
		{
		return -1;
		}

	return 0;
	}

