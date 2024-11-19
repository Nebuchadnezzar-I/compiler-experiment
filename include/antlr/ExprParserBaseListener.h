
// Generated from ExprParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprParserListener.h"


/**
 * This class provides an empty implementation of ExprParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ExprParserBaseListener : public ExprParserListener {
public:

  virtual void enterProgram(ExprParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(ExprParser::ProgramContext * /*ctx*/) override { }

  virtual void enterMainDeclaration(ExprParser::MainDeclarationContext * /*ctx*/) override { }
  virtual void exitMainDeclaration(ExprParser::MainDeclarationContext * /*ctx*/) override { }

  virtual void enterEndpointDeclaration(ExprParser::EndpointDeclarationContext * /*ctx*/) override { }
  virtual void exitEndpointDeclaration(ExprParser::EndpointDeclarationContext * /*ctx*/) override { }

  virtual void enterPageDeclaration(ExprParser::PageDeclarationContext * /*ctx*/) override { }
  virtual void exitPageDeclaration(ExprParser::PageDeclarationContext * /*ctx*/) override { }

  virtual void enterImportStatement(ExprParser::ImportStatementContext * /*ctx*/) override { }
  virtual void exitImportStatement(ExprParser::ImportStatementContext * /*ctx*/) override { }

  virtual void enterImportPath(ExprParser::ImportPathContext * /*ctx*/) override { }
  virtual void exitImportPath(ExprParser::ImportPathContext * /*ctx*/) override { }

  virtual void enterStdImportLib(ExprParser::StdImportLibContext * /*ctx*/) override { }
  virtual void exitStdImportLib(ExprParser::StdImportLibContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

