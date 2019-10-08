#include "../string_utils/string_utils.h"

#include "gtest/gtest.h"
#include "gmock/gmock.h"

TEST(StringEndsWith, TestStringEndsWith)
{
   const std::string str_to_test("Hello my name is stringy!");
   ASSERT_TRUE(string_utils::ends_with(str_to_test, std::string("stringy!")));
}

TEST(StringEndsWith, TestPrefixNotInString)
{
   const std::string str_to_test("Hello my name is stringy!");
   ASSERT_FALSE(string_utils::ends_with(str_to_test, std::string("Blarg")));
}

TEST(StringEndsWith, TestPrefixInStringButNotAtEnd)
{
   const std::string str_to_test("Hello my name is stringy!");
   ASSERT_FALSE(string_utils::ends_with(str_to_test, std::string("is")));
}

TEST(StringEndsWith, TestStringEndsWithWstring)
{
   const std::wstring str_to_test(L"Hello my name is stringy!");
   ASSERT_TRUE(string_utils::ends_with(str_to_test, std::wstring(L"stringy!")));
}

TEST(StringEndsWith, TestEmptyString)
{
   const std::wstring str_to_test;
   ASSERT_FALSE(string_utils::ends_with(str_to_test, std::wstring(L"stringy!")));
}