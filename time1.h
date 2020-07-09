

#ifndef TIME1_H
#define TIME1_H

class Time  {
public:
    Time();
    void setTime( int, int, int );
    void printTime();
private:
    int hour;
    int minute;
    int second;
};

#endif