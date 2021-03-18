#include "CStringTest.h"
#include "../src/Core/Test.h"

int test_convert_to_cstr()
	{
	FakeString str = "Hello World!";
	FakeTimer timer("StringConvertToCStrTest");
	char *result = str.C_Str();
	timer.Stop();
	if (!assert_equal<FakeString>(timer, "Hello World!", result))
		{
		return -1;
		}

	return 0;
	}

int test_convert_to_cstr_by_operator()
	{
	FakeString str = "Hello World!";
	FakeTimer timer("StringConvertToCStrByOperatorTest");
	char *result = *str;
	timer.Stop();
	if (!assert_equal<FakeString>(timer, "Hello World!", result))
		{
		return -1;
		}

	return 0;
	}

