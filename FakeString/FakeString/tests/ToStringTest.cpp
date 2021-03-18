#include "ToStringTest.h"
#include "../src/Core/Test.h"

int test_integer_to_string()
	{
	int value = 5;
	FakeString expected = "5";

	FakeTimer timer("IntToStringTest");
	FakeString result = FakeString::ToString(value);
	timer.Stop();

	if (!assert_equal(timer, result, expected))
		{
		return -1;
		}

	return 0;
	}

int test_float_to_string()
	{
	float value = 5.2f;
	FakeString expected = "5.2";

	FakeTimer timer("FloatToStringTest");
	FakeString result = FakeString::ToString(value);
	timer.Stop();

	if (!assert_equal(timer, result, expected))
		{
		return -1;
		}

	return 0;
	}

int test_double_to_string()
	{
	double value = 42.4;
	FakeString expected = "42.4";

	FakeTimer timer("DoubleToStringTest");
	FakeString result = FakeString::ToString(value);
	timer.Stop();

	if (!assert_equal(timer, result, expected))
		{
		return -1;
		}

	return 0;
	}

int test_bool_to_string()
	{
	bool value = true;
	FakeString expected = "1";

	FakeTimer timer("BoolToStringTest");
	FakeString result = FakeString::ToString(value);
	timer.Stop();

	if (!assert_equal(timer, result, expected))
		{
		return -1;
		}

	return 0;
	}

