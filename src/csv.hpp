#ifndef __CSV_H__
#define __CSV_H__

#include <string>

#include "table.hpp"

using namespace std;

class CSVImporter : public TableImporter
{
public:
    CSVImporter(const string &filename);
    shared_ptr<list<string>> getHeaderList(Table &);
    shared_ptr<Row> getNextRow(Table &);

private:
    string m_filename;
    ifstream m_file;
    string m_headerLine;
    int m_lineNumber;
};

#endif // __CSV_H__
