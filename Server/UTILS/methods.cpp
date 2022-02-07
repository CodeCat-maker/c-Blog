#include <iostream>
#include "METHODS.h"
#include <filesystem>
#include <vector>
#include <filesystem>
#include <fstream>
#include <iostream>
namespace fs = std::__fs::filesystem;
using std::stol;
using std::__1::vector;
bool methods::add(Blog &blog)
{
    return true;
}

bool methods::del(long blid)
{
    return true;
}
bool methods::update(long blid)
{
    return true;
}
bool methods::update(long blid, string title)
{
    return true;
}
bool methods::update(long blid, string title, string dectribe, string content)
{
    return true;
};

vector<Blog> methods::find(long blid)
{
    vector<Blog> list;
    Blog a(
        "this is title",
        "just a title",
        "hello world");
    list.push_back(a);
    return list;
};

vector<Blog> methods::find(string title)
{
    vector<Blog> list;
    Blog a(
        "this is title",
        "just a title",
        "hello world");
    list.push_back(a);
    return list;
};

vector<Blog> methods::getAll(int page)
{
    vector<Blog> ret;
    string path = "blogList";
    for (const auto &file : fs::recursive_directory_iterator(path))
    {
        if (file.is_directory() == false)
        {
            fs::path p = file.path();
            long blid = stol(p.filename());
            string creatime;
            string p_ = p;
            creatime = p_.erase(0, p_.find("/") + 1);
            creatime = p_.erase(p_.rfind("/"));
            std::ifstream in(p);
            std::string contents((std::istreambuf_iterator<char>(in)),
                                 std::istreambuf_iterator<char>());
            size_t pose = contents.find("\n");
            string title = contents.substr(0, pose);
            title = title.substr(title.find("=") + 1);
            contents.erase(0, pose + 1);
            pose = contents.find("\n");
            string des = contents.substr(0, pose);
            des = des.substr(des.find("=") + 1);
            contents.erase(0, pose + 1);
            Blog blog;
            blog.set(
                blid,
                title,
                des,
                contents,
                creatime);
            ret.push_back(blog);
        }
    }
    return ret;
}