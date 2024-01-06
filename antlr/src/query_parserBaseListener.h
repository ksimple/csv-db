
// Generated from src/query_parser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "query_parserListener.h"


/**
 * This class provides an empty implementation of query_parserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  query_parserBaseListener : public query_parserListener {
public:

  virtual void enterExpression(query_parserParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(query_parserParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterOrExpression(query_parserParser::OrExpressionContext * /*ctx*/) override { }
  virtual void exitOrExpression(query_parserParser::OrExpressionContext * /*ctx*/) override { }

  virtual void enterAndExpression(query_parserParser::AndExpressionContext * /*ctx*/) override { }
  virtual void exitAndExpression(query_parserParser::AndExpressionContext * /*ctx*/) override { }

  virtual void enterBinaryExpression(query_parserParser::BinaryExpressionContext * /*ctx*/) override { }
  virtual void exitBinaryExpression(query_parserParser::BinaryExpressionContext * /*ctx*/) override { }

  virtual void enterAtom(query_parserParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(query_parserParser::AtomContext * /*ctx*/) override { }

  virtual void enterBinaryOperator(query_parserParser::BinaryOperatorContext * /*ctx*/) override { }
  virtual void exitBinaryOperator(query_parserParser::BinaryOperatorContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

