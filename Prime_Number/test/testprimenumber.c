#include "unity.h"
#include "primenumber.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_primenumber_check(void)
{
  TEST_ASSERT_EQUAL(1, primenumber(23));
  TEST_ASSERT_EQUAL(1, primenumber(17));
  TEST_ASSERT_EQUAL(1, primenumber(83));	
}

void test_primenumber_checks(void)
{
  TEST_ASSERT_EQUAL(1, primenumber(2));
  TEST_ASSERT_EQUAL(1, primenumber(3));
}

void test_not_primenumber(void)
{
  TEST_ASSERT_EQUAL(-1, primenumber(20));
  TEST_ASSERT_EQUAL(-1, primenumber(27));
  TEST_ASSERT_EQUAL(-1, primenumber(16));
}
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(0, primenumber(0));
  TEST_ASSERT_EQUAL(0, primenumber(1));
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(0, primenumber(-5));
  TEST_ASSERT_EQUAL(0, primenumber(-10));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_primenumber_check);
  RUN_TEST(test_primenumber_checks);
  RUN_TEST(test_not_primenumber);
  RUN_TEST(test_zero_one);
  RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
