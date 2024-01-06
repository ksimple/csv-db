
// Generated from src/Query.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "QueryListener.h"


/**
 * This class provides an empty implementation of QueryListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  QueryBaseListener : public QueryListener {
public:

  virtual void enterExpression(QueryParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(QueryParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterOrExpression(QueryParser::OrExpressionContext * /*ctx*/) override { }
  virtual void exitOrExpression(QueryParser::OrExpressionContext * /*ctx*/) override { }

  virtual void enterAndExpression(QueryParser::AndExpressionContext * /*ctx*/) override { }
  virtual void exitAndExpression(QueryParser::AndExpressionContext * /*ctx*/) override { }

  virtual void enterBinaryExpression(QueryParser::BinaryExpressionContext * /*ctx*/) override { }
  virtual void exitBinaryExpression(QueryParser::BinaryExpressionContext * /*ctx*/) override { }

  virtual void enterAtom(QueryParser::AtomContext * /*ctx*/) override { }
  virtual void exitAtom(QueryParser::AtomContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

