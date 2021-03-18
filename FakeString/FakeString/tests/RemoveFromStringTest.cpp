#include "RemoveFromStringTest.h"
#include "../src/Core/Test.h"

int test_remove_string_from_string()
	{
	FakeString str = "Hello World!";
	FakeString strToRemove = "Hello";

	FakeTimer timer("RemoveStringFromStringTest");
	FakeString result = str.Remove(strToRemove);
	timer.Stop();

	if (!assert_equal<FakeString>(timer, result, " World!"))
		{
		return -1;
		}

	return 0;
	}

int test_remove_letter_from_string()
	{
	FakeString str = "Hello World!";
	char letterToRemove = 'l';

	FakeTimer timer("RemoveLetterFromStringTest");
	FakeString result = str.Remove(letterToRemove);
	timer.Stop();

	if (!assert_equal<FakeString>(timer, result, "Helo World!"))
		{
		return -1;
		}

	return 0;
	}

