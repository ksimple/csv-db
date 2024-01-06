#include <utility>
#include <iostream>

#include "table.hpp"

using namespace std;

Row::Row(Table &table) : m_table(table)
{
    this->m_fieldVector.resize(table.getHeaderCount());
};

void Table::append(shared_ptr<Row> row)
{
}

void Table::import(TableImporter &importer)
{
    cout << "import data" << endl;

    this->m_headerList = importer.getHeaderList(*this);
    for (const auto &header : *(this->m_headerList))
    {
        cout << header << std::endl;
    }

    size_t index = 0;

    for (const std::string &header : *(this->m_headerList))
    {
        this->m_headerMap.insert(make_pair(header, index));
        index++;
    }

    while (shared_ptr<Row> row = importer.getNextRow(*this))
    {
        if (!row)
        {
            break;
        }

        this->m_rowVector.push_back(row);
    }

    cout << "imported " << this->m_rowVector.size() << " rows" << endl;
    for (int i = 0; i < this->m_rowVector.size(); i++)
    {
        this->printRow(i);
    }
}
