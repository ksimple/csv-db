#include <stdexcept>
#include <fstream>
#include <sstream>
#include <iostream>

#include "csv.hpp"
#include "tools.hpp"

CSVImporter::CSVImporter(const string &filename) : m_lineNumber(0)
{
    this->m_filename = filename;
    this->m_file.open(filename);

    if (!this->m_file.is_open())
    {
        throw runtime_error(string("Failed to open file: ") + this->m_filename);
    }

    getline(this->m_file, this->m_headerLine);
    this->m_lineNumber++;
    cout << "Got header line: " << this->m_headerLine << endl;
}

shared_ptr<list<string>> CSVImporter::getHeaderList(Table &table)
{
    cout << "Call getHeaderList()" << endl;
    shared_ptr<list<string>> headerList = make_shared<list<string>>();

    if (this->m_headerLine.empty())
    {
        throw runtime_error("No header found");
    }

    int lastCommaIndex = -1;

    for (int i = 0; i < this->m_headerLine.length(); i++)
    {
        char c = this->m_headerLine[i];

        if (c == ',')
        {
            if (lastCommaIndex == i - 1)
            {
                stringstream ss;

                ss << "Get empty header at " << i;

                throw runtime_error(ss.str());
            }

            string headerName = this->m_headerLine.substr(lastCommaIndex + 1, i - lastCommaIndex - 1);
            headerList->push_back(headerName);
            lastCommaIndex = i;
        }
        else if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')))
        {
            if (lastCommaIndex == i - 1 || i == 0)
            {
                stringstream ss;

                ss << "Get illegal char at " << i;

                throw runtime_error(ss.str());
            }
        }
    }

    if (lastCommaIndex == this->m_headerLine.length() - 1)
    {
        stringstream ss;

        ss << "Get empty header at line " << lastCommaIndex + 1;

        throw runtime_error(ss.str());
    }
    else
    {
        string headerName = this->m_headerLine.substr(lastCommaIndex + 1, this->m_headerLine.length() - lastCommaIndex - 1);
        headerList->push_back(headerName);
    }

    cout << "Read " << headerList->size() << " header field" << endl;
    return move(headerList);
}

#define SKIP_ERROR_LINE

shared_ptr<Row> CSVImporter::getNextRow(Table &table)
{
    shared_ptr<Row> row;

    while (true)
    {
        row = make_shared<Row>(table);
        string line;

        this->m_lineNumber++;
        if (!getline(this->m_file, line))
        {
            this->m_file.close();
            return nullptr;
        }
        else if (line.empty())
        {
            stringstream ss;
            ss << "Get empty line at line " << this->m_lineNumber;
#ifdef SKIP_ERROR_LINE
            cout << ss.str() << endl;
            continue;
#else
            throw runtime_error(ss.str());
#endif
        }
        else
        {
            int index = 0;
            int fieldIndex = 0;
            bool continueOnError = false;

            while (index < line.length())
            {
                shared_ptr<string> fieldValue;
                int commaIndex;

                if (line[index] == '"')
                {
                    string errorMessage;
#ifdef SKIP_ERROR_LINE
                    auto result = getUnquotedString(line, index, false, errorMessage);

                    if (!errorMessage.empty())
                    {
                        cout << errorMessage << " at line " << this->m_lineNumber << endl;
                        continueOnError = true;
                        break;
                    }
#else
                    auto result = getUnquotedString(line, index, true, errorMessage);
#endif

                    if (result.second < line.length() && line[result.second] != ',')
                    {
                        stringstream ss;
                        ss << "Illegal char at line " << this->m_lineNumber << ", " << index;
#ifdef SKIP_ERROR_LINE
                        cout << ss.str() << endl;
                        continueOnError = true;
                        break;
#else
                        throw runtime_error(ss.str());
#endif
                    }

                    fieldValue = result.first;
                    commaIndex = result.second;
                    if (commaIndex < line.length() && line[commaIndex] != ',')
                    {
                        stringstream ss;
                        ss << "illegal character at line " << this->m_lineNumber << ", " << index;
#ifdef SKIP_ERROR_LINE
                        cout << ss.str() << endl;
                        continueOnError = true;
                        break;
#else
                        throw runtime_error(ss.str());
#endif
                    }
                }
                else
                {
                    commaIndex = line.find(",", index);

                    if (commaIndex < 0)
                    {
                        commaIndex = line.length();
                    }

                    fieldValue = make_shared<string>(line.substr(index, commaIndex - index));
                }

                if (fieldIndex >= table.getHeaderCount())
                {
                    stringstream ss;
                    ss << "Too many fields at line " << this->m_lineNumber << ", " << index;
#ifdef SKIP_ERROR_LINE
                    cout << ss.str() << endl;
                    continueOnError = true;
                    break;
#else
                    throw runtime_error(ss.str());
#endif
                }

                row->setField(fieldIndex, fieldValue);
                fieldIndex++;
                index = commaIndex + 1;
            }

            if (continueOnError)
            {
                continue;
            }

            if (fieldIndex != table.getHeaderCount())
            {
                stringstream ss;
                ss << "Illegal field count at line " << this->m_lineNumber;
#ifdef SKIP_ERROR_LINE
                cout << ss.str() << endl;
                continue;
#else
                throw runtime_error(ss.str());
#endif
            }
        }
        break;
    }

    return move(row);
}
