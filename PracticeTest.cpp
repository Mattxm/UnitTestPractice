/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_empty_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_oneletter_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, is_bad_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("$!@#  #@!$");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, desc_def)
{
    Practice obj;
	int first = 1;
	int second = 2;
	int third = 3;
	obj.sortDescending(first,second,third);
    bool actual = (first >= second) && (second >= third);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, desc_bad)
{
    Practice obj;
	int first = 1;
	int second = 1;
	int third = 1;
	obj.sortDescending(first,second,third);
    bool actual = (first >= second) && (second >= third);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, desc_two)
{
    Practice obj;
	int first = 1;
	int second = 1;
	int third = 2;
	obj.sortDescending(first,second,third);
    bool actual = (first >= second) && (second >= third);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, desc_sorted_already)
{
    Practice obj;
	int first = 3;
	int second = 2;
	int third = 1;
	obj.sortDescending(first,second,third);
    bool actual = (first >= second) && (second >= third);
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, desc_negative)
{
    Practice obj;
	int first = -3;
	int second = 2;
	int third = -1;
	obj.sortDescending(first,second,third);
    bool actual = (first >= second) && (second >= third);
    ASSERT_TRUE(actual);
}


/*
if((first > second) && (second > third))
  {
    return true;
  }
  else
  {
    return false;
  }
 */
