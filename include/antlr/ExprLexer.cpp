
// Generated from ExprLexer.g4 by ANTLR 4.13.2


#include "ExprLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ExprLexerStaticData final {
  ExprLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprLexerStaticData(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData(ExprLexerStaticData&&) = delete;
  ExprLexerStaticData& operator=(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData& operator=(ExprLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag exprlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<ExprLexerStaticData> exprlexerLexerStaticData = nullptr;

void exprlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (exprlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(exprlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ExprLexerStaticData>(
    std::vector<std::string>{
      "IMPORT", "COMMA", "LSQRLY", "RSQRLY", "EQUAL", "PAGE", "MAIN", "ENDPOINT", 
      "STDLIB", "MATH", "SERVER", "STRING", "INT", "ID", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'import'", "','", "'{'", "'}'", "'='", "'page'", "'main'", "'endpoint'", 
      "'std'", "'math'", "'server'"
    },
    std::vector<std::string>{
      "", "IMPORT", "COMMA", "LSQRLY", "RSQRLY", "EQUAL", "PAGE", "MAIN", 
      "ENDPOINT", "STDLIB", "MATH", "SERVER", "STRING", "INT", "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,15,111,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,
  	1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,11,1,11,1,11,1,11,5,11,86,8,11,10,11,12,11,89,9,11,1,11,1,11,1,12,
  	4,12,94,8,12,11,12,12,12,95,1,13,1,13,5,13,100,8,13,10,13,12,13,103,9,
  	13,1,14,4,14,106,8,14,11,14,12,14,107,1,14,1,14,0,0,15,1,1,3,2,5,3,7,
  	4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,1,0,5,2,
  	0,34,34,92,92,1,0,48,57,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,
  	97,122,3,0,9,10,12,13,32,32,115,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,
  	7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,
  	0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,
  	0,29,1,0,0,0,1,31,1,0,0,0,3,38,1,0,0,0,5,40,1,0,0,0,7,42,1,0,0,0,9,44,
  	1,0,0,0,11,46,1,0,0,0,13,51,1,0,0,0,15,56,1,0,0,0,17,65,1,0,0,0,19,69,
  	1,0,0,0,21,74,1,0,0,0,23,81,1,0,0,0,25,93,1,0,0,0,27,97,1,0,0,0,29,105,
  	1,0,0,0,31,32,5,105,0,0,32,33,5,109,0,0,33,34,5,112,0,0,34,35,5,111,0,
  	0,35,36,5,114,0,0,36,37,5,116,0,0,37,2,1,0,0,0,38,39,5,44,0,0,39,4,1,
  	0,0,0,40,41,5,123,0,0,41,6,1,0,0,0,42,43,5,125,0,0,43,8,1,0,0,0,44,45,
  	5,61,0,0,45,10,1,0,0,0,46,47,5,112,0,0,47,48,5,97,0,0,48,49,5,103,0,0,
  	49,50,5,101,0,0,50,12,1,0,0,0,51,52,5,109,0,0,52,53,5,97,0,0,53,54,5,
  	105,0,0,54,55,5,110,0,0,55,14,1,0,0,0,56,57,5,101,0,0,57,58,5,110,0,0,
  	58,59,5,100,0,0,59,60,5,112,0,0,60,61,5,111,0,0,61,62,5,105,0,0,62,63,
  	5,110,0,0,63,64,5,116,0,0,64,16,1,0,0,0,65,66,5,115,0,0,66,67,5,116,0,
  	0,67,68,5,100,0,0,68,18,1,0,0,0,69,70,5,109,0,0,70,71,5,97,0,0,71,72,
  	5,116,0,0,72,73,5,104,0,0,73,20,1,0,0,0,74,75,5,115,0,0,75,76,5,101,0,
  	0,76,77,5,114,0,0,77,78,5,118,0,0,78,79,5,101,0,0,79,80,5,114,0,0,80,
  	22,1,0,0,0,81,87,5,34,0,0,82,86,8,0,0,0,83,84,5,92,0,0,84,86,9,0,0,0,
  	85,82,1,0,0,0,85,83,1,0,0,0,86,89,1,0,0,0,87,85,1,0,0,0,87,88,1,0,0,0,
  	88,90,1,0,0,0,89,87,1,0,0,0,90,91,5,34,0,0,91,24,1,0,0,0,92,94,7,1,0,
  	0,93,92,1,0,0,0,94,95,1,0,0,0,95,93,1,0,0,0,95,96,1,0,0,0,96,26,1,0,0,
  	0,97,101,7,2,0,0,98,100,7,3,0,0,99,98,1,0,0,0,100,103,1,0,0,0,101,99,
  	1,0,0,0,101,102,1,0,0,0,102,28,1,0,0,0,103,101,1,0,0,0,104,106,7,4,0,
  	0,105,104,1,0,0,0,106,107,1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,
  	109,1,0,0,0,109,110,6,14,0,0,110,30,1,0,0,0,6,0,85,87,95,101,107,1,6,
  	0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprlexerLexerStaticData = std::move(staticData);
}

}

ExprLexer::ExprLexer(CharStream *input) : Lexer(input) {
  ExprLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *exprlexerLexerStaticData->atn, exprlexerLexerStaticData->decisionToDFA, exprlexerLexerStaticData->sharedContextCache);
}

ExprLexer::~ExprLexer() {
  delete _interpreter;
}

std::string ExprLexer::getGrammarFileName() const {
  return "ExprLexer.g4";
}

const std::vector<std::string>& ExprLexer::getRuleNames() const {
  return exprlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ExprLexer::getChannelNames() const {
  return exprlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ExprLexer::getModeNames() const {
  return exprlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ExprLexer::getVocabulary() const {
  return exprlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprLexer::getSerializedATN() const {
  return exprlexerLexerStaticData->serializedATN;
}

const atn::ATN& ExprLexer::getATN() const {
  return *exprlexerLexerStaticData->atn;
}




void ExprLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  exprlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(exprlexerLexerOnceFlag, exprlexerLexerInitialize);
#endif
}
