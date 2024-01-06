#ifndef __TOOLS_H__
#define __TOOLS_H__

#include <string>
#include <vector>
#include <memory>

using namespace std;

pair<shared_ptr<string>, int> getUnquotedString(const string &line, int begin, bool throwOnError, string &error);
shared_ptr<string> decodeURIComponent(const string &input);

#endif // __TOOLS_H__