#include <deposit.h>
#include <ctest.h>

CTEST(deposit_income, period_from_241_to_300_income_more_100000)
{
    const int a = 150000;
    const int b = 300;
    const int result = check(a, b);
    const int expected = a * 115 / 100;
    ASSERT_EQUAL(expected, result);
}
