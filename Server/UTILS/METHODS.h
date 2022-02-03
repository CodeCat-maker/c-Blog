#ifndef METHODS_H__
#define METHODS_H__
#include "BLOG.h"
#include <string>
#include <vector>
using std::string;
using std::__1::vector;
namespace methods
{

    bool add(Blog &blog);

    bool del(int blid);

    bool update(int blid);
    bool update(int blid, string title);
    bool update(int blid, string title, string dectribe);
    bool update(int blid, string title, string dectribe, string content);
    vector<Blog> find(int blid);
    vector<Blog> find(string title);

}
#endif