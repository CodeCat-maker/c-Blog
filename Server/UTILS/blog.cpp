#include "BLOG.h"
#include "MYTIME.h"

Blog::Blog(string title, string dectribe, string content)
{
    Time mytime;
    this->blid = mytime.back_id();
    this->title = title;
    this->dectribe = dectribe;
    this->content = content;
    this->create_time = mytime.show();
}
Blog::Blog(){};
void Blog::set(long blid, string title, string dec, string content, string create_time)
{
    this->blid = blid;
    this->title = title;
    this->dectribe = dec;
    this->content = content;
    this->create_time = create_time;
}
json Blog::back_json() const
{
    json i;
    i["blid"] = blid;
    i["title"] = title;
    i["dectribe"] = dectribe;
    i["content"] = content;
    i["create_time"] = create_time;
    return i;
}