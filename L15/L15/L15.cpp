
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

bool isLeapYear(int year)
{
    return (year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0);
}

int SecondsInMinutes()
{
    return 60;
}

