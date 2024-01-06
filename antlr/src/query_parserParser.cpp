
// Generated from src/query_parser.g4 by ANTLR 4.13.1


#include "query_parserListener.h"

#include "query_parserParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct Query_parserParserStaticData final {
  Query_parserParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Query_parserParserStaticData(const Query_parserParserStaticData&) = delete;
  Query_parserParserStaticData(Query_parserParserStaticData&&) = delete;
  Query_parserParserStaticData& operator=(const Query_parserParserStaticData&) = delete;
  Query_parserParserStaticData& operator=(Query_parserParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag query_parserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
Query_parserParserStaticData *query_parserParserStaticData = nullptr;

void query_parserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (query_parserParserStaticData != nullptr) {
    return;
  }
#else
  assert(query_parserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Query_parserParserStaticData>(
    std::vector<std::string>{
      "expression", "orExpression", "andExpression", "binaryExpression", 
      "atom", "binaryOperator"
    },
    std::vector<std::string>{
      "", "'or'", "'and'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "STRING", "BINARY_OPERATOR", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,7,44,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,1,0,1,0,1,1,
  	1,1,1,1,5,1,18,8,1,10,1,12,1,21,9,1,1,2,1,2,1,2,5,2,26,8,2,10,2,12,2,
  	29,9,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,3,4,40,8,4,1,5,1,5,1,5,0,0,
  	6,0,2,4,6,8,10,0,0,40,0,12,1,0,0,0,2,14,1,0,0,0,4,22,1,0,0,0,6,30,1,0,
  	0,0,8,39,1,0,0,0,10,41,1,0,0,0,12,13,3,2,1,0,13,1,1,0,0,0,14,19,3,4,2,
  	0,15,16,5,1,0,0,16,18,3,4,2,0,17,15,1,0,0,0,18,21,1,0,0,0,19,17,1,0,0,
  	0,19,20,1,0,0,0,20,3,1,0,0,0,21,19,1,0,0,0,22,27,3,6,3,0,23,24,5,2,0,
  	0,24,26,3,6,3,0,25,23,1,0,0,0,26,29,1,0,0,0,27,25,1,0,0,0,27,28,1,0,0,
  	0,28,5,1,0,0,0,29,27,1,0,0,0,30,31,3,8,4,0,31,32,3,10,5,0,32,33,3,8,4,
  	0,33,7,1,0,0,0,34,40,5,5,0,0,35,36,5,3,0,0,36,37,3,2,1,0,37,38,5,4,0,
  	0,38,40,1,0,0,0,39,34,1,0,0,0,39,35,1,0,0,0,40,9,1,0,0,0,41,42,5,6,0,
  	0,42,11,1,0,0,0,3,19,27,39
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  query_parserParserStaticData = staticData.release();
}

}

query_parserParser::query_parserParser(TokenStream *input) : query_parserParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

query_parserParser::query_parserParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  query_parserParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *query_parserParserStaticData->atn, query_parserParserStaticData->decisionToDFA, query_parserParserStaticData->sharedContextCache, options);
}

query_parserParser::~query_parserParser() {
  delete _interpreter;
}

const atn::ATN& query_parserParser::getATN() const {
  return *query_parserParserStaticData->atn;
}

std::string query_parserParser::getGrammarFileName() const {
  return "query_parser.g4";
}

const std::vector<std::string>& query_parserParser::getRuleNames() const {
  return query_parserParserStaticData->ruleNames;
}

const dfa::Vocabulary& query_parserParser::getVocabulary() const {
  return query_parserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView query_parserParser::getSerializedATN() const {
  return query_parserParserStaticData->serializedATN;
}


//----------------- ExpressionContext ------------------------------------------------------------------

query_parserParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

query_parserParser::OrExpressionContext* query_parserParser::ExpressionContext::orExpression() {
  return getRuleContext<query_parserParser::OrExpressionContext>(0);
}


size_t query_parserParser::ExpressionContext::getRuleIndex() const {
  return query_parserParser::RuleExpression;
}

void query_parserParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<query_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void query_parserParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<query_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

query_parserParser::ExpressionContext* query_parserParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 0, query_parserParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(12);
    orExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrExpressionContext ------------------------------------------------------------------

query_parserParser::OrExpressionContext::OrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<query_parserParser::AndExpressionContext *> query_parserParser::OrExpressionContext::andExpression() {
  return getRuleContexts<query_parserParser::AndExpressionContext>();
}

query_parserParser::AndExpressionContext* query_parserParser::OrExpressionContext::andExpression(size_t i) {
  return getRuleContext<query_parserParser::AndExpressionContext>(i);
}


size_t query_parserParser::OrExpressionContext::getRuleIndex() const {
  return query_parserParser::RuleOrExpression;
}

void query_parserParser::OrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<query_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrExpression(this);
}

void query_parserParser::OrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<query_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrExpression(this);
}

query_parserParser::OrExpressionContext* query_parserParser::orExpression() {
  OrExpressionContext *_localctx = _tracker.createInstance<OrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, query_parserParser::RuleOrExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    andExpression();
    setState(19);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == query_parserParser::T__0) {
      setState(15);
      match(query_parserParser::T__0);
      setState(16);
      andExpression();
      setState(21);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndExpressionContext ------------------------------------------------------------------

query_parserParser::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<query_parserParser::BinaryExpressionContext *> query_parserParser::AndExpressionContext::binaryExpression() {
  return getRuleContexts<query_parserParser::BinaryExpressionContext>();
}

query_parserParser::BinaryExpressionContext* query_parserParser::AndExpressionContext::binaryExpression(size_t i) {
  return getRuleContext<query_parserParser::BinaryExpressionContext>(i);
}


size_t query_parserParser::AndExpressionContext::getRuleIndex() const {
  return query_parserParser::RuleAndExpression;
}

void query_parserParser::AndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<query_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndExpression(this);
}

void query_parserParser::AndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<query_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndExpression(this);
}

query_parserParser::AndExpressionContext* query_parserParser::andExpression() {
  AndExpressionContext *_localctx = _tracker.createInstance<AndExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, query_parserParser::RuleAndExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22);
    binaryExpression();
    setState(27);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == query_parserParser::T__1) {
      setState(23);
      match(query_parserParser::T__1);
      setState(24);
      binaryExpression();
      setState(29);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryExpressionContext ------------------------------------------------------------------

query_parserParser::BinaryExpressionContext::BinaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<query_parserParser::AtomContext *> query_parserParser::BinaryExpressionContext::atom() {
  return getRuleContexts<query_parserParser::AtomContext>();
}

query_parserParser::AtomContext* query_parserParser::BinaryExpressionContext::atom(size_t i) {
  return getRuleContext<query_parserParser::AtomContext>(i);
}

query_parserParser::BinaryOperatorContext* query_parserParser::BinaryExpressionContext::binaryOperator() {
  return getRuleContext<query_parserParser::BinaryOperatorContext>(0);
}


size_t query_parserParser::BinaryExpressionContext::getRuleIndex() const {
  return query_parserParser::RuleBinaryExpression;
}

void query_parserParser::BinaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<query_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryExpression(this);
}

void query_parserParser::BinaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<query_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryExpression(this);
}

query_parserParser::BinaryExpressionContext* query_parserParser::binaryExpression() {
  BinaryExpressionContext *_localctx = _tracker.createInstance<BinaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, query_parserParser::RuleBinaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    atom();
    setState(31);
    binaryOperator();
    setState(32);
    atom();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

query_parserParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* query_parserParser::AtomContext::STRING() {
  return getToken(query_parserParser::STRING, 0);
}

query_parserParser::OrExpressionContext* query_parserParser::AtomContext::orExpression() {
  return getRuleContext<query_parserParser::OrExpressionContext>(0);
}


size_t query_parserParser::AtomContext::getRuleIndex() const {
  return query_parserParser::RuleAtom;
}

void query_parserParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<query_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void query_parserParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<query_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}

query_parserParser::AtomContext* query_parserParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 8, query_parserParser::RuleAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(39);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case query_parserParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(34);
        match(query_parserParser::STRING);
        break;
      }

      case query_parserParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(35);
        match(query_parserParser::T__2);
        setState(36);
        orExpression();
        setState(37);
        match(query_parserParser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryOperatorContext ------------------------------------------------------------------

query_parserParser::BinaryOperatorContext::BinaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* query_parserParser::BinaryOperatorContext::BINARY_OPERATOR() {
  return getToken(query_parserParser::BINARY_OPERATOR, 0);
}


size_t query_parserParser::BinaryOperatorContext::getRuleIndex() const {
  return query_parserParser::RuleBinaryOperator;
}

void query_parserParser::BinaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<query_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryOperator(this);
}

void query_parserParser::BinaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<query_parserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryOperator(this);
}

query_parserParser::BinaryOperatorContext* query_parserParser::binaryOperator() {
  BinaryOperatorContext *_localctx = _tracker.createInstance<BinaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 10, query_parserParser::RuleBinaryOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    match(query_parserParser::BINARY_OPERATOR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void query_parserParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  query_parserParserInitialize();
#else
  ::antlr4::internal::call_once(query_parserParserOnceFlag, query_parserParserInitialize);
#endif
}
