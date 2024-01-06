
// Generated from src/Query.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "QueryParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by QueryParser.
 */
class  QueryListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterExpression(QueryParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(QueryParser::ExpressionContext *ctx) = 0;

  virtual void enterOrExpression(QueryParser::OrExpressionContext *ctx) = 0;
  virtual void exitOrExpression(QueryParser::OrExpressionContext *ctx) = 0;

  virtual void enterAndExpression(QueryParser::AndExpressionContext *ctx) = 0;
  virtual void exitAndExpression(QueryParser::AndExpressionContext *ctx) = 0;

  virtual void enterBinaryExpression(QueryParser::BinaryExpressionContext *ctx) = 0;
  virtual void exitBinaryExpression(QueryParser::BinaryExpressionContext *ctx) = 0;

  virtual void enterAtom(QueryParser::AtomContext *ctx) = 0;
  virtual void exitAtom(QueryParser::AtomContext *ctx) = 0;


};

