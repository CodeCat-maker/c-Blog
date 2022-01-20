#ifndef METHODS_H__
#define METHODS_H__
#include "BLOG.h"
#include <string>
using std::string;

void update(int id);

void add(const &Blog);

void del(int id);
void del(string title);

void find(int id);
void find(string title);

#endif