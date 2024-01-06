
// Generated from src/Query.g4 by ANTLR 4.13.1


#include "QueryListener.h"

#include "QueryParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct QueryParserStaticData final {
  QueryParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  QueryParserStaticData(const QueryParserStaticData&) = delete;
  QueryParserStaticData(QueryParserStaticData&&) = delete;
  QueryParserStaticData& operator=(const QueryParserStaticData&) = delete;
  QueryParserStaticData& operator=(QueryParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag queryParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
QueryParserStaticData *queryParserStaticData = nullptr;

void queryParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (queryParserStaticData != nullptr) {
    return;
  }
#else
  assert(queryParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<QueryParserStaticData>(
    std::vector<std::string>{
      "expression", "orExpression", "andExpression", "binaryExpression", 
      "atom"
    },
    std::vector<std::string>{
      "", "'or'", "'and'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "STRING", "BINARY_OPERATOR", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,7,40,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,1,0,1,0,1,1,1,1,1,1,
  	5,1,16,8,1,10,1,12,1,19,9,1,1,2,1,2,1,2,5,2,24,8,2,10,2,12,2,27,9,2,1,
  	3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,3,4,38,8,4,1,4,0,0,5,0,2,4,6,8,0,0,
  	37,0,10,1,0,0,0,2,12,1,0,0,0,4,20,1,0,0,0,6,28,1,0,0,0,8,37,1,0,0,0,10,
  	11,3,2,1,0,11,1,1,0,0,0,12,17,3,4,2,0,13,14,5,1,0,0,14,16,3,4,2,0,15,
  	13,1,0,0,0,16,19,1,0,0,0,17,15,1,0,0,0,17,18,1,0,0,0,18,3,1,0,0,0,19,
  	17,1,0,0,0,20,25,3,6,3,0,21,22,5,2,0,0,22,24,3,6,3,0,23,21,1,0,0,0,24,
  	27,1,0,0,0,25,23,1,0,0,0,25,26,1,0,0,0,26,5,1,0,0,0,27,25,1,0,0,0,28,
  	29,3,8,4,0,29,30,5,6,0,0,30,31,3,8,4,0,31,7,1,0,0,0,32,38,5,5,0,0,33,
  	34,5,3,0,0,34,35,3,2,1,0,35,36,5,4,0,0,36,38,1,0,0,0,37,32,1,0,0,0,37,
  	33,1,0,0,0,38,9,1,0,0,0,3,17,25,37
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  queryParserStaticData = staticData.release();
}

}

QueryParser::QueryParser(TokenStream *input) : QueryParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

QueryParser::QueryParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  QueryParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *queryParserStaticData->atn, queryParserStaticData->decisionToDFA, queryParserStaticData->sharedContextCache, options);
}

QueryParser::~QueryParser() {
  delete _interpreter;
}

const atn::ATN& QueryParser::getATN() const {
  return *queryParserStaticData->atn;
}

std::string QueryParser::getGrammarFileName() const {
  return "Query.g4";
}

const std::vector<std::string>& QueryParser::getRuleNames() const {
  return queryParserStaticData->ruleNames;
}

const dfa::Vocabulary& QueryParser::getVocabulary() const {
  return queryParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView QueryParser::getSerializedATN() const {
  return queryParserStaticData->serializedATN;
}


//----------------- ExpressionContext ------------------------------------------------------------------

QueryParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

QueryParser::OrExpressionContext* QueryParser::ExpressionContext::orExpression() {
  return getRuleContext<QueryParser::OrExpressionContext>(0);
}


size_t QueryParser::ExpressionContext::getRuleIndex() const {
  return QueryParser::RuleExpression;
}

void QueryParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<QueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void QueryParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<QueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

QueryParser::ExpressionContext* QueryParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 0, QueryParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(10);
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

QueryParser::OrExpressionContext::OrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<QueryParser::AndExpressionContext *> QueryParser::OrExpressionContext::andExpression() {
  return getRuleContexts<QueryParser::AndExpressionContext>();
}

QueryParser::AndExpressionContext* QueryParser::OrExpressionContext::andExpression(size_t i) {
  return getRuleContext<QueryParser::AndExpressionContext>(i);
}


size_t QueryParser::OrExpressionContext::getRuleIndex() const {
  return QueryParser::RuleOrExpression;
}

void QueryParser::OrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<QueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrExpression(this);
}

void QueryParser::OrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<QueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrExpression(this);
}

QueryParser::OrExpressionContext* QueryParser::orExpression() {
  OrExpressionContext *_localctx = _tracker.createInstance<OrExpressionContext>(_ctx, getState());
  enterRule(_localctx, 2, QueryParser::RuleOrExpression);
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
    setState(12);
    andExpression();
    setState(17);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == QueryParser::T__0) {
      setState(13);
      match(QueryParser::T__0);
      setState(14);
      andExpression();
      setState(19);
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

QueryParser::AndExpressionContext::AndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<QueryParser::BinaryExpressionContext *> QueryParser::AndExpressionContext::binaryExpression() {
  return getRuleContexts<QueryParser::BinaryExpressionContext>();
}

QueryParser::BinaryExpressionContext* QueryParser::AndExpressionContext::binaryExpression(size_t i) {
  return getRuleContext<QueryParser::BinaryExpressionContext>(i);
}


size_t QueryParser::AndExpressionContext::getRuleIndex() const {
  return QueryParser::RuleAndExpression;
}

void QueryParser::AndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<QueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndExpression(this);
}

void QueryParser::AndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<QueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndExpression(this);
}

QueryParser::AndExpressionContext* QueryParser::andExpression() {
  AndExpressionContext *_localctx = _tracker.createInstance<AndExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, QueryParser::RuleAndExpression);
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
    setState(20);
    binaryExpression();
    setState(25);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == QueryParser::T__1) {
      setState(21);
      match(QueryParser::T__1);
      setState(22);
      binaryExpression();
      setState(27);
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

QueryParser::BinaryExpressionContext::BinaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<QueryParser::AtomContext *> QueryParser::BinaryExpressionContext::atom() {
  return getRuleContexts<QueryParser::AtomContext>();
}

QueryParser::AtomContext* QueryParser::BinaryExpressionContext::atom(size_t i) {
  return getRuleContext<QueryParser::AtomContext>(i);
}

tree::TerminalNode* QueryParser::BinaryExpressionContext::BINARY_OPERATOR() {
  return getToken(QueryParser::BINARY_OPERATOR, 0);
}


size_t QueryParser::BinaryExpressionContext::getRuleIndex() const {
  return QueryParser::RuleBinaryExpression;
}

void QueryParser::BinaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<QueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryExpression(this);
}

void QueryParser::BinaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<QueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryExpression(this);
}

QueryParser::BinaryExpressionContext* QueryParser::binaryExpression() {
  BinaryExpressionContext *_localctx = _tracker.createInstance<BinaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 6, QueryParser::RuleBinaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    atom();
    setState(29);
    match(QueryParser::BINARY_OPERATOR);
    setState(30);
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

QueryParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* QueryParser::AtomContext::STRING() {
  return getToken(QueryParser::STRING, 0);
}

QueryParser::OrExpressionContext* QueryParser::AtomContext::orExpression() {
  return getRuleContext<QueryParser::OrExpressionContext>(0);
}


size_t QueryParser::AtomContext::getRuleIndex() const {
  return QueryParser::RuleAtom;
}

void QueryParser::AtomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<QueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom(this);
}

void QueryParser::AtomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<QueryListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom(this);
}

QueryParser::AtomContext* QueryParser::atom() {
  AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, getState());
  enterRule(_localctx, 8, QueryParser::RuleAtom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(37);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case QueryParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(32);
        match(QueryParser::STRING);
        break;
      }

      case QueryParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(33);
        match(QueryParser::T__2);
        setState(34);
        orExpression();
        setState(35);
        match(QueryParser::T__3);
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

void QueryParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  queryParserInitialize();
#else
  ::antlr4::internal::call_once(queryParserOnceFlag, queryParserInitialize);
#endif
}
