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

    bool del(long blid);

    bool update(long blid);
    bool update(long blid, string title);
    bool update(long blid, string title, string dectribe);
    bool update(long blid, string title, string dectribe, string content);
    vector<Blog> find(long blid);
    vector<Blog> find(string title);
    vector<Blog> getAll(int page);
}
#endif