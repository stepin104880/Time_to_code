#include "unity.h"
#include "stringsep.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_stringSeperator1(void)
{
    char arr1[2] = {"hello","world"};
    TEST_ASSERT_EQUAL_CHAR_ARRAY(arr1,stringSeperator("hello_world"),2);
}

void test_stringSeperator2(void)
{
    char arr2[3] = {"I","am","Wilson"};
    TEST_ASSERT_EQUAL_CHAR_ARRAY(arr2, stringSeperator("_I_am_Wilson"),3);
}

void test_stringSeperator3(void)
{
    char arr3[4] = {"First","test","to","code"};
    TEST_ASSERT_EQUAL_CHAR_ARRAY(arr3, stringSeperator("First_test_to_code_"),4);
}


void test_stringSeparator4(void)
{

    char arr4[6] = {"my","name","is","ed-cast","future","skills"};
    TEST_ASSERT_EQUAL_CHAR_ARRAY(arr4,stringSeperator("my_name_is_ed-cast_future_skills"),6);
}

void test_stringSeparator5(void)
{	
    char arr5[3] = {"Football","and","chill"}
    TEST_ASSERT_EQUAL_CHAR_ARRAY(arr5,stringSeperator("_Football_and_chill_"),3);
}	



int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_stringSeperator1);
  RUN_TEST(test_stringSeperator2);
  RUN_TEST(test_stringSeperator3);
  RUN_TEST(test_stringSeparator4);
  RUN_TEST(test_stringSeparator5);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
