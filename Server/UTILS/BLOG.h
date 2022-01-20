#ifndef BLOG_H__
#define BLOG_H__

#include <string>
#include "MYTIME.h"
using std::string;

class Blog
{
private:
    int id;
    string title;
    string dectribe;
    string content;
    Time create_time;

public:
    Blog();
    Blog(int id);
    Blog(int id, string title);
};

#endif