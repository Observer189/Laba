
#include <iostream>
#include "lib.h"
#include <cassert>

int main()
{
    assert(isLeapYear(800));
    assert(!isLeapYear(200));
    assert(isLeapYear(2016));
    assert(isLeapYear(!2011));

    assert(LaterInDay(311, 216) == 311);

    assert(DaysInYear(2016) == 366);
    assert(DaysInYear(2017) == 365);
}


