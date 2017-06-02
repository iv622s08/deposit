#include <deposit.h>
#include <ctest.h>

CTEST(check_input_data_deposit, test1)
{
    const int a = 5000;
    const int result = checkS(a);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_input_data_days, test2)
{
    const int a = -10;
    const int result = checkD(a);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_input_data_days, test3)
{
    const int a = 400;
    const int result = checkD(a);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_input_data_summ, test4)
{
    const int a = 0;
    const int b = 0;
    const int result = check(a, b);
    const int expected = -1;
    ASSERT_EQUAL(expected, result);
}
