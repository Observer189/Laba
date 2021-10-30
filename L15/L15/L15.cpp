
#include <iostream>
#include <cassert>

int main()
{
    std::cout << "Hello World!\n";
}

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

