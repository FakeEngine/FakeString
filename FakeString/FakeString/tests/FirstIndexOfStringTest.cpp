#include "FirstIndexOfStringTest.h"
#include "../src/Core/Test.h"

int test_first_index_of_letter()
	{
	FakeString str = "Hello World!";
	char letter = 'H';

	FakeTimer timer("FirstIndexOfLetterTest");
	int32 pos = str.FirstIndexOf(letter);
	timer.Stop();

	if (!assert_equal(timer, pos, 0))
		{
		return -1;
		}

	return 0;
	}

int test_first_index_of_string()
	{
	FakeString str = "Hello World!";
	FakeString testStr = "World";

	FakeTimer timer("FirstIndexOfStringTest");
	int32 pos = str.FirstIndexOf(testStr);
	timer.Stop();

	if (!assert_equal(timer, pos, 6))
		{
		return -1;
		}

	return 0;
	}

int test_first_index_of_not_letter()
	{
	FakeString str = "Hello World!";
	char letter = 'i';

	FakeTimer timer("FirstIndexOfNotLetterTest");
	uint32 pos = str.FirstIndexOf(letter);
	timer.Stop();

	if (!assert_equal(timer, pos, FakeString::NPOS))
		{
		return -1;
		}

	return 0;
	}

int test_first_index_of_not_string()
	{
	FakeString str = "Hello World!";
	FakeString testStr = "JohnDoe";

	FakeTimer timer("FirstIndexOfNotStringTest");
	uint32 pos = str.FirstIndexOf(testStr);
	timer.Stop();

	if (!assert_equal(timer, pos, FakeString::NPOS))
		{
		return -1;
		}

	return 0;
	}
