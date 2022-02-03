#ifndef BLOG_H__
#define BLOG_H__

#include <string>

using std::string;

class Blog
{
private:
    int blid;
    string title;
    string dectribe;
    string content;
    string create_time;

public:
    Blog(string title, string dectribe, string content);
};

#endif