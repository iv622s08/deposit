#include <deposit.h>
#include <ctest.h>

CTEST(check_input_summ, value_less_broad)
{
    const int a = 5000;
    const int result = checkS(a);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_input_data_days, negative_value)
{
    const int a = -10;
    const int result = checkD(a);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_input_data_days, value_more_broad)
{
    const int a = 400;
    const int result = checkD(a);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}


