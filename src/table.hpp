#ifndef __TABLE_H__
#define __TABLE_H__

#include <memory>
#include <unordered_map>
#include <list>
#include <vector>

using namespace std;

class Table;

class Row
{
public:
    Row(Table &table);
    void setField(int index, shared_ptr<string> value)
    {
        this->m_fieldVector[index] = value;
    }
    shared_ptr<string> getField(int index)
    {
        return this->m_fieldVector[index];
    }

private:
    vector<shared_ptr<string>> m_fieldVector;
    Table &m_table;
};

class TableImporter
{
public:
    virtual shared_ptr<list<string>> getHeaderList(Table &) = 0;
    virtual shared_ptr<Row> getNextRow(Table &) = 0;
};

class Table
{
public:
    void append(shared_ptr<Row> row);
    void import(TableImporter &importer);
    int getHeaderCount() const
    {
        return this->m_headerList->size();
    }
    void printRow(int index)
    {
        cout << index << ":" << endl;

        for (int i = 0; i < this->m_headerList->size(); i++)
        {
            cout << *(this->m_rowVector[index]->getField(i)) << endl;
        }
    }

private:
    shared_ptr<list<string>> m_headerList;
    unordered_map<string, int> m_headerMap;
    vector<shared_ptr<Row>> m_rowVector;
};

#endif // __TABLE_H__
