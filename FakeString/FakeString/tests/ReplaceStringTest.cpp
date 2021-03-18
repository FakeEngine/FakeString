#include "ReplaceStringTest.h"
#include "../src/Core/Test.h"

int test_replace_string()
	{
	FakeString str = "Hello World!";
	FakeString testStr = "World!";

	FakeTimer timer("ReplaceStringTest");
	FakeString result = str.Replace("Hello ", testStr);
	timer.Stop();

	if (!assert_equal<FakeString>(timer, result, "World!World!"))
		{
		return -1;
		}

	return 0;
	}

int test_replace_all_strings()
	{
	FakeString str = "Hello World! World! World! World! World!";
	FakeString testStr = " World!";

	FakeTimer timer("ReplaceAllStringsTest");
	FakeString result = str.Replace(testStr, "Hello", -1);
	timer.Stop();

	if (!assert_equal<FakeString>(timer, result, "HelloHelloHelloHelloHelloHello"))
		{
		return -1;
		}

	return 0;
	}

int test_replace_all_letters()
	{
	FakeString str = "Hello World!";
	FakeString letter = "l";

	FakeTimer timer("ReplaceAllLettersTest");
	FakeString result = str.Replace(letter, "i", -1);
	timer.Stop();

	if (!assert_equal<FakeString>(timer, result, "Heiio Worid!"))
		{
		return -1;
		}

	return 0;
	}

int test_replace_remove_occurence()
	{
	FakeString str = "Hello World!";
	FakeString letters = "o";

	FakeTimer timer("ReplaceRemoveOccurenceTest");
	FakeString result = str.Replace(letters, "", -1);
	timer.Stop();

	if (!assert_equal<FakeString>(timer, result, "Hell Wrld!"))
		{
		return -1;
		}

	return 0;
	}

int test_replace_remove_all_occurences()
	{
	FakeString str = "Hello World! World! World! World! World! ";
	FakeString testStr = "World! ";

	FakeTimer timer("ReplaceRemoveAllOccurencesTest");
	FakeString result = str.Replace(testStr, "", -1);
	timer.Stop();

	if (!assert_equal<FakeString>(timer, result, "Hello "))
		{
		return -1;
		}

	return 0;
	}


