#include "FirstIndexNotOfStringTest.h"
#include "../src/Core/Test.h"

int test_first_index_not_of_string()
	{
	FakeString str = "Hello World!";
	FakeString testStr = "Hello";

	FakeTimer timer("FirstIndexNotOfStringTest");
	int32 pos = str.FirstIndexNotOf(testStr);
	timer.Stop();

	if (!assert_equal(timer, pos, 5)) // Letter: position of ' ' is going to be returned
		{
		return -1;
		}

	return 0;
	}

int test_first_index_not_of_letter()
	{
	FakeString str = "Hello World!";
	char letter = 'H';

	FakeTimer timer("FirstIndexNotOfLetterTest");
	int32 pos = str.FirstIndexNotOf(letter);
	timer.Stop();

	if (!assert_equal(timer, pos, 1)) // Letter: position of first e is going to be returned
		{
		return -1;
		}

	return 0;
	}

int test_first_index_not_of_not_string()
	{
	FakeString str = "Hello World!";
	FakeString testStr = "JohnDoe";

	FakeTimer timer("FirstIndexNotOfNotString");
	int32 pos = str.FirstIndexNotOf(testStr);
	timer.Stop();

	if (!assert_equal(timer, pos, 0)) // First word is going to be returned, because JohnDoe does not exist in str
		{
		return -1;
		}

	return 0;
	}

int test_first_index_not_of_not_letter()
	{
	FakeString str = "Hello World!";
	char letter = 'i';

	FakeTimer timer("FirstIndexNotOfNotLetter");
	int32 pos = str.FirstIndexNotOf(letter);
	timer.Stop();

	if (!assert_equal(timer, pos, 0)) // First letter is going to be returned, because i does not exist in str
		{
		return -1;
		}

	return 0;
	}

