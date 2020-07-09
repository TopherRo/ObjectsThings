

#include <iostream>

using std::cout;

#include "time1.h"


Time::Time()    { hour = minute = second = 0; }

void Time::setTime( int hour, int minute, int second )  {
    hour = ( hour >= 0 && hour < 24 ) ? hour : 0;
    minute = ( minute >= 0 && minute < 60 ) ? minute : 0;
    second = ( second >= 0 && second < 24 ) ? second : 0;
}

void Time::printTime()  { cout << hour << ":" << minute << ":" << second ; }
