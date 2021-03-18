#include "AtStringIndexTest.h"
#include "../src/Core/Test.h"

int test_at_function()
	{
	FakeString str = "Hello World!";

	FakeTimer timer("StringAtPos0Test");
	char charAtPos0 = str.At(0);
	timer.Stop();
	if (!assert_equal(timer, charAtPos0, 'H'))
		{
		return -1;
		}

	timer.Start("StringAtPos1Test");
	char charAtPos1 = str.At(1);
	timer.Stop();
	if (!assert_equal(timer, charAtPos1, 'e'))
		{
		return -1;
		}

	timer.Start("StringAtPos2Test");
	char charAtPos2 = str.At(2);
	timer.Stop();
	if (!assert_equal(timer, charAtPos2, 'l'))
		{
		return -1;
		}

	timer.Start("StringAtPos3Test");
	char charAtPos3 = str.At(3);
	timer.Stop();
	if (!assert_equal(timer, charAtPos3, 'l'))
		{
		return -1;
		}

	timer.Start("StringAtLastPosTest");
	char charAtLastPos = str.At(str.Length() - 1);
	timer.Stop();
	if (!assert_equal(timer, charAtLastPos, '!'))
		{
		return -1;
		}

	return 0;
	}

int test_array_index_operator()
	{
	FakeString str = "Hello World!";
	
	FakeTimer timer("StringAtPos0ArrayIndexOperatorTest");
	char charAt0Pos = str[0];
	timer.Stop();
	if (!assert_equal(timer, charAt0Pos, 'H'))
		{
		return -1;
		}

	timer.Start("StringAtPos1ArrayIndexOperatorTest");
	char charAt1Pos = str[1];
	timer.Stop();
	if (!assert_equal(timer, charAt1Pos, 'e'))
		{
		return -1;
		}

	timer.Start("StringAtPos2ArrayIndexOperatorTest");
	char charAt2Pos = str[2];
	timer.Stop();
	if (!assert_equal(timer, charAt2Pos, 'l'))
		{
		return -1;
		}
	
	timer.Start("StringAtPos3ArrayIndexOperatorTest");
	char charAt3Pos = str[3];
	timer.Stop();
	if (!assert_equal(timer, charAt3Pos, 'l'))
		{
		return -1;
		}

	timer.Start("StringAtLastPosArrayIndexOperatorTest");
	char charAtLastPos = str[str.Length() - 1];
	timer.Stop();
	if (!assert_equal(timer, charAtLastPos, '!'))
		{
		return -1;
		}

	return 0;
	}

int test_dereferencing_operator()
	{
	FakeString str = "Hello World!";

	FakeTimer timer("StringAtPos0DereferencingOperatorTest");
	char charAtPos0 = (*str)[0];
	timer.Stop();
	if (!assert_equal(timer, charAtPos0, 'H'))
		{
		return -1;
		}

	timer.Start("StringAtPos1DereferencingOperatorTest");
	char charAtPos1 = (*str)[1];
	timer.Stop();
	if (!assert_equal(timer, charAtPos1, 'e'))
		{
		return -1;
		}

	timer.Start("StringAtPos2DereferencingOperatorTest");
	char charAtPos2 = (*str)[2];
	timer.Stop();
	if (!assert_equal(timer, charAtPos2, 'l'))
		{
		return -1;
		}

	timer.Start("StringAtPos3DereferencingOperatorTest");
	char charAtPos3 = (*str)[3];
	timer.Stop();
	if (!assert_equal(timer, charAtPos3, 'l'))
		{
		return -1;
		}

	timer.Start("StringAtLastPosDereferencingOperatorTest");
	char charAtLastPos = (*str)[str.Length() - 1];
	timer.Stop();
	if (!assert_equal(timer, charAtLastPos, '!'))
		{
		return -1;
		}

	return 0;
	}

