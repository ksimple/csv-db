#include <sstream>

#include "tools.hpp"

pair<shared_ptr<string>, int> getUnquotedString(const string &line, int begin, bool throwOnError, string &error)
{
    int index = begin + 1;
    int end = -1;
    bool escaped = false;
    stringstream result;

    while (index < line.length())
    {
        char c = line.at(index);

        if (escaped)
        {
            if (c == 'n')
            {
                result << '\n';
            }
            else if (c == '\\')
            {
                result << '\\';
            }
            else if (c == '"')
            {
                result << '"';
            }
            else
            {
                stringstream ss;
                ss << "Illegal escaped character at " << index;

                if (throwOnError)
                {
                    throw runtime_error(ss.str());
                }
                else
                {
                    error = ss.str();
                    return make_pair(make_shared<string>(""), -1);
                }
            }
            escaped = false;
        }
        else if (c == '\\')
        {
            escaped = true;
        }
        else if (c == '"')
        {
            end = index + 1;
            break;
        }
        else
        {
            result << c;
        }

        index++;
    }

    return move(make_pair(make_shared<string>(result.str()), end));
}

char hexCharToInt(char hex1, char hex2)
{
    int result = 0;

    if ('0' <= hex1 && hex1 <= '9')
    {
        result = hex1 - '0';
    }
    else if ('a' <= hex1 && hex1 <= 'f')
    {
        result = hex1 - 'a' + 10;
    }
    else if ('A' <= hex1 && hex1 <= 'F')
    {
        result = hex1 - 'A' + 10;
    }

    result *= 16;

    if ('0' <= hex2 && hex2 <= '9')
    {
        result += hex2 - '0';
    }
    else if ('a' <= hex2 && hex2 <= 'f')
    {
        result += hex2 - 'a' + 10;
    }
    else if ('A' <= hex2 && hex2 <= 'F')
    {
        result += hex2 - 'A' + 10;
    }

    return (char)result;
}

shared_ptr<string> decodeURIComponent(const string &input)
{
    size_t inputLength = input.length();
    stringstream ss;
    shared_ptr<string> result = make_shared<string>();

    size_t resultIndex = 0;
    for (size_t i = 0; i < inputLength; ++i)
    {
        if (input[i] == '%' && i + 2 < inputLength)
        {
            char hex1 = input[i + 1];
            char hex2 = input[i + 2];
            ss << hexCharToInt(hex1, hex2);
            i += 2;
        }
        else if (input[i] == '+')
        {
            ss << ' ';
        }
        else
        {
            ss << input[i];
        }
    }

    return move(make_shared<string>(ss.str()));
}
