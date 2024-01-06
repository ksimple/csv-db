
// Generated from src/query_parser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "query_parserParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by query_parserParser.
 */
class  query_parserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterExpression(query_parserParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(query_parserParser::ExpressionContext *ctx) = 0;

  virtual void enterOrExpression(query_parserParser::OrExpressionContext *ctx) = 0;
  virtual void exitOrExpression(query_parserParser::OrExpressionContext *ctx) = 0;

  virtual void enterAndExpression(query_parserParser::AndExpressionContext *ctx) = 0;
  virtual void exitAndExpression(query_parserParser::AndExpressionContext *ctx) = 0;

  virtual void enterBinaryExpression(query_parserParser::BinaryExpressionContext *ctx) = 0;
  virtual void exitBinaryExpression(query_parserParser::BinaryExpressionContext *ctx) = 0;

  virtual void enterAtom(query_parserParser::AtomContext *ctx) = 0;
  virtual void exitAtom(query_parserParser::AtomContext *ctx) = 0;

  virtual void enterBinaryOperator(query_parserParser::BinaryOperatorContext *ctx) = 0;
  virtual void exitBinaryOperator(query_parserParser::BinaryOperatorContext *ctx) = 0;


};

