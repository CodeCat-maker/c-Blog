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
    int back_id();
    ~Time(){};
    friend std::ostream &operator<<(std::ostream &os, const Time &t);
};

#endif