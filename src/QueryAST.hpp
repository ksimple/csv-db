#ifndef __QUERY_AST_H__
#define __QUERY_AST_H__

#include "query_scanner.h"
#include "query_parser.h"

#include "table.hpp"

class Predict {
public:
    virutal bool predict(shared_ptr<Row> &row) = 0;
}

class BinaryExpressionPredict : public Predict {
public:
    BinaryOperatorPredict(string left, string operator, string right) {}
    bool predicate(shared_ptr<Row> &row) override {
        return false;
   }
}

#endif // __QUERY_AST_H__