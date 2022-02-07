#ifndef BLOG_H__
#define BLOG_H__

#include "json.hpp"
#include <string>

using nlohmann::json;
using std::string;
class Blog
{
private:
    long long blid;
    string title;
    string dectribe;
    string content;
    string create_time;

public:
    Blog(string title, string dectribe, string content);
    Blog();
    void set(long blid, string title, string dec, string content, string create_time);
    json back_json() const;
};

#endif