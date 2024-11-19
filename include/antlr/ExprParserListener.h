
// Generated from ExprParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExprParser.
 */
class  ExprParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(ExprParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(ExprParser::ProgramContext *ctx) = 0;

  virtual void enterMainDeclaration(ExprParser::MainDeclarationContext *ctx) = 0;
  virtual void exitMainDeclaration(ExprParser::MainDeclarationContext *ctx) = 0;

  virtual void enterEndpointDeclaration(ExprParser::EndpointDeclarationContext *ctx) = 0;
  virtual void exitEndpointDeclaration(ExprParser::EndpointDeclarationContext *ctx) = 0;

  virtual void enterPageDeclaration(ExprParser::PageDeclarationContext *ctx) = 0;
  virtual void exitPageDeclaration(ExprParser::PageDeclarationContext *ctx) = 0;

  virtual void enterImportStatement(ExprParser::ImportStatementContext *ctx) = 0;
  virtual void exitImportStatement(ExprParser::ImportStatementContext *ctx) = 0;

  virtual void enterImportPath(ExprParser::ImportPathContext *ctx) = 0;
  virtual void exitImportPath(ExprParser::ImportPathContext *ctx) = 0;

  virtual void enterStdImportLib(ExprParser::StdImportLibContext *ctx) = 0;
  virtual void exitStdImportLib(ExprParser::StdImportLibContext *ctx) = 0;


};

