#include "build/temp/_test_add.c"
#include "add.h"
#include "unity.h"


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



    UnityAssertEqualNumber((UNITY_INT)((4)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT);



}





void test_minus_20_and_10_expect_10(void)

{

    int result;

    result=add(-20,10);



    UnityAssertEqualNumber((UNITY_INT)((4)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(27), UNITY_DISPLAY_STYLE_INT);



}
