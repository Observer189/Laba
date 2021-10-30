#include "lib.h"
#include <utility>

bool isLeapYear(int year)
{
    return (year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0);
}

int LaterInDay(int first, int second)
{
    assert(first < 366 && first >0 && second < 366 && second>0);
    return std::max(first, second);
}

int DaysInYear(int year)
{
    if (isLeapYear(year)) return 366;
    else
    {
        return 365;
    }
}

int DaysInYearRange(int lowYear, int upYear)
{
    int sum = 0;
    for (int i = lowYear; i <= upYear; i++)
    {
        sum += DaysInYear(i);
    }
    return sum;
}

int SecondsInHours(int hours)
{
    return hours * 60 * 60;
}