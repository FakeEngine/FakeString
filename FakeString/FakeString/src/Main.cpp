#include "Core/Test.h"

#include "../tests/AppendToStringTest.h"
#include "../tests/AtStringIndexTest.h"
#include "../tests/ContainsStringTest.h"
#include "../tests/CStringTest.h"
#include "../tests/WStringTest.h"
#include "../tests/EmptyStringTest.h"
#include "../tests/EndsWithStringTest.h"
#include "../tests/StartsWithStringTest.h"
#include "../tests/FirstIndexNotOfStringTest.h"
#include "../tests/FirstIndexOfStringTest.h"
#include "../tests/IndexOfStringTest.h"
#include "../tests/LastIndexOfStringTest.h"
#include "../tests/InvertStringTest.h"
#include "../tests/LengthStringTest.h"
#include "../tests/LowerCaseStringTest.h"
#include "../tests/UpperCaseStringTest.h"
#include "../tests/PrintStringTest.h"
#include "../tests/RemoveFromStringTest.h"
#include "../tests/ReplaceStringTest.h"
#include "../tests/ResizeStringTest.h"
#include "../tests/SplitStringTest.h"
#include "../tests/SubStringTest.h"
#include "../tests/ToStringTest.h"

int main(int argc, char *argv[])
	{
	// Build test array
	TestFn tests[] =
		{
		// Test appending to string
		test_append_with_string,
		test_append_with_char,

		// Test removing from string
		test_remove_letter_from_string,
		test_remove_string_from_string,

		// Test accessing functions
		test_at_function,
		test_array_index_operator,
		test_dereferencing_operator,

		// Test Contains functions
		test_contains_letter,
		test_contains_string,
		test_contains_not_letter,
		test_contains_not_string,

		// Test conversions to standard c strings
		test_convert_to_cstr,
		test_convert_to_cstr_by_operator,
		test_convert_to_wstr,

		// Test Empty String
		test_empty_string,
		test_not_empty_string,

		// Test StartsWith
		test_string_starts_with_letter,
		test_string_starts_not_with_letter,
		test_string_starts_with_string,
		test_string_starts_not_with_string,

		// Test EndsWith
		test_string_ends_with_letter,
		test_string_ends_not_with_letter,
		test_string_ends_with_string,
		test_string_ends_not_with_string,

		// 
		test_first_index_not_of_letter,
		test_first_index_not_of_string,
		test_first_index_not_of_not_letter,
		test_first_index_not_of_not_string,

		// 
		test_first_index_of_letter,
		test_first_index_of_string,
		test_first_index_of_not_letter,
		test_first_index_of_not_string,

		// 
		test_index_of_letter,
		test_index_of_string,
		test_index_of_not_letter,
		test_index_of_not_string,

		// 
		test_last_index_of_letter,
		test_last_index_of_string,
		test_last_index_of_not_letter,
		test_last_index_of_not_string,

		// 
		test_invert_string,
		test_length_of_string,
		test_print_string,
		test_resize_string,

		// 
		test_lower_case_string_test,
		test_upper_case_string,

		// 
		test_replace_string,
		test_replace_all_letters,
		test_replace_all_strings,
		test_replace_remove_occurence,
		test_replace_remove_all_occurences,

		// 
		test_split_string_vector_with_space,
		test_split_string_string_with_space,
		test_split_string_vector_with_comma,
		test_split_string_string_with_comma,

		// Test Substring
		test_substring_first_5,
		test_substring_first_10,
		test_substring_last_5,
		test_substring_last_10,

		// 
		test_integer_to_string,
		test_float_to_string,
		test_double_to_string,
		test_bool_to_string,
		};

	// Run all tests
	int exitCode = perform_tests(tests, sizeof(tests) / sizeof(TestFn));
	// std::system("PAUSE");
	return exitCode;
	}

