#include "WStringTest.h"
#include "../src/Core/Test.h"

int test_convert_to_wstr()
	{
	FakeString str = "Hello World!";
	FakeTimer timer("StringConvertToWStrTest");
	wchar_t *result = str.W_Str();
	timer.Stop();

	if (!assert_equal(timer, "Hello World!", result))
		{
		return -1;
		}

	return 0;
	}

