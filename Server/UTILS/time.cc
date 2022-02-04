#include "MYTIME.h"
#include <ctime>
inline void Time::set()
{
    time_t now = time(0);
    tm *format_time = localtime(&now);
    this->year = format_time->tm_year + 1900;
    this->month = 1 + format_time->tm_mon;
    this->day = format_time->tm_mday;
    this->hour = format_time->tm_hour;
    this->minutes = format_time->tm_min;
    this->second = format_time->tm_sec;
}
Time::Time()
{
    set();
}
void Time::Reset()
{
    set();
}
std::ostream &operator<<(std::ostream &os, const Time &t)
{
    os << t.year << "/" << t.month << "/" << t.day;
    return os;
}
std::string Time::show() const
{
    using std::to_string;
    std::string str = "";
    str = to_string(this->year) + "/" + to_string(this->month) + "/" + to_string(this->day);
    return str;
}
long long Time::back_id()
{
    long long id_ = (long)year * 10000000 + (long)month * 10000 + (long)day * 1000 + hour * 100 + minutes * 10 + second;
    return id_;
}
std::string Time::apitime() const
{
    using std::to_string;
    std::string str = "";
    str = to_string(this->year) + "/" + to_string(this->month) + "/" + to_string(this->day) + " " + to_string(this->hour) + ":" + to_string(this->minutes) + ":" + to_string(this->second);
    return str;
}