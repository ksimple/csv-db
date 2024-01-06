
// Generated from src/Query.g4 by ANTLR 4.13.1


#include "QueryLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct QueryLexerStaticData final {
  QueryLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  QueryLexerStaticData(const QueryLexerStaticData&) = delete;
  QueryLexerStaticData(QueryLexerStaticData&&) = delete;
  QueryLexerStaticData& operator=(const QueryLexerStaticData&) = delete;
  QueryLexerStaticData& operator=(QueryLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag querylexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
QueryLexerStaticData *querylexerLexerStaticData = nullptr;

void querylexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (querylexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(querylexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<QueryLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "STRING", "BINARY_OPERATOR", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'or'", "'and'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "STRING", "BINARY_OPERATOR", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,7,60,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
  	1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,4,4,28,8,4,11,4,12,4,
  	29,1,4,1,4,1,4,1,4,5,4,36,8,4,10,4,12,4,39,9,4,1,4,3,4,42,8,4,1,5,1,5,
  	1,5,1,5,1,5,1,5,1,5,1,5,3,5,52,8,5,1,6,4,6,55,8,6,11,6,12,6,56,1,6,1,
  	6,0,0,7,1,1,3,2,5,3,7,4,9,5,11,6,13,7,1,0,6,5,0,9,9,32,34,36,36,38,38,
  	61,61,1,0,34,34,2,0,34,34,92,92,1,0,92,92,3,0,34,34,92,92,110,110,3,0,
  	9,10,13,13,32,32,67,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,
  	9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,1,15,1,0,0,0,3,18,1,0,0,0,5,22,1,
  	0,0,0,7,24,1,0,0,0,9,41,1,0,0,0,11,51,1,0,0,0,13,54,1,0,0,0,15,16,5,111,
  	0,0,16,17,5,114,0,0,17,2,1,0,0,0,18,19,5,97,0,0,19,20,5,110,0,0,20,21,
  	5,100,0,0,21,4,1,0,0,0,22,23,5,40,0,0,23,6,1,0,0,0,24,25,5,41,0,0,25,
  	8,1,0,0,0,26,28,8,0,0,0,27,26,1,0,0,0,28,29,1,0,0,0,29,27,1,0,0,0,29,
  	30,1,0,0,0,30,42,1,0,0,0,31,37,7,1,0,0,32,36,8,2,0,0,33,34,7,3,0,0,34,
  	36,7,4,0,0,35,32,1,0,0,0,35,33,1,0,0,0,36,39,1,0,0,0,37,35,1,0,0,0,37,
  	38,1,0,0,0,38,40,1,0,0,0,39,37,1,0,0,0,40,42,7,1,0,0,41,27,1,0,0,0,41,
  	31,1,0,0,0,42,10,1,0,0,0,43,44,5,61,0,0,44,52,5,61,0,0,45,46,5,33,0,0,
  	46,52,5,61,0,0,47,48,5,38,0,0,48,52,5,61,0,0,49,50,5,36,0,0,50,52,5,61,
  	0,0,51,43,1,0,0,0,51,45,1,0,0,0,51,47,1,0,0,0,51,49,1,0,0,0,52,12,1,0,
  	0,0,53,55,7,5,0,0,54,53,1,0,0,0,55,56,1,0,0,0,56,54,1,0,0,0,56,57,1,0,
  	0,0,57,58,1,0,0,0,58,59,6,6,0,0,59,14,1,0,0,0,7,0,29,35,37,41,51,56,1,
  	6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  querylexerLexerStaticData = staticData.release();
}

}

QueryLexer::QueryLexer(CharStream *input) : Lexer(input) {
  QueryLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *querylexerLexerStaticData->atn, querylexerLexerStaticData->decisionToDFA, querylexerLexerStaticData->sharedContextCache);
}

QueryLexer::~QueryLexer() {
  delete _interpreter;
}

std::string QueryLexer::getGrammarFileName() const {
  return "Query.g4";
}

const std::vector<std::string>& QueryLexer::getRuleNames() const {
  return querylexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& QueryLexer::getChannelNames() const {
  return querylexerLexerStaticData->channelNames;
}

const std::vector<std::string>& QueryLexer::getModeNames() const {
  return querylexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& QueryLexer::getVocabulary() const {
  return querylexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView QueryLexer::getSerializedATN() const {
  return querylexerLexerStaticData->serializedATN;
}

const atn::ATN& QueryLexer::getATN() const {
  return *querylexerLexerStaticData->atn;
}




void QueryLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  querylexerLexerInitialize();
#else
  ::antlr4::internal::call_once(querylexerLexerOnceFlag, querylexerLexerInitialize);
#endif
}
