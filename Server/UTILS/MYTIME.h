#ifndef MYTIME_H__
#define MYTIME_H__

#include <iostream>
#include <string>
using std::ostream;
using std::string;
class Time
{
private:
    int year;
    int month;
    int day;
    int hour;
    int minutes;
    int second;
    enum
    {
        MAX = 12,
        MIN = 1
    };
    void set();

public:
    Time();
    void Reset();
    string show() const;
    long long back_id();
    string apitime() const;
    ~Time(){};
    friend std::ostream &operator<<(std::ostream &os, const Time &t);
};
#endif