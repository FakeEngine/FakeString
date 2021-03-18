#include "SplitStringTest.h"
#include "../src/Core/Test.h"

int test_split_string_vector_with_space()
	{
	FakeString str = "Hello World! Hello World! Hello World!";
	std::vector<FakeString> expectedStrArr;
	expectedStrArr.push_back("Hello");
	expectedStrArr.push_back("World!");
	expectedStrArr.push_back("Hello");
	expectedStrArr.push_back("World!");
	expectedStrArr.push_back("Hello");
	expectedStrArr.push_back("World!");

	FakeTimer timer("SplitStringVectorWithSpaceTest");
	std::vector<FakeString> result = str.Split(' ');
	timer.Stop();

	if (!assert_equal(timer, result, expectedStrArr))
		{
		return -1;
		}

	return 0;
	}

int test_split_string_string_with_space()
	{
	FakeString str = "Hello World! Hello World! Hello World!";
	FakeString expectedStrArr[6];
	expectedStrArr[0] = "Hello";
	expectedStrArr[1] = "World!";
	expectedStrArr[2] = "Hello";
	expectedStrArr[3] = "World!";
	expectedStrArr[4] = "Hello";
	expectedStrArr[5] = "World!";

	FakeTimer timer("SplitStringStringWithSpaceTest");
	uint32 wordCount = 0;
	FakeString *result = str.Split(' ', &wordCount);
	timer.Stop();

	if (!assert_equal(timer, result, wordCount, expectedStrArr, 6))
		{
		return -1;
		}

	return 0;
	}

int test_split_string_vector_with_comma()
	{
	FakeString str = "Hello,World,Hello,World,Hello,World";
	std::vector<FakeString> expectedStrArr;
	expectedStrArr.push_back("Hello");
	expectedStrArr.push_back("World");
	expectedStrArr.push_back("Hello");
	expectedStrArr.push_back("World");
	expectedStrArr.push_back("Hello");
	expectedStrArr.push_back("World");

	FakeTimer timer("SplitStringVectorWithCommaTest");
	std::vector<FakeString> result = str.Split(',');
	timer.Stop();

	if (!assert_equal(timer, result, expectedStrArr))
		{
		return -1;
		}

	return 0;
	}

int test_split_string_string_with_comma()
	{
	FakeString str = "Hello,World,Hello,World,Hello,World";
	FakeString expectedStrArr[6];
	expectedStrArr[0] = "Hello";
	expectedStrArr[1] = "World";
	expectedStrArr[2] = "Hello";
	expectedStrArr[3] = "World";
	expectedStrArr[4] = "Hello";
	expectedStrArr[5] = "World";

	FakeTimer timer("SplitStringStringWithCommaTest");
	uint32 wordCount = 0;
	FakeString *result = str.Split(',', &wordCount);
	timer.Stop();

	if (!assert_equal(timer, result, wordCount, expectedStrArr, 6))
		{
		return -1;
		}

	return 0;
	}
