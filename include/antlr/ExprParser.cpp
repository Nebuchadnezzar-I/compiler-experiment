
// Generated from ExprParser.g4 by ANTLR 4.13.2


#include "ExprParserListener.h"

#include "ExprParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ExprParserStaticData final {
  ExprParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprParserStaticData(const ExprParserStaticData&) = delete;
  ExprParserStaticData(ExprParserStaticData&&) = delete;
  ExprParserStaticData& operator=(const ExprParserStaticData&) = delete;
  ExprParserStaticData& operator=(ExprParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<ExprParserStaticData> exprparserParserStaticData = nullptr;

void exprparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (exprparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(exprparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ExprParserStaticData>(
    std::vector<std::string>{
      "program", "mainDeclaration", "endpointDeclaration", "pageDeclaration", 
      "importStatement", "importPath", "stdImportLib"
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
  	4,1,15,61,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,1,0,
  	5,0,16,8,0,10,0,12,0,19,9,0,1,0,1,0,3,0,23,8,0,1,0,1,0,1,1,1,1,1,1,1,
  	1,4,1,31,8,1,11,1,12,1,32,1,1,1,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,4,1,4,4,4,49,8,4,11,4,12,4,50,1,4,1,4,3,4,55,8,4,1,5,1,5,1,6,1,
  	6,1,6,0,0,7,0,2,4,6,8,10,12,0,1,2,0,9,11,14,14,58,0,17,1,0,0,0,2,26,1,
  	0,0,0,4,36,1,0,0,0,6,40,1,0,0,0,8,46,1,0,0,0,10,56,1,0,0,0,12,58,1,0,
  	0,0,14,16,3,8,4,0,15,14,1,0,0,0,16,19,1,0,0,0,17,15,1,0,0,0,17,18,1,0,
  	0,0,18,22,1,0,0,0,19,17,1,0,0,0,20,23,3,6,3,0,21,23,3,2,1,0,22,20,1,0,
  	0,0,22,21,1,0,0,0,23,24,1,0,0,0,24,25,5,0,0,1,25,1,1,0,0,0,26,27,5,7,
  	0,0,27,28,5,5,0,0,28,30,5,3,0,0,29,31,3,4,2,0,30,29,1,0,0,0,31,32,1,0,
  	0,0,32,30,1,0,0,0,32,33,1,0,0,0,33,34,1,0,0,0,34,35,5,4,0,0,35,3,1,0,
  	0,0,36,37,5,8,0,0,37,38,5,14,0,0,38,39,5,14,0,0,39,5,1,0,0,0,40,41,5,
  	6,0,0,41,42,5,5,0,0,42,43,5,3,0,0,43,44,5,12,0,0,44,45,5,4,0,0,45,7,1,
  	0,0,0,46,48,5,1,0,0,47,49,5,14,0,0,48,47,1,0,0,0,49,50,1,0,0,0,50,48,
  	1,0,0,0,50,51,1,0,0,0,51,54,1,0,0,0,52,55,3,10,5,0,53,55,3,12,6,0,54,
  	52,1,0,0,0,54,53,1,0,0,0,55,9,1,0,0,0,56,57,5,12,0,0,57,11,1,0,0,0,58,
  	59,7,0,0,0,59,13,1,0,0,0,5,17,22,32,50,54
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprparserParserStaticData = std::move(staticData);
}

}

ExprParser::ExprParser(TokenStream *input) : ExprParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ExprParser::ExprParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ExprParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *exprparserParserStaticData->atn, exprparserParserStaticData->decisionToDFA, exprparserParserStaticData->sharedContextCache, options);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

const atn::ATN& ExprParser::getATN() const {
  return *exprparserParserStaticData->atn;
}

std::string ExprParser::getGrammarFileName() const {
  return "ExprParser.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return exprparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& ExprParser::getVocabulary() const {
  return exprparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprParser::getSerializedATN() const {
  return exprparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

ExprParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ProgramContext::EOF() {
  return getToken(ExprParser::EOF, 0);
}

ExprParser::PageDeclarationContext* ExprParser::ProgramContext::pageDeclaration() {
  return getRuleContext<ExprParser::PageDeclarationContext>(0);
}

ExprParser::MainDeclarationContext* ExprParser::ProgramContext::mainDeclaration() {
  return getRuleContext<ExprParser::MainDeclarationContext>(0);
}

std::vector<ExprParser::ImportStatementContext *> ExprParser::ProgramContext::importStatement() {
  return getRuleContexts<ExprParser::ImportStatementContext>();
}

ExprParser::ImportStatementContext* ExprParser::ProgramContext::importStatement(size_t i) {
  return getRuleContext<ExprParser::ImportStatementContext>(i);
}


size_t ExprParser::ProgramContext::getRuleIndex() const {
  return ExprParser::RuleProgram;
}

void ExprParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void ExprParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

ExprParser::ProgramContext* ExprParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleProgram);
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
    setState(17);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::IMPORT) {
      setState(14);
      importStatement();
      setState(19);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(22);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::PAGE: {
        setState(20);
        pageDeclaration();
        break;
      }

      case ExprParser::MAIN: {
        setState(21);
        mainDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(24);
    match(ExprParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainDeclarationContext ------------------------------------------------------------------

ExprParser::MainDeclarationContext::MainDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::MainDeclarationContext::MAIN() {
  return getToken(ExprParser::MAIN, 0);
}

tree::TerminalNode* ExprParser::MainDeclarationContext::EQUAL() {
  return getToken(ExprParser::EQUAL, 0);
}

tree::TerminalNode* ExprParser::MainDeclarationContext::LSQRLY() {
  return getToken(ExprParser::LSQRLY, 0);
}

tree::TerminalNode* ExprParser::MainDeclarationContext::RSQRLY() {
  return getToken(ExprParser::RSQRLY, 0);
}

std::vector<ExprParser::EndpointDeclarationContext *> ExprParser::MainDeclarationContext::endpointDeclaration() {
  return getRuleContexts<ExprParser::EndpointDeclarationContext>();
}

ExprParser::EndpointDeclarationContext* ExprParser::MainDeclarationContext::endpointDeclaration(size_t i) {
  return getRuleContext<ExprParser::EndpointDeclarationContext>(i);
}


size_t ExprParser::MainDeclarationContext::getRuleIndex() const {
  return ExprParser::RuleMainDeclaration;
}

void ExprParser::MainDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMainDeclaration(this);
}

void ExprParser::MainDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMainDeclaration(this);
}

ExprParser::MainDeclarationContext* ExprParser::mainDeclaration() {
  MainDeclarationContext *_localctx = _tracker.createInstance<MainDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleMainDeclaration);
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
    setState(26);
    match(ExprParser::MAIN);
    setState(27);
    match(ExprParser::EQUAL);
    setState(28);
    match(ExprParser::LSQRLY);
    setState(30); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(29);
      endpointDeclaration();
      setState(32); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ExprParser::ENDPOINT);
    setState(34);
    match(ExprParser::RSQRLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndpointDeclarationContext ------------------------------------------------------------------

ExprParser::EndpointDeclarationContext::EndpointDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::EndpointDeclarationContext::ENDPOINT() {
  return getToken(ExprParser::ENDPOINT, 0);
}

std::vector<tree::TerminalNode *> ExprParser::EndpointDeclarationContext::ID() {
  return getTokens(ExprParser::ID);
}

tree::TerminalNode* ExprParser::EndpointDeclarationContext::ID(size_t i) {
  return getToken(ExprParser::ID, i);
}


size_t ExprParser::EndpointDeclarationContext::getRuleIndex() const {
  return ExprParser::RuleEndpointDeclaration;
}

void ExprParser::EndpointDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEndpointDeclaration(this);
}

void ExprParser::EndpointDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEndpointDeclaration(this);
}

ExprParser::EndpointDeclarationContext* ExprParser::endpointDeclaration() {
  EndpointDeclarationContext *_localctx = _tracker.createInstance<EndpointDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleEndpointDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(ExprParser::ENDPOINT);
    setState(37);
    match(ExprParser::ID);
    setState(38);
    match(ExprParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PageDeclarationContext ------------------------------------------------------------------

ExprParser::PageDeclarationContext::PageDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::PageDeclarationContext::PAGE() {
  return getToken(ExprParser::PAGE, 0);
}

tree::TerminalNode* ExprParser::PageDeclarationContext::EQUAL() {
  return getToken(ExprParser::EQUAL, 0);
}

tree::TerminalNode* ExprParser::PageDeclarationContext::LSQRLY() {
  return getToken(ExprParser::LSQRLY, 0);
}

tree::TerminalNode* ExprParser::PageDeclarationContext::STRING() {
  return getToken(ExprParser::STRING, 0);
}

tree::TerminalNode* ExprParser::PageDeclarationContext::RSQRLY() {
  return getToken(ExprParser::RSQRLY, 0);
}


size_t ExprParser::PageDeclarationContext::getRuleIndex() const {
  return ExprParser::RulePageDeclaration;
}

void ExprParser::PageDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPageDeclaration(this);
}

void ExprParser::PageDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPageDeclaration(this);
}

ExprParser::PageDeclarationContext* ExprParser::pageDeclaration() {
  PageDeclarationContext *_localctx = _tracker.createInstance<PageDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RulePageDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    match(ExprParser::PAGE);
    setState(41);
    match(ExprParser::EQUAL);
    setState(42);
    match(ExprParser::LSQRLY);
    setState(43);
    match(ExprParser::STRING);
    setState(44);
    match(ExprParser::RSQRLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStatementContext ------------------------------------------------------------------

ExprParser::ImportStatementContext::ImportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ImportStatementContext::IMPORT() {
  return getToken(ExprParser::IMPORT, 0);
}

ExprParser::ImportPathContext* ExprParser::ImportStatementContext::importPath() {
  return getRuleContext<ExprParser::ImportPathContext>(0);
}

ExprParser::StdImportLibContext* ExprParser::ImportStatementContext::stdImportLib() {
  return getRuleContext<ExprParser::StdImportLibContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::ImportStatementContext::ID() {
  return getTokens(ExprParser::ID);
}

tree::TerminalNode* ExprParser::ImportStatementContext::ID(size_t i) {
  return getToken(ExprParser::ID, i);
}


size_t ExprParser::ImportStatementContext::getRuleIndex() const {
  return ExprParser::RuleImportStatement;
}

void ExprParser::ImportStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportStatement(this);
}

void ExprParser::ImportStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportStatement(this);
}

ExprParser::ImportStatementContext* ExprParser::importStatement() {
  ImportStatementContext *_localctx = _tracker.createInstance<ImportStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleImportStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(ExprParser::IMPORT);
    setState(48); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(47);
              match(ExprParser::ID);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(50); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(54);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::STRING: {
        setState(52);
        importPath();
        break;
      }

      case ExprParser::STDLIB:
      case ExprParser::MATH:
      case ExprParser::SERVER:
      case ExprParser::ID: {
        setState(53);
        stdImportLib();
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

//----------------- ImportPathContext ------------------------------------------------------------------

ExprParser::ImportPathContext::ImportPathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ImportPathContext::STRING() {
  return getToken(ExprParser::STRING, 0);
}


size_t ExprParser::ImportPathContext::getRuleIndex() const {
  return ExprParser::RuleImportPath;
}

void ExprParser::ImportPathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterImportPath(this);
}

void ExprParser::ImportPathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitImportPath(this);
}

ExprParser::ImportPathContext* ExprParser::importPath() {
  ImportPathContext *_localctx = _tracker.createInstance<ImportPathContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleImportPath);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(ExprParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StdImportLibContext ------------------------------------------------------------------

ExprParser::StdImportLibContext::StdImportLibContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::StdImportLibContext::STDLIB() {
  return getToken(ExprParser::STDLIB, 0);
}

tree::TerminalNode* ExprParser::StdImportLibContext::MATH() {
  return getToken(ExprParser::MATH, 0);
}

tree::TerminalNode* ExprParser::StdImportLibContext::SERVER() {
  return getToken(ExprParser::SERVER, 0);
}

tree::TerminalNode* ExprParser::StdImportLibContext::ID() {
  return getToken(ExprParser::ID, 0);
}


size_t ExprParser::StdImportLibContext::getRuleIndex() const {
  return ExprParser::RuleStdImportLib;
}

void ExprParser::StdImportLibContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStdImportLib(this);
}

void ExprParser::StdImportLibContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStdImportLib(this);
}

ExprParser::StdImportLibContext* ExprParser::stdImportLib() {
  StdImportLibContext *_localctx = _tracker.createInstance<StdImportLibContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleStdImportLib);
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
    setState(58);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 19968) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ExprParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  exprparserParserInitialize();
#else
  ::antlr4::internal::call_once(exprparserParserOnceFlag, exprparserParserInitialize);
#endif
}
