#ifndef __ENGINE_H__
#define __ENGINE_H__

#include "table.hpp"
#include <memory>

using namespace std;

class Engine
{
public:
    Table &getTable()
    {
        return this->m_table;
    }

private:
    Table m_table;
};

#endif // __ENGINE_H__
