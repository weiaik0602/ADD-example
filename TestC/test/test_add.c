#include "unity.h"
#include "add.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_add_2_and_2_expect_4(void)
{
    int result;
    result=add(2,2);
    
    TEST_ASSERT_EQUAL(4,result);
    
}


void test_minus_20_and_10_expect_10(void)
{
    int result;
    result=add(-20,10);
    
    TEST_ASSERT_EQUAL(4,result);
    
}
