#ifndef __QUERY_AST_H__
#define __QUERY_AST_H__

#include "query_scanner.h"
#include "query_parser.h"

#include "table.hpp"
#include "QueryParser.h"

class Predict {
public:
    virutal bool predict(shared_ptr<Row> &row) = 0;
}

class OrExpressionPredict : public Predict {
public:
    OrOperatorPredict(QueryParser::OrExpressionContext orExpressionContext) {
        this->m_orExpressionContext = orExpressionContext;
    }
    bool predicate(shared_ptr<Row> &row) override {
        return false;
    }
private:
    QueryParser::OrExpressionContext *m_orExpressionContext;
}

class AndExpressionPredict : public Predict {
public:
    AndExpressionPredict(QueryParser::AndExpressionContext andExpressionContext) {
        this->m_andExpressionContext = andExpressionContext;
    }
    bool predicate(shared_ptr<Row> &row) override {
        return false;
    }
private:
    QueryParser::AndExpressionContext *m_andExpressionContext;
}


class BinaryExpressionPredict : public Predict {
public:
    BinaryExpressionPredict(QueryParser::BinaryExpressionContext binaryExpressionContext) {
        this->m_binaryExpressionContext = binaryExpressionContext;
    }
    bool predicate(shared_ptr<Row> &row) override {
        return false;
    }
private:
    QueryParser::BinaryExpressionContext *m_binaryExpressionContext;
}

class ExpressionPredict : public Predict {
public:
    ExpressionPredict(QueryParser::ExpressionContext expressionContext) {
        this->m_expressionContext = expressionContext;
    }
    bool predicate(shared_ptr<Row> &row) override {
        return false;
   }

private:
    QueryParser::ExpressionContext *m_expressionContext;
}

#endif // __QUERY_AST_H__