#include <iostream>
#include "METHODS.h"
#include <vector>

using std::__1::vector;
bool methods::add(Blog &blog)
{
    return true;
}

bool methods::del(int blid)
{
    return true;
}
bool methods::update(int blid)
{
    return true;
}
bool methods::update(int blid, string title)
{
    return true;
}
bool update(int blid, string title, string dectribe, string content)
{
    return true;
};

vector<Blog> find(int blid)
{
    vector<Blog> list;
    Blog a(
        "this is title",
        "just a title",
        "hello world");
    list.push_back(a);
    return list;
};

vector<Blog> find(string title)
{
    vector<Blog> list;
    Blog a(
        "this is title",
        "just a title",
        "hello world");
    list.push_back(a);
    return list;
};
