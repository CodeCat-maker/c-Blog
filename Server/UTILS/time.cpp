#include "MYTIME.h"
#include <ctime>
inline void Time::set()
{
    time_t now = time(0);
    tm *format_time = localtime(&now);
    this->year = format_time->tm_year + 1900;
    this->month = 1 + format_time->tm_mon;
    this->day = format_time->tm_mday;
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