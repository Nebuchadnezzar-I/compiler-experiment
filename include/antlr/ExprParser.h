
// Generated from ExprParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  ExprParser : public antlr4::Parser {
public:
  enum {
    IMPORT = 1, COMMA = 2, LSQRLY = 3, RSQRLY = 4, EQUAL = 5, PAGE = 6, 
    MAIN = 7, ENDPOINT = 8, STDLIB = 9, MATH = 10, SERVER = 11, STRING = 12, 
    INT = 13, ID = 14, WS = 15
  };

  enum {
    RuleProgram = 0, RuleMainDeclaration = 1, RuleEndpointDeclaration = 2, 
    RulePageDeclaration = 3, RuleImportStatement = 4, RuleImportPath = 5, 
    RuleStdImportLib = 6
  };

  explicit ExprParser(antlr4::TokenStream *input);

  ExprParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ExprParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class MainDeclarationContext;
  class EndpointDeclarationContext;
  class PageDeclarationContext;
  class ImportStatementContext;
  class ImportPathContext;
  class StdImportLibContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    PageDeclarationContext *pageDeclaration();
    MainDeclarationContext *mainDeclaration();
    std::vector<ImportStatementContext *> importStatement();
    ImportStatementContext* importStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramContext* program();

  class  MainDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MainDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MAIN();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *LSQRLY();
    antlr4::tree::TerminalNode *RSQRLY();
    std::vector<EndpointDeclarationContext *> endpointDeclaration();
    EndpointDeclarationContext* endpointDeclaration(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MainDeclarationContext* mainDeclaration();

  class  EndpointDeclarationContext : public antlr4::ParserRuleContext {
  public:
    EndpointDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENDPOINT();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EndpointDeclarationContext* endpointDeclaration();

  class  PageDeclarationContext : public antlr4::ParserRuleContext {
  public:
    PageDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PAGE();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *LSQRLY();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *RSQRLY();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PageDeclarationContext* pageDeclaration();

  class  ImportStatementContext : public antlr4::ParserRuleContext {
  public:
    ImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    ImportPathContext *importPath();
    StdImportLibContext *stdImportLib();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportStatementContext* importStatement();

  class  ImportPathContext : public antlr4::ParserRuleContext {
  public:
    ImportPathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ImportPathContext* importPath();

  class  StdImportLibContext : public antlr4::ParserRuleContext {
  public:
    StdImportLibContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STDLIB();
    antlr4::tree::TerminalNode *MATH();
    antlr4::tree::TerminalNode *SERVER();
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StdImportLibContext* stdImportLib();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

