#include "AppendToStringTest.h"
#include "../src/Core/Test.h"

int test_append_with_string()
	{
	char appendChar = 'F';
	FakeString str = "Hello World. ";
	FakeString appendStr = "This string has been appendend.";
	FakeString expectedResult = "Hello World. This string has been appendend.";
	FakeString result;
	FakeTimer timer("AppendStringToStringTest V1");

	// V1
	result.Append(str);
	result.Append(appendStr);
	timer.Stop();
	if (!assert_equal(timer, result, expectedResult))
		{
		return -1;
		}

	// V2
	result.Clear();
	timer.Start("AppendStringToStringTest V2");
	result = str + appendStr;
	timer.Stop();
	if (!assert_equal(timer, result, expectedResult))
		{
		return -1;
		}

	// V3
	result.Clear();
	timer.Start("AppendStringToStringTest V3");
	result = str;
	result += appendStr;
	timer.Stop();
	if (!assert_equal(timer, result, expectedResult))
		{
		return -1;
		}

	// V4
	result.Clear();
	timer.Start("AppendStringToStringTest V4");
	result << str << appendStr;
	timer.Stop();
	if (!assert_equal(timer, result, expectedResult))
		{
		return -1;
		}

	return 0;
	}

int test_append_with_char()
	{
	char appendChar = 'F';
	FakeString str = "Hello World. ";
	FakeString expectedResult = "Hello World. F";
	FakeString result;
	FakeTimer timer("AppendCharToStringTest V1");

	// V1 - char
	result.Append(str);
	result.Append(appendChar);
	timer.Stop();
	if (!assert_equal(timer, result, expectedResult))
		{
		return -1;
		}

	// V2
	result.Clear();
	timer.Start("AppendCharToStringTest V2");
	result = str + appendChar;
	timer.Stop();
	if (!assert_equal(timer, result, expectedResult))
		{
		return -1;
		}

	// V3
	result.Clear();
	timer.Start("AppendCharToStringTest V3");
	result = str;
	result += appendChar;
	timer.Stop();
	if (!assert_equal(timer, result, expectedResult))
		{
		return -1;
		}

	// V4
	result.Clear();
	timer.Start("AppendCharToStringTest V4");
	result << str << appendChar;
	timer.Stop();
	if (!assert_equal(timer, result, expectedResult))
		{
		return -1;
		}

	return 0;
	}