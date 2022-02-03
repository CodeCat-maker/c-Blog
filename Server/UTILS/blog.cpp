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
