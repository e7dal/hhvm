
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1

/* Substitute the variable and function names.  */
#define yyparse         Compilerparse
#define yylex           Compilerlex
#define yyerror         Compilererror
#define yylval          Compilerlval
#define yychar          Compilerchar
#define yydebug         Compilerdebug
#define yynerrs         Compilernerrs
#define yylloc          Compilerlloc

/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "../../../hphp/util/parser/hphp.y"

#include "parser.h"
#include <util/util.h>
#include <util/logger.h>

// macros for bison
#define YYSTYPE HPHP::HPHP_PARSER_NS::Token
#define YYSTYPE_IS_TRIVIAL 1
#define YYLTYPE HPHP::Location
#define YYLTYPE_IS_TRIVIAL 1
#define YYERROR_VERBOSE
#define YYINITDEPTH 500
#define YYLEX_PARAM _p

#ifdef yyerror
#undef yyerror
#endif
#define yyerror(loc,p,msg) p->fatal(loc,msg)

#ifdef YYLLOC_DEFAULT
# undef YYLLOC_DEFAULT
#endif
#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#define YYLLOC_DEFAULT(Current, Rhs, N)                                 \
  do                                                                    \
    if (YYID (N)) {                                                     \
      (Current).first(YYRHSLOC (Rhs, 1));                               \
      (Current).last (YYRHSLOC (Rhs, N));                               \
    } else {                                                            \
      (Current).line0 = (Current).line1 = YYRHSLOC (Rhs, 0).line1;      \
      (Current).char0 = (Current).char1 = YYRHSLOC (Rhs, 0).char1;      \
    }                                                                   \
  while (YYID (0));                                                     \
  _p->setRuleLocation(&Current);

#define YYCOPY(To, From, Count)                  \
  do {                                           \
    YYSIZE_T yyi;                                \
    for (yyi = 0; yyi < (Count); yyi++) {        \
      (To)[yyi] = (From)[yyi];                   \
    }                                            \
    if (From != From ## a) {                     \
      YYSTACK_FREE (From);                       \
    }                                            \
  }                                              \
  while (YYID (0))

#define YYCOPY_RESET(To, From, Count)           \
  do                                            \
    {                                           \
      YYSIZE_T yyi;                             \
      for (yyi = 0; yyi < (Count); yyi++) {     \
        (To)[yyi] = (From)[yyi];                \
        (From)[yyi].reset();                    \
      }                                         \
      if (From != From ## a) {                  \
        YYSTACK_FREE (From);                    \
      }                                         \
    }                                           \
  while (YYID (0))

#define YYTOKEN_RESET(From, Count)              \
  do                                            \
    {                                           \
      YYSIZE_T yyi;                             \
      for (yyi = 0; yyi < (Count); yyi++) {     \
        (From)[yyi].reset();                    \
      }                                         \
      if (From != From ## a) {                  \
        YYSTACK_FREE (From);                    \
      }                                         \
    }                                           \
  while (YYID (0))

# define YYSTACK_RELOCATE_RESET(Stack_alloc, Stack)                     \
  do                                                                    \
    {                                                                   \
      YYSIZE_T yynewbytes;                                              \
      YYCOPY_RESET (&yyptr->Stack_alloc, Stack, yysize);                \
      Stack = &yyptr->Stack_alloc;                                      \
      yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
      yyptr += yynewbytes / sizeof (*yyptr);                            \
    }                                                                   \
  while (YYID (0))

#define YYSTACK_CLEANUP                         \
  YYTOKEN_RESET (yyvs, yystacksize);            \
  if (yyvs != yyvsa) {                          \
    YYSTACK_FREE (yyvs);                        \
  }                                             \
  if (yyls != yylsa) {                          \
    YYSTACK_FREE (yyls);                        \
  }                                             \


// macros for rules
#define BEXP(e...) _p->onBinaryOpExp(e);
#define UEXP(e...) _p->onUnaryOpExp(e);

using namespace HPHP::HPHP_PARSER_NS;

///////////////////////////////////////////////////////////////////////////////
// helpers

static void scalar_num(Parser *_p, Token &out, const char *num) {
  Token t;
  t.setText(num);
  _p->onScalar(out, T_LNUMBER, t);
}

static void scalar_num(Parser *_p, Token &out, int num) {
  Token t;
  t.setText(boost::lexical_cast<std::string>(num));
  _p->onScalar(out, T_LNUMBER, t);
}

static void scalar_null(Parser *_p, Token &out) {
  Token tnull; tnull.setText("null");
  _p->onConstantValue(out, tnull);
}

///////////////////////////////////////////////////////////////////////////////
// converting constant declartion to "define(name, value);"

static void on_constant(Parser *_p, Token &out, Token *stmts,
                        Token &name, Token &value) {
  Token sname;   _p->onScalar(sname, T_CONSTANT_ENCAPSED_STRING, name);

  Token fname;   fname.setText("define");
  Token params1; _p->onCallParam(params1, NULL, sname, 0);
  Token params2; _p->onCallParam(params2, &params1, value, 0);
  Token call;    _p->onCall(call, 0, fname, params2, 0);
  Token scall;   _p->onExpStatement(scall, call);

  Token stmts0;
  if (!stmts) {
    _p->onStatementListStart(stmts0);
    stmts = &stmts0;
  }
  _p->addStatement(out, *stmts, scall);
}

///////////////////////////////////////////////////////////////////////////////
// continuation transformations

void prepare_generator(Parser *_p, Token &stmt, Token &params) {
  // 1. add prologue and epilogue to original body and store it back to "stmt"
  {
    // hphp_unpack_continuation()
    Token empty;
    Token cname;   cname.setText("hphp_unpack_continuation");
    Token unpack;  _p->onCall(unpack, false, cname, empty, NULL, true);
    Token sunpack; _p->onExpStatement(sunpack, unpack);

    Token stmts0;  _p->onStatementListStart(stmts0);
    Token stmts1;  _p->addStatement(stmts1, stmts0, sunpack);
    Token stmts2;  _p->addStatement(stmts2, stmts1, stmt);

    stmt.reset();
    _p->finishStatement(stmt, stmts2); stmt = 1;
  }

  // 2. prepare a single continuation parameter list and store it in "params"
  {
    Token type;    type.setText("Continuation");
    Token var;     var.setText(CONTINUATION_OBJECT_NAME);
    params.reset();
    type.reset();
    _p->onParam(params, NULL, type, var, false, NULL, NULL);
  }
}

// create a generator function with original name and parameters
void create_generator(Parser *_p, Token &out, Token &params,
                      Token &name, const std::string &closureName,
                      const char *clsname, Token *modifiers, bool getArgs,
                      Token &origGenFunc, bool isHhvm, Token *attr) {
  _p->pushFuncLocation();
  if (clsname) {
    _p->onMethodStart(name, *modifiers, false);
  } else {
    _p->onFunctionStart(name, false);
  }

  Token scont;
  {
    Token cname;
    if (isHhvm) {
      Token cn;    cn.setText(clsname ? "__CLASS__" : "");
                   _p->onScalar(
                     cname,
                     clsname ? T_CLASS_C : T_CONSTANT_ENCAPSED_STRING,
                     cn);
    } else {
      Token cn;    cn.setText(clsname ? clsname : "");
                   _p->onScalar(cname, T_CONSTANT_ENCAPSED_STRING, cn);
    }

    Token fn;      fn.setText(closureName);
    Token fname;   _p->onScalar(fname, T_CONSTANT_ENCAPSED_STRING, fn);

    Token ofn;     ofn.setText(clsname ? "__METHOD__" : "__FUNCTION__");
    Token oname;   _p->onScalar(oname, clsname ? T_METHOD_C : T_FUNC_C, ofn);

    Token param1;  _p->onCallParam(param1, NULL, cname, false);
                   _p->onCallParam(param1, &param1, fname, false);
                   _p->onCallParam(param1, &param1, oname, false);

    if (getArgs) {
      Token cname;   cname.setText("func_get_args");
      Token empty;
      Token call;    _p->onCall(call, false, cname, empty, NULL);
                     _p->onCallParam(param1, &param1, call, false);
    }

    Token cname0;  cname0.setText("hphp_create_continuation");
    Token call;    _p->onCall(call, false, cname0, param1, NULL, true);
    Token ret;     _p->onReturn(ret, &call);

    Token stmts0;  _p->onStatementListStart(stmts0);
    Token stmts1;  _p->addStatement(stmts1, stmts0, ret);
    _p->finishStatement(scont, stmts1); scont = 1;
  }

  Token ret, ref;
  ret.setText("Continuation");
  ret.setCheck();
  if (clsname) {
    Token closure;
    _p->onMethod(closure, *modifiers, ret, ref, name, params, scont, attr);
    origGenFunc = closure;

    Token stmts0;  _p->onStatementListStart(stmts0);
    Token stmts1;  _p->addStatement(stmts1, stmts0, closure);
    Token stmts2;  _p->addStatement(stmts2, stmts1, out);
    _p->finishStatement(out, stmts2); out = 1;
  } else {
    out.reset();
    _p->onFunction(out, modifiers, ret, ref, name, params, scont, attr);
    origGenFunc = out;
  }
}

///////////////////////////////////////////////////////////////////////////////

static void user_attribute_check(Parser *_p) {
  if (!_p->enableHipHopSyntax()) {
    HPHP_PARSER_ERROR("User attributes are not enabled", _p);
  }
}

static void finally_statement(Parser *_p) {
  if (!_p->enableFinallyStatement()) {
    HPHP_PARSER_ERROR("Finally statement is not enabled", _p);
  }
}

static void constant_ae(Parser *_p, Token &out, Token &value) {
  const std::string& valueStr = value.text();
  if (valueStr.size() < 3 || valueStr.size() > 5 ||
      (strcasecmp("true", valueStr.c_str()) != 0 &&
       strcasecmp("false", valueStr.c_str()) != 0 &&
       strcasecmp("null", valueStr.c_str()) != 0 &&
       strcasecmp("inf", valueStr.c_str()) != 0 &&
       strcasecmp("nan", valueStr.c_str()) != 0)) {
    HPHP_PARSER_ERROR("User-defined constants are not allowed in user "
                      "attribute expressions", _p);
  }
  _p->onConstantValue(out, value);
}

///////////////////////////////////////////////////////////////////////////////

/**
 * XHP functions: They are defined here, so different parsers don't have to
 * handle XHP rules at all.
 */

static void xhp_tag(Parser *_p, Token &out, Token &label, Token &body) {
  if (!_p->enableXHP()) {
    HPHP_PARSER_ERROR("XHP: not enabled", _p);
  }

  if (!body.text().empty() && body.text() != label.text()) {
    HPHP_PARSER_ERROR("XHP: mismatched tag: '%s' not the same as '%s'",
                      _p, body.text().c_str(), label.text().c_str());
  }

  label.xhpLabel();
  Token name; _p->onName(name, label, Parser::StringName);
  _p->onNewObject(out, name, body);
}

static void xhp_attribute(Parser *_p, Token &out, Token &type, Token &label,
                          Token &def, Token &req) {
  /**
   * The basic builtin types "bool", "int", "double", and "string" all map to
   * T_STRING in the parser, and the parser uses always uses type code 5 for
   * T_STRING. However, XHP uses different type codes for these basic builtin
   * types, so we need to fix up the type code here to make XHP happy.
   */
  if (type.num() == 5 && type.text().size() >= 3 && type.text().size() <= 7) {
    switch (type.text()[0]) {
      case 'b':
        if ((type.text().size() == 4 &&
             strcasecmp(type.text().c_str(), "bool") == 0) ||
            (type.text().size() == 7 &&
             strcasecmp(type.text().c_str(), "boolean") == 0)) {
          type.reset();
          type.setNum(2);
        }
        break;
      case 'd':
        if (type.text().size() == 6 &&
            strcasecmp(type.text().c_str(), "double") == 0) {
          type.reset();
          type.setNum(8);
        }
        break;
      case 'f':
        if (type.text().size() == 5 &&
            strcasecmp(type.text().c_str(), "float") == 0) {
          type.reset();
          type.setNum(8);
        }
        break;
      case 'i':
        if ((type.text().size() == 3 &&
             strcasecmp(type.text().c_str(), "int") == 0) ||
            (type.text().size() == 7 &&
             strcasecmp(type.text().c_str(), "integer") == 0)) {
          type.reset();
          type.setNum(3);
        }
        break;
      case 'r':
        if (type.text().size() == 4 &&
            strcasecmp(type.text().c_str(), "real") == 0) {
          type.reset();
          type.setNum(8);
        }
        break;
      case 's':
        if (type.text().size() == 6 &&
            strcasecmp(type.text().c_str(), "string") == 0) {
          type.reset();
          type.setNum(1);
        }
        break;
      default:
        break;
    }
  }

  Token num;  scalar_num(_p, num, type.num());
  Token arr1; _p->onArrayPair(arr1, 0, 0, num, 0);

  Token arr2;
  switch (type.num()) {
    case 5: /* class */ {
      Token cls; _p->onScalar(cls, T_CONSTANT_ENCAPSED_STRING, type);
      _p->onArrayPair(arr2, &arr1, 0, cls, 0);
      break;
    }
    case 7: /* enum */ {
      Token arr;   _p->onArray(arr, type);
      _p->onArrayPair(arr2, &arr1, 0, arr, 0);
      break;
    }
    default: {
      Token tnull; scalar_null(_p, tnull);
      _p->onArrayPair(arr2, &arr1, 0, tnull, 0);
      break;
    }
  }

  Token arr3; _p->onArrayPair(arr3, &arr2, 0, def, 0);
  Token arr4; _p->onArrayPair(arr4, &arr3, 0, req, 0);
  _p->onArray(out, arr4);
  out.setText(label);
}

static void xhp_attribute_list(Parser *_p, Token &out, Token *list,
                               Token &decl) {
  if (decl.num() == 0) {
    decl.xhpLabel();
    if (list) {
      out = *list;
      out.setText(list->text() + ":" + decl.text()); // avoiding vector<string>
    } else {
      out.setText(decl);
    }
  } else {
    Token name; _p->onScalar(name, T_CONSTANT_ENCAPSED_STRING, decl);
    _p->onArrayPair(out, list, &name, decl, 0);
    if (list) {
      out.setText(list->text());
    } else {
      out.setText("");
    }
  }
}

static void xhp_attribute_stmt(Parser *_p, Token &out, Token &attributes) {
  if (!_p->enableXHP()) {
    HPHP_PARSER_ERROR("XHP: not enabled", _p);
  }

  Token modifiers;
  Token fname; fname.setText("__xhpAttributeDeclaration");
  {
    Token m;
    Token m1; m1.setNum(T_PROTECTED); _p->onMemberModifier(m, NULL, m1);
    Token m2; m2.setNum(T_STATIC);    _p->onMemberModifier(modifiers, &m, m2);
  }
  _p->pushFuncLocation();
  _p->onMethodStart(fname, modifiers);

  std::vector<std::string> classes;
  HPHP::Util::split(':', attributes.text().c_str(), classes, true);
  Token arrAttributes; _p->onArray(arrAttributes, attributes);

  Token dummy;

  Token stmts0;
  {
    _p->onStatementListStart(stmts0);
  }
  Token stmts1;
  {
    // static $_ = -1;
    Token one;     scalar_num(_p, one, "1");
    Token mone;    UEXP(mone, one, '-', 1);
    Token var;     var.set(T_VARIABLE, "_");
    Token decl;    _p->onStaticVariable(decl, 0, var, &mone);
    Token sdecl;   _p->onStatic(sdecl, decl);
    _p->addStatement(stmts1, stmts0, sdecl);
  }
  Token stmts2;
  {
    // if ($_ === -1) {
    //   $_ = array_merge(parent::__xhpAttributeDeclaration(),
    //                    attributes);
    // }
    Token parent;  parent.set(T_STRING, "parent");
    Token cls;     _p->onName(cls, parent, Parser::StringName);
    Token fname;   fname.setText("__xhpAttributeDeclaration");
    Token param1;  _p->onCall(param1, 0, fname, dummy, &cls);
    Token params1; _p->onCallParam(params1, NULL, param1, 0);

    for (unsigned int i = 0; i < classes.size(); i++) {
      Token parent;  parent.set(T_STRING, classes[i]);
      Token cls;     _p->onName(cls, parent, Parser::StringName);
      Token fname;   fname.setText("__xhpAttributeDeclaration");
      Token param;   _p->onCall(param, 0, fname, dummy, &cls);

      Token params; _p->onCallParam(params, &params1, param, 0);
      params1 = params;
    }

    Token params2; _p->onCallParam(params2, &params1, arrAttributes, 0);

    Token name;    name.set(T_STRING, "array_merge");
    Token call;    _p->onCall(call, 0, name, params2, NULL);
    Token tvar;    tvar.set(T_VARIABLE, "_");
    Token var;     _p->onSimpleVariable(var, tvar);
    Token assign;  _p->onAssign(assign, var, call, 0);
    Token exp;     _p->onExpStatement(exp, assign);
    Token block;   _p->onBlock(block, exp);

    Token tvar2;   tvar2.set(T_VARIABLE, "_");
    Token var2;    _p->onSimpleVariable(var2, tvar2);
    Token one;     scalar_num(_p, one, "1");
    Token mone;    UEXP(mone, one, '-', 1);
    Token cond;    BEXP(cond, var2, mone, T_IS_IDENTICAL);
    Token dummy1, dummy2;
    Token sif;     _p->onIf(sif, cond, block, dummy1, dummy2);
    _p->addStatement(stmts2, stmts1, sif);
  }
  Token stmts3;
  {
    // return $_;
    Token tvar;    tvar.set(T_VARIABLE, "_");
    Token var;     _p->onSimpleVariable(var, tvar);
    Token ret;     _p->onReturn(ret, &var);
    _p->addStatement(stmts3, stmts2, ret);
  }
  Token stmt;
  {
    _p->finishStatement(stmt, stmts3);
    stmt = 1;
  }
  {
    Token params, ret, ref; ref = 1;
    _p->onMethod(out, modifiers, ret, ref, fname, params, stmt, 0, false);
  }
}

static void xhp_collect_attributes(Parser *_p, Token &out, Token &stmts) {
  Token *attr = _p->xhpGetAttributes();
  if (attr) {
    Token stmt;
    xhp_attribute_stmt(_p, stmt, *attr);
    _p->onClassStatement(out, stmts, stmt);
  } else {
    out = stmts;
  }
}

static void xhp_category_stmt(Parser *_p, Token &out, Token &categories) {
  if (!_p->enableXHP()) {
    HPHP_PARSER_ERROR("XHP: not enabled", _p);
  }

  Token fname;     fname.setText("__xhpCategoryDeclaration");
  Token m1;        m1.setNum(T_PROTECTED);
  Token modifiers; _p->onMemberModifier(modifiers, 0, m1);
  _p->pushFuncLocation();
  _p->onMethodStart(fname, modifiers);

  Token stmts0;
  {
    _p->onStatementListStart(stmts0);
  }
  Token stmts1;
  {
    // static $_ = categories;
    Token arr;     _p->onArray(arr, categories);
    Token var;     var.set(T_VARIABLE, "_");
    Token decl;    _p->onStaticVariable(decl, 0, var, &arr);
    Token sdecl;   _p->onStatic(sdecl, decl);
    _p->addStatement(stmts1, stmts0, sdecl);
  }
  Token stmts2;
  {
    // return $_;
    Token tvar;    tvar.set(T_VARIABLE, "_");
    Token var;     _p->onSimpleVariable(var, tvar);
    Token ret;     _p->onReturn(ret, &var);
    _p->addStatement(stmts2, stmts1, ret);
  }
  Token stmt;
  {
    _p->finishStatement(stmt, stmts2);
    stmt = 1;
  }
  {
    Token params, ret, ref; ref = 1;
    _p->onMethod(out, modifiers, ret, ref, fname, params, stmt, 0, false);
  }
}

static void xhp_children_decl_tag(Parser *_p, Token &arr, Token &tag) {
  Token num;  scalar_num(_p, num, tag.num());
  Token arr1; _p->onArrayPair(arr1, &arr, 0, num, 0);

  Token name;
  if (tag.num() == 3 || tag.num() == 4) {
    _p->onScalar(name, T_CONSTANT_ENCAPSED_STRING, tag);
  } else if (tag.num() >= 0) {
    scalar_null(_p, name);
  } else {
    HPHP_PARSER_ERROR("XHP: unknown children declaration", _p);
  }
  Token arr2; _p->onArrayPair(arr2, &arr1, 0, name, 0);
  arr = arr2;
}

static void xhp_children_decl(Parser *_p, Token &out, Token &op1, int op,
                              Token *op2) {
  Token num; scalar_num(_p, num, op);
  Token arr; _p->onArrayPair(arr, 0, 0, num, 0);

  if (op2) {
    Token arr1; _p->onArrayPair(arr1, &arr,  0, op1,  0);
    Token arr2; _p->onArrayPair(arr2, &arr1, 0, *op2, 0);
    _p->onArray(out, arr2);
  } else {
    xhp_children_decl_tag(_p, arr, op1);
    _p->onArray(out, arr);
  }
}

static void xhp_children_paren(Parser *_p, Token &out, Token exp, int op) {
  Token num;  scalar_num(_p, num, op);
  Token arr1; _p->onArrayPair(arr1, 0, 0, num, 0);

  Token num5; scalar_num(_p, num5, 5);
  Token arr2; _p->onArrayPair(arr2, &arr1, 0, num5, 0);

  Token arr3; _p->onArrayPair(arr3, &arr2, 0, exp, 0);
  _p->onArray(out, arr3);
}

static void xhp_children_stmt(Parser *_p, Token &out, Token &children) {
  if (!_p->enableXHP()) {
    HPHP_PARSER_ERROR("XHP: not enabled", _p);
  }

  Token fname;     fname.setText("__xhpChildrenDeclaration");
  Token m1;        m1.setNum(T_PROTECTED);
  Token modifiers; _p->onMemberModifier(modifiers, 0, m1);
  _p->pushFuncLocation();
  _p->onMethodStart(fname, modifiers);

  Token stmts0;
  {
    _p->onStatementListStart(stmts0);
  }
  Token stmts1;
  {
    // static $_ = children;
    Token arr;
    if (children.num() == 2) {
      arr = children;
    } else if (children.num() >= 0) {
      scalar_num(_p, arr, children.num());
    } else {
      HPHP_PARSER_ERROR("XHP: XHP unknown children declaration", _p);
    }
    Token var;     var.set(T_VARIABLE, "_");
    Token decl;    _p->onStaticVariable(decl, 0, var, &arr);
    Token sdecl;   _p->onStatic(sdecl, decl);
    _p->addStatement(stmts1, stmts0, sdecl);
  }
  Token stmts2;
  {
    // return $_;
    Token tvar;    tvar.set(T_VARIABLE, "_");
    Token var;     _p->onSimpleVariable(var, tvar);
    Token ret;     _p->onReturn(ret, &var);
    _p->addStatement(stmts2, stmts1, ret);
  }
  Token stmt;
  {
    _p->finishStatement(stmt, stmts2);
    stmt = 1;
  }
  {
    Token params, ret, ref; ref = 1;
    _p->onMethod(out, modifiers, ret, ref, fname, params, stmt, 0, false);
  }
}

/* This is called from strict-mode productions (sm_*) to throw an
 * error if we're not in strict mode */
static void only_in_strict_mode(Parser *_p) {
  if (!_p->scanner().isStrictMode()) {
    HPHP_PARSER_ERROR("Syntax only allowed in strict mode", _p);
  }
}

static void only_in_hphp_syntax(Parser *_p) {
  if (!_p->enableHipHopSyntax()) {
    HPHP_PARSER_ERROR("Syntax only allowed with -v Eval.EnableHipHopSyntax=true", _p);
  }
}

// Shapes may not have leading integers in key names, considered as a
// parse time error.  This is because at runtime they are currently
// hphp arrays, which will treat leading integer keys as numbers.
static void validate_shape_keyname(Token& tok, Parser* _p) {
  if (tok.text().empty()) {
    HPHP_PARSER_ERROR("Shape key names may not be empty", _p);
  }
  if (isdigit(tok.text()[0])) {
    HPHP_PARSER_ERROR("Shape key names may not start with integers", _p);
  }
}

///////////////////////////////////////////////////////////////////////////////

static int yylex(YYSTYPE *token, HPHP::Location *loc, Parser *_p) {
  return _p->scan(token, loc);
}


/* Line 189 of yacc.c  */
#line 759 "hphp.tab.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_SR_EQUAL = 267,
     T_SL_EQUAL = 268,
     T_XOR_EQUAL = 269,
     T_OR_EQUAL = 270,
     T_AND_EQUAL = 271,
     T_MOD_EQUAL = 272,
     T_CONCAT_EQUAL = 273,
     T_DIV_EQUAL = 274,
     T_MUL_EQUAL = 275,
     T_MINUS_EQUAL = 276,
     T_PLUS_EQUAL = 277,
     T_BOOLEAN_OR = 278,
     T_BOOLEAN_AND = 279,
     T_IS_NOT_IDENTICAL = 280,
     T_IS_IDENTICAL = 281,
     T_IS_NOT_EQUAL = 282,
     T_IS_EQUAL = 283,
     T_IS_GREATER_OR_EQUAL = 284,
     T_IS_SMALLER_OR_EQUAL = 285,
     T_SR = 286,
     T_SL = 287,
     T_INSTANCEOF = 288,
     T_UNSET_CAST = 289,
     T_BOOL_CAST = 290,
     T_OBJECT_CAST = 291,
     T_ARRAY_CAST = 292,
     T_STRING_CAST = 293,
     T_DOUBLE_CAST = 294,
     T_INT_CAST = 295,
     T_DEC = 296,
     T_INC = 297,
     T_CLONE = 298,
     T_NEW = 299,
     T_EXIT = 300,
     T_IF = 301,
     T_ELSEIF = 302,
     T_ELSE = 303,
     T_ENDIF = 304,
     T_LNUMBER = 305,
     T_DNUMBER = 306,
     T_STRING = 307,
     T_STRING_VARNAME = 308,
     T_VARIABLE = 309,
     T_NUM_STRING = 310,
     T_INLINE_HTML = 311,
     T_CHARACTER = 312,
     T_BAD_CHARACTER = 313,
     T_ENCAPSED_AND_WHITESPACE = 314,
     T_CONSTANT_ENCAPSED_STRING = 315,
     T_ECHO = 316,
     T_DO = 317,
     T_WHILE = 318,
     T_ENDWHILE = 319,
     T_FOR = 320,
     T_ENDFOR = 321,
     T_FOREACH = 322,
     T_ENDFOREACH = 323,
     T_DECLARE = 324,
     T_ENDDECLARE = 325,
     T_AS = 326,
     T_SWITCH = 327,
     T_ENDSWITCH = 328,
     T_CASE = 329,
     T_DEFAULT = 330,
     T_BREAK = 331,
     T_GOTO = 332,
     T_CONTINUE = 333,
     T_FUNCTION = 334,
     T_CONST = 335,
     T_RETURN = 336,
     T_TRY = 337,
     T_CATCH = 338,
     T_THROW = 339,
     T_USE = 340,
     T_GLOBAL = 341,
     T_PUBLIC = 342,
     T_PROTECTED = 343,
     T_PRIVATE = 344,
     T_FINAL = 345,
     T_ABSTRACT = 346,
     T_STATIC = 347,
     T_VAR = 348,
     T_UNSET = 349,
     T_ISSET = 350,
     T_EMPTY = 351,
     T_HALT_COMPILER = 352,
     T_CLASS = 353,
     T_INTERFACE = 354,
     T_EXTENDS = 355,
     T_IMPLEMENTS = 356,
     T_OBJECT_OPERATOR = 357,
     T_DOUBLE_ARROW = 358,
     T_LIST = 359,
     T_ARRAY = 360,
     T_CLASS_C = 361,
     T_METHOD_C = 362,
     T_FUNC_C = 363,
     T_LINE = 364,
     T_FILE = 365,
     T_COMMENT = 366,
     T_DOC_COMMENT = 367,
     T_OPEN_TAG = 368,
     T_OPEN_TAG_WITH_ECHO = 369,
     T_CLOSE_TAG = 370,
     T_WHITESPACE = 371,
     T_START_HEREDOC = 372,
     T_END_HEREDOC = 373,
     T_DOLLAR_OPEN_CURLY_BRACES = 374,
     T_CURLY_OPEN = 375,
     T_PAAMAYIM_NEKUDOTAYIM = 376,
     T_NAMESPACE = 377,
     T_NS_C = 378,
     T_DIR = 379,
     T_NS_SEPARATOR = 380,
     T_YIELD = 381,
     T_XHP_LABEL = 382,
     T_XHP_TEXT = 383,
     T_XHP_ATTRIBUTE = 384,
     T_XHP_CATEGORY = 385,
     T_XHP_CATEGORY_LABEL = 386,
     T_XHP_CHILDREN = 387,
     T_XHP_ENUM = 388,
     T_XHP_REQUIRED = 389,
     T_TRAIT = 390,
     T_INSTEADOF = 391,
     T_TRAIT_C = 392,
     T_VARARG = 393,
     T_STRICT_ERROR = 394,
     T_FINALLY = 395,
     T_XHP_TAG_LT = 396,
     T_XHP_TAG_GT = 397,
     T_TYPELIST_LT = 398,
     T_TYPELIST_GT = 399,
     T_UNRESOLVED_LT = 400,
     T_COLLECTION = 401,
     T_SHAPE = 402,
     T_TYPE = 403,
     T_UNRESOLVED_TYPE = 404
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int line0;
  int char0;
  int line1;
  int char1;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 963 "hphp.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
struct yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (struct yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10425

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  179
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  206
/* YYNRULES -- Number of rules.  */
#define YYNRULES  706
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1318

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   404

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   177,     2,   174,    47,    31,   178,
     169,   170,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   171,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   176,    30,     2,   175,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   172,    29,   173,    50,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     9,    10,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    27,    28,
      32,    33,    34,    35,    38,    39,    40,    41,    49,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    13,    15,    17,
      19,    24,    28,    29,    36,    37,    43,    47,    50,    52,
      54,    56,    58,    60,    62,    66,    68,    70,    73,    77,
      82,    84,    88,    90,    93,    97,    99,   102,   105,   111,
     116,   119,   120,   122,   124,   126,   128,   132,   138,   147,
     148,   153,   154,   161,   162,   173,   174,   179,   182,   186,
     189,   193,   196,   200,   204,   208,   212,   216,   222,   224,
     226,   227,   237,   243,   258,   264,   268,   272,   275,   278,
     281,   284,   287,   297,   298,   299,   305,   307,   308,   310,
     311,   313,   314,   326,   327,   340,   341,   350,   351,   361,
     362,   370,   371,   380,   381,   388,   389,   397,   399,   401,
     403,   405,   407,   410,   413,   416,   417,   420,   421,   424,
     425,   427,   431,   433,   437,   440,   441,   443,   446,   448,
     453,   455,   460,   462,   467,   469,   474,   478,   484,   488,
     493,   498,   504,   510,   515,   516,   518,   520,   525,   526,
     532,   533,   536,   537,   541,   542,   546,   549,   551,   552,
     556,   561,   568,   574,   580,   587,   596,   604,   607,   608,
     610,   613,   617,   622,   626,   628,   630,   633,   638,   642,
     648,   650,   654,   657,   658,   659,   664,   665,   671,   674,
     675,   686,   687,   699,   703,   707,   711,   715,   721,   724,
     727,   728,   735,   741,   746,   750,   752,   754,   758,   763,
     765,   767,   769,   771,   776,   778,   782,   785,   786,   789,
     790,   792,   796,   798,   800,   802,   804,   808,   813,   818,
     823,   825,   827,   830,   833,   836,   840,   844,   846,   848,
     850,   852,   856,   858,   860,   862,   863,   865,   868,   870,
     872,   874,   876,   878,   880,   884,   890,   892,   896,   902,
     907,   911,   915,   919,   923,   925,   927,   928,   931,   935,
     942,   944,   946,   948,   955,   959,   964,   971,   974,   978,
     982,   986,   990,   994,   998,  1002,  1006,  1010,  1014,  1018,
    1021,  1024,  1027,  1030,  1034,  1038,  1042,  1046,  1050,  1054,
    1058,  1062,  1066,  1070,  1074,  1078,  1082,  1086,  1090,  1094,
    1097,  1100,  1103,  1106,  1110,  1114,  1118,  1122,  1126,  1130,
    1134,  1138,  1142,  1146,  1152,  1157,  1159,  1162,  1165,  1168,
    1171,  1174,  1177,  1180,  1183,  1186,  1188,  1190,  1192,  1196,
    1199,  1200,  1212,  1213,  1226,  1228,  1230,  1232,  1238,  1242,
    1248,  1252,  1255,  1256,  1259,  1260,  1265,  1270,  1275,  1280,
    1285,  1290,  1292,  1294,  1298,  1304,  1305,  1309,  1314,  1316,
    1319,  1324,  1327,  1334,  1335,  1337,  1342,  1343,  1346,  1347,
    1349,  1351,  1355,  1357,  1361,  1363,  1365,  1369,  1373,  1375,
    1377,  1379,  1381,  1383,  1385,  1387,  1389,  1391,  1393,  1395,
    1397,  1399,  1401,  1403,  1405,  1407,  1409,  1411,  1413,  1415,
    1417,  1419,  1421,  1423,  1425,  1427,  1429,  1431,  1433,  1435,
    1437,  1439,  1441,  1443,  1445,  1447,  1449,  1451,  1453,  1455,
    1457,  1459,  1461,  1463,  1465,  1467,  1469,  1471,  1473,  1475,
    1477,  1479,  1481,  1483,  1485,  1487,  1489,  1491,  1493,  1495,
    1497,  1499,  1501,  1503,  1505,  1507,  1509,  1511,  1513,  1515,
    1517,  1519,  1521,  1526,  1528,  1530,  1532,  1534,  1536,  1538,
    1540,  1542,  1545,  1547,  1548,  1549,  1551,  1553,  1557,  1558,
    1560,  1562,  1564,  1566,  1568,  1570,  1572,  1574,  1576,  1578,
    1580,  1584,  1587,  1589,  1591,  1594,  1597,  1602,  1607,  1609,
    1611,  1615,  1619,  1621,  1623,  1625,  1627,  1631,  1635,  1639,
    1642,  1643,  1645,  1646,  1648,  1649,  1655,  1659,  1663,  1665,
    1667,  1669,  1671,  1675,  1678,  1680,  1682,  1684,  1686,  1688,
    1691,  1694,  1699,  1704,  1707,  1708,  1714,  1718,  1722,  1724,
    1728,  1730,  1733,  1734,  1740,  1744,  1747,  1748,  1752,  1753,
    1758,  1761,  1762,  1766,  1770,  1772,  1773,  1775,  1778,  1781,
    1786,  1790,  1794,  1797,  1802,  1805,  1810,  1812,  1814,  1816,
    1818,  1820,  1823,  1828,  1832,  1837,  1841,  1843,  1845,  1847,
    1849,  1852,  1857,  1862,  1866,  1868,  1870,  1874,  1882,  1889,
    1898,  1908,  1917,  1928,  1936,  1943,  1945,  1948,  1953,  1958,
    1960,  1962,  1967,  1969,  1970,  1972,  1975,  1977,  1979,  1982,
    1987,  1991,  1995,  1996,  1998,  2001,  2006,  2010,  2013,  2017,
    2024,  2025,  2027,  2032,  2035,  2036,  2042,  2046,  2050,  2052,
    2059,  2064,  2069,  2072,  2075,  2076,  2082,  2086,  2090,  2092,
    2095,  2096,  2102,  2106,  2110,  2112,  2115,  2118,  2120,  2123,
    2125,  2130,  2134,  2138,  2145,  2149,  2151,  2153,  2155,  2160,
    2165,  2168,  2171,  2176,  2179,  2182,  2184,  2188,  2192,  2198,
    2200,  2203,  2205,  2210,  2214,  2215,  2217,  2221,  2225,  2227,
    2229,  2230,  2231,  2234,  2238,  2240,  2245,  2251,  2255,  2259,
    2263,  2267,  2269,  2272,  2273,  2278,  2281,  2284,  2287,  2289,
    2291,  2296,  2303,  2305,  2314,  2320,  2322
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     180,     0,    -1,   181,    -1,   181,   182,    -1,    -1,   196,
      -1,   208,    -1,   211,    -1,   216,    -1,   371,    -1,   116,
     169,   170,   171,    -1,   141,   188,   171,    -1,    -1,   141,
     188,   172,   183,   181,   173,    -1,    -1,   141,   172,   184,
     181,   173,    -1,   104,   186,   171,    -1,   193,   171,    -1,
      71,    -1,   148,    -1,   149,    -1,   151,    -1,   153,    -1,
     152,    -1,   186,     8,   187,    -1,   187,    -1,   188,    -1,
     144,   188,    -1,   188,    90,   185,    -1,   144,   188,    90,
     185,    -1,   185,    -1,   188,   144,   185,    -1,   188,    -1,
     144,   188,    -1,   141,   144,   188,    -1,   189,    -1,   189,
     374,    -1,   189,   374,    -1,   193,     8,   372,    13,   319,
      -1,    99,   372,    13,   319,    -1,   194,   195,    -1,    -1,
     196,    -1,   208,    -1,   211,    -1,   216,    -1,   172,   194,
     173,    -1,    65,   279,   196,   238,   240,    -1,    65,   279,
      26,   194,   239,   241,    68,   171,    -1,    -1,    82,   279,
     197,   232,    -1,    -1,    81,   198,   196,    82,   279,   171,
      -1,    -1,    84,   169,   281,   171,   281,   171,   281,   170,
     199,   230,    -1,    -1,    91,   279,   200,   235,    -1,    95,
     171,    -1,    95,   285,   171,    -1,    97,   171,    -1,    97,
     285,   171,    -1,   100,   171,    -1,   100,   285,   171,    -1,
     145,    95,   171,    -1,   105,   246,   171,    -1,   111,   248,
     171,    -1,    80,   280,   171,    -1,   113,   169,   369,   170,
     171,    -1,   171,    -1,    75,    -1,    -1,    86,   169,   285,
      90,   229,   228,   170,   201,   231,    -1,    88,   169,   234,
     170,   233,    -1,   101,   172,   194,   173,   102,   169,   312,
      73,   170,   172,   194,   173,   202,   205,    -1,   101,   172,
     194,   173,   203,    -1,   103,   285,   171,    -1,    96,   185,
     171,    -1,   285,   171,    -1,   282,   171,    -1,   283,   171,
      -1,   284,   171,    -1,   185,    26,    -1,   202,   102,   169,
     312,    73,   170,   172,   194,   173,    -1,    -1,    -1,   204,
     159,   172,   194,   173,    -1,   203,    -1,    -1,    31,    -1,
      -1,    98,    -1,    -1,   207,   206,   373,   209,   169,   242,
     170,   377,   172,   194,   173,    -1,    -1,   339,   207,   206,
     373,   210,   169,   242,   170,   377,   172,   194,   173,    -1,
      -1,   222,   219,   212,   223,   224,   172,   249,   173,    -1,
      -1,   339,   222,   219,   213,   223,   224,   172,   249,   173,
      -1,    -1,   118,   220,   214,   225,   172,   249,   173,    -1,
      -1,   339,   118,   220,   215,   225,   172,   249,   173,    -1,
      -1,   154,   221,   217,   172,   249,   173,    -1,    -1,   339,
     154,   221,   218,   172,   249,   173,    -1,   373,    -1,   146,
      -1,   373,    -1,   373,    -1,   117,    -1,   110,   117,    -1,
     109,   117,    -1,   119,   312,    -1,    -1,   120,   226,    -1,
      -1,   119,   226,    -1,    -1,   312,    -1,   226,     8,   312,
      -1,   312,    -1,   227,     8,   312,    -1,   122,   229,    -1,
      -1,   346,    -1,    31,   346,    -1,   196,    -1,    26,   194,
      85,   171,    -1,   196,    -1,    26,   194,    87,   171,    -1,
     196,    -1,    26,   194,    83,   171,    -1,   196,    -1,    26,
     194,    89,   171,    -1,   185,    13,   319,    -1,   234,     8,
     185,    13,   319,    -1,   172,   236,   173,    -1,   172,   171,
     236,   173,    -1,    26,   236,    92,   171,    -1,    26,   171,
     236,    92,   171,    -1,   236,    93,   285,   237,   194,    -1,
     236,    94,   237,   194,    -1,    -1,    26,    -1,   171,    -1,
     238,    66,   279,   196,    -1,    -1,   239,    66,   279,    26,
     194,    -1,    -1,    67,   196,    -1,    -1,    67,    26,   194,
      -1,    -1,   243,     8,   157,    -1,   243,   324,    -1,   157,
      -1,    -1,   340,   384,    73,    -1,   340,   384,    31,    73,
      -1,   340,   384,    31,    73,    13,   319,    -1,   340,   384,
      73,    13,   319,    -1,   243,     8,   340,   384,    73,    -1,
     243,     8,   340,   384,    31,    73,    -1,   243,     8,   340,
     384,    31,    73,    13,   319,    -1,   243,     8,   340,   384,
      73,    13,   319,    -1,   245,   324,    -1,    -1,   285,    -1,
      31,   346,    -1,   245,     8,   285,    -1,   245,     8,    31,
     346,    -1,   246,     8,   247,    -1,   247,    -1,    73,    -1,
     174,   346,    -1,   174,   172,   285,   173,    -1,   248,     8,
      73,    -1,   248,     8,    73,    13,   319,    -1,    73,    -1,
      73,    13,   319,    -1,   249,   250,    -1,    -1,    -1,   272,
     251,   276,   171,    -1,    -1,   274,   383,   252,   276,   171,
      -1,   277,   171,    -1,    -1,   273,   207,   206,   373,   169,
     253,   242,   170,   377,   271,    -1,    -1,   339,   273,   207,
     206,   373,   169,   254,   242,   170,   377,   271,    -1,   148,
     259,   171,    -1,   149,   265,   171,    -1,   151,   267,   171,
      -1,   104,   227,   171,    -1,   104,   227,   172,   255,   173,
      -1,   255,   256,    -1,   255,   257,    -1,    -1,   192,   140,
     185,   155,   227,   171,    -1,   258,    90,   273,   185,   171,
      -1,   258,    90,   274,   171,    -1,   192,   140,   185,    -1,
     185,    -1,   260,    -1,   259,     8,   260,    -1,   261,   309,
     263,   264,    -1,   146,    -1,   124,    -1,   312,    -1,   112,
      -1,   152,   172,   262,   173,    -1,   318,    -1,   262,     8,
     318,    -1,    13,   319,    -1,    -1,    51,   153,    -1,    -1,
     266,    -1,   265,     8,   266,    -1,   150,    -1,   268,    -1,
     185,    -1,   115,    -1,   169,   269,   170,    -1,   169,   269,
     170,    45,    -1,   169,   269,   170,    25,    -1,   169,   269,
     170,    42,    -1,   268,    -1,   270,    -1,   270,    45,    -1,
     270,    25,    -1,   270,    42,    -1,   269,     8,   269,    -1,
     269,    29,   269,    -1,   185,    -1,   146,    -1,   150,    -1,
     171,    -1,   172,   194,   173,    -1,   274,    -1,   112,    -1,
     274,    -1,    -1,   275,    -1,   274,   275,    -1,   106,    -1,
     107,    -1,   108,    -1,   111,    -1,   110,    -1,   109,    -1,
     276,     8,    73,    -1,   276,     8,    73,    13,   319,    -1,
      73,    -1,    73,    13,   319,    -1,   277,     8,   372,    13,
     319,    -1,    99,   372,    13,   319,    -1,    63,   314,   317,
      -1,   169,   278,   170,    -1,   169,   285,   170,    -1,   280,
       8,   285,    -1,   285,    -1,   280,    -1,    -1,   145,   285,
      -1,   346,    13,   282,    -1,   123,   169,   358,   170,    13,
     282,    -1,   286,    -1,   346,    -1,   278,    -1,   123,   169,
     358,   170,    13,   285,    -1,   346,    13,   285,    -1,   346,
      13,    31,   346,    -1,   346,    13,    31,    63,   314,   317,
      -1,    62,   285,    -1,   346,    24,   285,    -1,   346,    23,
     285,    -1,   346,    22,   285,    -1,   346,    21,   285,    -1,
     346,    20,   285,    -1,   346,    19,   285,    -1,   346,    18,
     285,    -1,   346,    17,   285,    -1,   346,    16,   285,    -1,
     346,    15,   285,    -1,   346,    14,   285,    -1,   346,    60,
      -1,    60,   346,    -1,   346,    59,    -1,    59,   346,    -1,
     285,    27,   285,    -1,   285,    28,   285,    -1,   285,     9,
     285,    -1,   285,    11,   285,    -1,   285,    10,   285,    -1,
     285,    29,   285,    -1,   285,    31,   285,    -1,   285,    30,
     285,    -1,   285,    44,   285,    -1,   285,    42,   285,    -1,
     285,    43,   285,    -1,   285,    45,   285,    -1,   285,    46,
     285,    -1,   285,    47,   285,    -1,   285,    41,   285,    -1,
     285,    40,   285,    -1,    42,   285,    -1,    43,   285,    -1,
      48,   285,    -1,    50,   285,    -1,   285,    33,   285,    -1,
     285,    32,   285,    -1,   285,    35,   285,    -1,   285,    34,
     285,    -1,   285,    36,   285,    -1,   285,    39,   285,    -1,
     285,    37,   285,    -1,   285,    38,   285,    -1,   285,    49,
     314,    -1,   169,   286,   170,    -1,   285,    25,   285,    26,
     285,    -1,   285,    25,    26,   285,    -1,   368,    -1,    58,
     285,    -1,    57,   285,    -1,    56,   285,    -1,    55,   285,
      -1,    54,   285,    -1,    53,   285,    -1,    52,   285,    -1,
      64,   315,    -1,    51,   285,    -1,   321,    -1,   294,    -1,
     293,    -1,   175,   316,   175,    -1,    12,   285,    -1,    -1,
     207,   206,   169,   287,   242,   170,   377,   299,   172,   194,
     173,    -1,    -1,   111,   207,   206,   169,   288,   242,   170,
     377,   299,   172,   194,   173,    -1,   301,    -1,   297,    -1,
     295,    -1,   289,     8,    79,   122,   285,    -1,    79,   122,
     285,    -1,   290,     8,    79,   122,   319,    -1,    79,   122,
     319,    -1,   289,   323,    -1,    -1,   290,   323,    -1,    -1,
     166,   169,   291,   170,    -1,   124,   169,   359,   170,    -1,
     312,   172,   361,   173,    -1,   312,   172,   363,   173,    -1,
     297,    61,   354,   176,    -1,   298,    61,   354,   176,    -1,
     294,    -1,   370,    -1,   169,   286,   170,    -1,   104,   169,
     300,   324,   170,    -1,    -1,   300,     8,    73,    -1,   300,
       8,    31,    73,    -1,    73,    -1,    31,    73,    -1,   160,
     146,   302,   161,    -1,   304,    46,    -1,   304,   161,   305,
     160,    46,   303,    -1,    -1,   146,    -1,   304,   306,    13,
     307,    -1,    -1,   305,   308,    -1,    -1,   146,    -1,   147,
      -1,   172,   285,   173,    -1,   147,    -1,   172,   285,   173,
      -1,   301,    -1,   310,    -1,   309,    26,   310,    -1,   309,
      43,   310,    -1,   185,    -1,    64,    -1,    98,    -1,    99,
      -1,   100,    -1,   145,    -1,   101,    -1,   102,    -1,   159,
      -1,   103,    -1,    65,    -1,    66,    -1,    68,    -1,    67,
      -1,    82,    -1,    83,    -1,    81,    -1,    84,    -1,    85,
      -1,    86,    -1,    87,    -1,    88,    -1,    89,    -1,    49,
      -1,    90,    -1,    91,    -1,    92,    -1,    93,    -1,    94,
      -1,    95,    -1,    97,    -1,    96,    -1,    80,    -1,    12,
      -1,   117,    -1,   118,    -1,   119,    -1,   120,    -1,    63,
      -1,    62,    -1,   112,    -1,     5,    -1,     7,    -1,     6,
      -1,     4,    -1,     3,    -1,   141,    -1,   104,    -1,   105,
      -1,   114,    -1,   115,    -1,   116,    -1,   111,    -1,   110,
      -1,   109,    -1,   108,    -1,   107,    -1,   106,    -1,   113,
      -1,   123,    -1,   124,    -1,     9,    -1,    11,    -1,    10,
      -1,   125,    -1,   127,    -1,   126,    -1,   128,    -1,   129,
      -1,   143,    -1,   142,    -1,   154,    -1,   156,    -1,   167,
      -1,   191,   169,   244,   170,    -1,   192,    -1,   146,    -1,
     312,    -1,   111,    -1,   352,    -1,   312,    -1,   111,    -1,
     356,    -1,   169,   170,    -1,   279,    -1,    -1,    -1,    78,
      -1,   365,    -1,   169,   244,   170,    -1,    -1,    69,    -1,
      70,    -1,    79,    -1,   128,    -1,   129,    -1,   143,    -1,
     125,    -1,   156,    -1,   126,    -1,   127,    -1,   142,    -1,
     136,    78,   137,    -1,   136,   137,    -1,   318,    -1,   190,
      -1,    42,   319,    -1,    43,   319,    -1,   124,   169,   322,
     170,    -1,   166,   169,   292,   170,    -1,   320,    -1,   296,
      -1,   192,   140,   185,    -1,   146,   140,   185,    -1,   190,
      -1,    72,    -1,   370,    -1,   318,    -1,   177,   365,   177,
      -1,   178,   365,   178,    -1,   136,   365,   137,    -1,   325,
     323,    -1,    -1,     8,    -1,    -1,     8,    -1,    -1,   325,
       8,   319,   122,   319,    -1,   325,     8,   319,    -1,   319,
     122,   319,    -1,   319,    -1,    69,    -1,    70,    -1,    79,
      -1,   136,    78,   137,    -1,   136,   137,    -1,    69,    -1,
      70,    -1,   185,    -1,   326,    -1,   185,    -1,    42,   327,
      -1,    43,   327,    -1,   124,   169,   329,   170,    -1,   166,
     169,   332,   170,    -1,   330,   323,    -1,    -1,   330,     8,
     328,   122,   328,    -1,   330,     8,   328,    -1,   328,   122,
     328,    -1,   328,    -1,   331,     8,   328,    -1,   328,    -1,
     333,   323,    -1,    -1,   333,     8,    79,   122,   328,    -1,
      79,   122,   328,    -1,   331,   323,    -1,    -1,   169,   334,
     170,    -1,    -1,   336,     8,   185,   335,    -1,   185,   335,
      -1,    -1,   338,   336,   323,    -1,    41,   337,    40,    -1,
     339,    -1,    -1,   342,    -1,   121,   351,    -1,   121,   185,
      -1,   121,   172,   285,   173,    -1,    61,   354,   176,    -1,
     172,   285,   173,    -1,   347,   343,    -1,   169,   278,   170,
     343,    -1,   357,   343,    -1,   169,   278,   170,   343,    -1,
     351,    -1,   311,    -1,   349,    -1,   350,    -1,   344,    -1,
     346,   341,    -1,   169,   278,   170,   341,    -1,   313,   140,
     351,    -1,   348,   169,   244,   170,    -1,   169,   346,   170,
      -1,   311,    -1,   349,    -1,   350,    -1,   344,    -1,   346,
     342,    -1,   169,   278,   170,   342,    -1,   348,   169,   244,
     170,    -1,   169,   346,   170,    -1,   351,    -1,   344,    -1,
     169,   346,   170,    -1,   346,   121,   185,   374,   169,   244,
     170,    -1,   346,   121,   351,   169,   244,   170,    -1,   346,
     121,   172,   285,   173,   169,   244,   170,    -1,   169,   278,
     170,   121,   185,   374,   169,   244,   170,    -1,   169,   278,
     170,   121,   351,   169,   244,   170,    -1,   169,   278,   170,
     121,   172,   285,   173,   169,   244,   170,    -1,   313,   140,
     185,   374,   169,   244,   170,    -1,   313,   140,   351,   169,
     244,   170,    -1,   352,    -1,   355,   352,    -1,   352,    61,
     354,   176,    -1,   352,   172,   285,   173,    -1,   353,    -1,
      73,    -1,   174,   172,   285,   173,    -1,   285,    -1,    -1,
     174,    -1,   355,   174,    -1,   351,    -1,   345,    -1,   356,
     341,    -1,   169,   278,   170,   341,    -1,   313,   140,   351,
      -1,   169,   346,   170,    -1,    -1,   345,    -1,   356,   342,
      -1,   169,   278,   170,   342,    -1,   169,   346,   170,    -1,
     358,     8,    -1,   358,     8,   346,    -1,   358,     8,   123,
     169,   358,   170,    -1,    -1,   346,    -1,   123,   169,   358,
     170,    -1,   360,   323,    -1,    -1,   360,     8,   285,   122,
     285,    -1,   360,     8,   285,    -1,   285,   122,   285,    -1,
     285,    -1,   360,     8,   285,   122,    31,   346,    -1,   360,
       8,    31,   346,    -1,   285,   122,    31,   346,    -1,    31,
     346,    -1,   362,   323,    -1,    -1,   362,     8,   285,   122,
     285,    -1,   362,     8,   285,    -1,   285,   122,   285,    -1,
     285,    -1,   364,   323,    -1,    -1,   364,     8,   319,   122,
     319,    -1,   364,     8,   319,    -1,   319,   122,   319,    -1,
     319,    -1,   365,   366,    -1,   365,    78,    -1,   366,    -1,
      78,   366,    -1,    73,    -1,    73,    61,   367,   176,    -1,
      73,   121,   185,    -1,   138,   285,   173,    -1,   138,    72,
      61,   285,   176,   173,    -1,   139,   346,   173,    -1,   185,
      -1,    74,    -1,    73,    -1,   114,   169,   369,   170,    -1,
     115,   169,   346,   170,    -1,     7,   285,    -1,     6,   285,
      -1,     5,   169,   285,   170,    -1,     4,   285,    -1,     3,
     285,    -1,   346,    -1,   369,     8,   346,    -1,   313,   140,
     185,    -1,   167,   185,    13,   383,   171,    -1,   185,    -1,
     383,   185,    -1,   185,    -1,   185,   162,   378,   163,    -1,
     162,   375,   163,    -1,    -1,   383,    -1,   375,     8,   383,
      -1,   375,     8,   157,    -1,   375,    -1,   157,    -1,    -1,
      -1,    26,   383,    -1,   185,     8,   378,    -1,   185,    -1,
     185,    90,   382,   378,    -1,   185,    90,   185,     8,   378,
      -1,   185,    90,   185,    -1,   185,    90,   382,    -1,    79,
     122,   383,    -1,   380,     8,   379,    -1,   379,    -1,   380,
     323,    -1,    -1,   166,   169,   381,   170,    -1,    25,   383,
      -1,    51,   383,    -1,   185,   374,    -1,   124,    -1,   382,
      -1,   124,   162,   383,   163,    -1,   124,   162,   383,     8,
     383,   163,    -1,   146,    -1,   169,    98,   169,   376,   170,
      26,   383,   170,    -1,   169,   375,     8,   383,   170,    -1,
     383,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   816,   816,   821,   823,   826,   828,   829,   830,   831,
     832,   833,   835,   835,   837,   837,   839,   840,   845,   846,
     847,   848,   849,   850,   854,   856,   859,   860,   861,   862,
     867,   868,   872,   873,   874,   879,   884,   890,   896,   899,
     904,   906,   909,   910,   911,   912,   915,   916,   920,   925,
     925,   929,   929,   934,   933,   937,   937,   940,   941,   942,
     943,   944,   945,   946,   947,   948,   949,   950,   951,   952,
     955,   953,   958,   960,   968,   971,   972,   976,   977,   978,
     979,   980,   987,   993,   997,   997,  1003,  1004,  1008,  1009,
    1013,  1018,  1017,  1028,  1027,  1041,  1040,  1059,  1057,  1076,
    1075,  1084,  1082,  1094,  1093,  1104,  1102,  1114,  1115,  1119,
    1122,  1125,  1126,  1127,  1130,  1132,  1135,  1136,  1139,  1140,
    1143,  1144,  1148,  1149,  1154,  1155,  1158,  1159,  1163,  1164,
    1168,  1169,  1173,  1174,  1178,  1179,  1184,  1185,  1190,  1191,
    1192,  1193,  1196,  1199,  1201,  1204,  1205,  1209,  1211,  1214,
    1217,  1220,  1221,  1224,  1225,  1229,  1231,  1233,  1234,  1238,
    1240,  1242,  1245,  1248,  1251,  1254,  1258,  1265,  1267,  1270,
    1271,  1272,  1274,  1279,  1280,  1283,  1284,  1285,  1289,  1290,
    1292,  1293,  1297,  1299,  1302,  1302,  1306,  1305,  1309,  1313,
    1311,  1325,  1322,  1334,  1336,  1338,  1340,  1342,  1346,  1347,
    1348,  1351,  1357,  1360,  1366,  1369,  1374,  1376,  1381,  1386,
    1390,  1391,  1397,  1398,  1403,  1404,  1409,  1410,  1414,  1415,
    1419,  1421,  1427,  1432,  1433,  1435,  1439,  1440,  1441,  1442,
    1446,  1447,  1448,  1449,  1450,  1451,  1453,  1458,  1461,  1462,
    1466,  1467,  1470,  1471,  1474,  1475,  1478,  1479,  1483,  1484,
    1485,  1486,  1487,  1488,  1491,  1493,  1495,  1496,  1499,  1501,
    1505,  1507,  1511,  1515,  1516,  1520,  1521,  1525,  1529,  1533,
    1538,  1539,  1540,  1543,  1545,  1546,  1547,  1550,  1551,  1552,
    1553,  1554,  1555,  1556,  1557,  1558,  1559,  1560,  1561,  1562,
    1563,  1564,  1565,  1566,  1567,  1568,  1569,  1570,  1571,  1572,
    1573,  1574,  1575,  1576,  1577,  1578,  1579,  1580,  1581,  1582,
    1583,  1584,  1585,  1586,  1587,  1588,  1589,  1590,  1591,  1593,
    1594,  1596,  1598,  1599,  1600,  1601,  1602,  1603,  1604,  1605,
    1606,  1607,  1608,  1609,  1610,  1611,  1612,  1613,  1614,  1615,
    1617,  1616,  1625,  1624,  1632,  1633,  1634,  1638,  1643,  1650,
    1655,  1662,  1664,  1668,  1670,  1674,  1679,  1683,  1690,  1697,
    1699,  1704,  1705,  1706,  1710,  1714,  1718,  1719,  1720,  1721,
    1725,  1731,  1736,  1745,  1746,  1749,  1752,  1755,  1756,  1759,
    1763,  1766,  1769,  1776,  1777,  1781,  1782,  1784,  1788,  1789,
    1790,  1791,  1792,  1793,  1794,  1795,  1796,  1797,  1798,  1799,
    1800,  1801,  1802,  1803,  1804,  1805,  1806,  1807,  1808,  1809,
    1810,  1811,  1812,  1813,  1814,  1815,  1816,  1817,  1818,  1819,
    1820,  1821,  1822,  1823,  1824,  1825,  1826,  1827,  1828,  1829,
    1830,  1831,  1832,  1833,  1834,  1835,  1836,  1837,  1838,  1839,
    1840,  1841,  1842,  1843,  1844,  1845,  1846,  1847,  1848,  1849,
    1850,  1851,  1852,  1853,  1854,  1855,  1856,  1857,  1858,  1859,
    1860,  1861,  1865,  1870,  1871,  1874,  1875,  1876,  1880,  1881,
    1882,  1886,  1887,  1888,  1892,  1893,  1894,  1897,  1899,  1903,
    1904,  1905,  1907,  1908,  1909,  1910,  1911,  1912,  1913,  1914,
    1915,  1918,  1923,  1924,  1925,  1926,  1927,  1929,  1932,  1933,
    1937,  1940,  1946,  1947,  1948,  1949,  1950,  1951,  1952,  1957,
    1959,  1963,  1964,  1967,  1968,  1972,  1975,  1977,  1979,  1983,
    1984,  1985,  1987,  1990,  1994,  1995,  1996,  1999,  2000,  2001,
    2002,  2003,  2005,  2011,  2013,  2016,  2019,  2021,  2023,  2026,
    2028,  2032,  2034,  2037,  2041,  2048,  2050,  2053,  2054,  2059,
    2062,  2066,  2066,  2071,  2074,  2075,  2079,  2080,  2085,  2086,
    2090,  2091,  2095,  2096,  2100,  2102,  2106,  2107,  2108,  2109,
    2110,  2111,  2112,  2113,  2116,  2118,  2122,  2123,  2124,  2125,
    2126,  2128,  2130,  2132,  2136,  2137,  2138,  2142,  2145,  2148,
    2151,  2154,  2157,  2163,  2167,  2174,  2175,  2180,  2182,  2183,
    2186,  2187,  2190,  2191,  2195,  2196,  2200,  2201,  2202,  2203,
    2204,  2207,  2210,  2211,  2212,  2214,  2216,  2220,  2221,  2222,
    2224,  2225,  2226,  2230,  2232,  2235,  2237,  2238,  2239,  2240,
    2243,  2245,  2246,  2250,  2252,  2255,  2257,  2258,  2259,  2263,
    2265,  2268,  2271,  2273,  2275,  2279,  2280,  2282,  2283,  2289,
    2290,  2292,  2294,  2296,  2298,  2301,  2302,  2303,  2307,  2308,
    2309,  2310,  2311,  2312,  2313,  2317,  2318,  2322,  2331,  2336,
    2337,  2343,  2344,  2352,  2355,  2359,  2360,  2364,  2365,  2366,
    2367,  2371,  2372,  2376,  2377,  2378,  2380,  2382,  2383,  2387,
    2393,  2395,  2399,  2402,  2405,  2414,  2415,  2416,  2427,  2428,
    2429,  2432,  2435,  2436,  2439,  2444,  2445
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE", "T_EVAL",
  "T_INCLUDE_ONCE", "T_INCLUDE", "','", "T_LOGICAL_OR", "T_LOGICAL_XOR",
  "T_LOGICAL_AND", "T_PRINT", "'='", "T_SR_EQUAL", "T_SL_EQUAL",
  "T_XOR_EQUAL", "T_OR_EQUAL", "T_AND_EQUAL", "T_MOD_EQUAL",
  "T_CONCAT_EQUAL", "T_DIV_EQUAL", "T_MUL_EQUAL", "T_MINUS_EQUAL",
  "T_PLUS_EQUAL", "'?'", "':'", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'",
  "'^'", "'&'", "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL", "T_IS_NOT_EQUAL",
  "T_IS_EQUAL", "'<'", "'>'", "T_IS_GREATER_OR_EQUAL",
  "T_IS_SMALLER_OR_EQUAL", "T_SR", "T_SL", "'+'", "'-'", "'.'", "'*'",
  "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "'@'", "T_UNSET_CAST",
  "T_BOOL_CAST", "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST",
  "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC", "T_INC", "'['", "T_CLONE",
  "T_NEW", "T_EXIT", "T_IF", "T_ELSEIF", "T_ELSE", "T_ENDIF", "T_LNUMBER",
  "T_DNUMBER", "T_STRING", "T_STRING_VARNAME", "T_VARIABLE",
  "T_NUM_STRING", "T_INLINE_HTML", "T_CHARACTER", "T_BAD_CHARACTER",
  "T_ENCAPSED_AND_WHITESPACE", "T_CONSTANT_ENCAPSED_STRING", "T_ECHO",
  "T_DO", "T_WHILE", "T_ENDWHILE", "T_FOR", "T_ENDFOR", "T_FOREACH",
  "T_ENDFOREACH", "T_DECLARE", "T_ENDDECLARE", "T_AS", "T_SWITCH",
  "T_ENDSWITCH", "T_CASE", "T_DEFAULT", "T_BREAK", "T_GOTO", "T_CONTINUE",
  "T_FUNCTION", "T_CONST", "T_RETURN", "T_TRY", "T_CATCH", "T_THROW",
  "T_USE", "T_GLOBAL", "T_PUBLIC", "T_PROTECTED", "T_PRIVATE", "T_FINAL",
  "T_ABSTRACT", "T_STATIC", "T_VAR", "T_UNSET", "T_ISSET", "T_EMPTY",
  "T_HALT_COMPILER", "T_CLASS", "T_INTERFACE", "T_EXTENDS", "T_IMPLEMENTS",
  "T_OBJECT_OPERATOR", "T_DOUBLE_ARROW", "T_LIST", "T_ARRAY", "T_CLASS_C",
  "T_METHOD_C", "T_FUNC_C", "T_LINE", "T_FILE", "T_COMMENT",
  "T_DOC_COMMENT", "T_OPEN_TAG", "T_OPEN_TAG_WITH_ECHO", "T_CLOSE_TAG",
  "T_WHITESPACE", "T_START_HEREDOC", "T_END_HEREDOC",
  "T_DOLLAR_OPEN_CURLY_BRACES", "T_CURLY_OPEN", "T_PAAMAYIM_NEKUDOTAYIM",
  "T_NAMESPACE", "T_NS_C", "T_DIR", "T_NS_SEPARATOR", "T_YIELD",
  "T_XHP_LABEL", "T_XHP_TEXT", "T_XHP_ATTRIBUTE", "T_XHP_CATEGORY",
  "T_XHP_CATEGORY_LABEL", "T_XHP_CHILDREN", "T_XHP_ENUM", "T_XHP_REQUIRED",
  "T_TRAIT", "T_INSTEADOF", "T_TRAIT_C", "T_VARARG", "T_STRICT_ERROR",
  "T_FINALLY", "T_XHP_TAG_LT", "T_XHP_TAG_GT", "T_TYPELIST_LT",
  "T_TYPELIST_GT", "T_UNRESOLVED_LT", "T_COLLECTION", "T_SHAPE", "T_TYPE",
  "T_UNRESOLVED_TYPE", "'('", "')'", "';'", "'{'", "'}'", "'$'", "'`'",
  "']'", "'\"'", "'\\''", "$accept", "start", "top_statement_list",
  "top_statement", "$@1", "$@2", "ident", "use_declarations",
  "use_declaration", "namespace_name", "namespace_string_base",
  "namespace_string", "namespace_string_typeargs",
  "class_namespace_string_typeargs", "constant_declaration",
  "inner_statement_list", "inner_statement", "statement", "$@3", "$@4",
  "$@5", "$@6", "$@7", "additional_catches", "finally", "$@8",
  "optional_finally", "is_reference", "function_loc",
  "function_declaration_statement", "$@9", "$@10",
  "class_declaration_statement", "$@11", "$@12", "$@13", "$@14",
  "trait_declaration_statement", "$@15", "$@16", "class_decl_name",
  "interface_decl_name", "trait_decl_name", "class_entry_type",
  "extends_from", "implements_list", "interface_extends_list",
  "interface_list", "trait_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "while_statement", "declare_statement", "declare_list",
  "switch_case_list", "case_list", "case_separator", "elseif_list",
  "new_elseif_list", "else_single", "new_else_single", "parameter_list",
  "non_empty_parameter_list", "function_call_parameter_list",
  "non_empty_fcall_parameter_list", "global_var_list", "global_var",
  "static_var_list", "class_statement_list", "class_statement", "$@17",
  "$@18", "$@19", "$@20", "trait_rules", "trait_precedence_rule",
  "trait_alias_rule", "trait_alias_rule_method", "xhp_attribute_stmt",
  "xhp_attribute_decl", "xhp_attribute_decl_type", "xhp_attribute_enum",
  "xhp_attribute_default", "xhp_attribute_is_required",
  "xhp_category_stmt", "xhp_category_decl", "xhp_children_stmt",
  "xhp_children_paren_expr", "xhp_children_decl_expr",
  "xhp_children_decl_tag", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration", "new_expr",
  "parenthesis_expr", "expr_list", "for_expr", "yield_expr",
  "yield_assign_expr", "yield_list_assign_expr", "expr",
  "expr_no_variable", "$@21", "$@22", "non_empty_shape_pair_list",
  "non_empty_static_shape_pair_list", "shape_pair_list",
  "static_shape_pair_list", "shape_literal", "array_literal",
  "collection_literal", "static_collection_literal", "dim_expr",
  "dim_expr_base", "lexical_vars", "lexical_var_list", "xhp_tag",
  "xhp_tag_body", "xhp_opt_end_label", "xhp_attributes", "xhp_children",
  "xhp_attribute_name", "xhp_attribute_value", "xhp_child", "xhp_label_ws",
  "xhp_bareword", "simple_function_call", "fully_qualified_class_name",
  "static_class_name", "class_name_reference", "exit_expr",
  "backticks_expr", "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "possible_comma_in_hphp_syntax",
  "non_empty_static_array_pair_list", "common_scalar_ae",
  "static_numeric_scalar_ae", "static_scalar_ae",
  "static_array_pair_list_ae", "non_empty_static_array_pair_list_ae",
  "non_empty_static_scalar_list_ae", "static_shape_pair_list_ae",
  "non_empty_static_shape_pair_list_ae", "static_scalar_list_ae",
  "attribute_static_scalar_list", "non_empty_user_attribute_list",
  "user_attribute_list", "$@23", "non_empty_user_attributes",
  "optional_user_attributes", "property_access",
  "property_access_without_variables", "array_access",
  "dimmable_variable_access", "dimmable_variable_no_calls_access",
  "variable", "dimmable_variable", "callable_variable",
  "object_method_call", "class_method_call", "variable_without_objects",
  "reference_variable", "compound_variable", "dim_offset",
  "simple_indirect_reference", "variable_no_calls",
  "dimmable_variable_no_calls", "assignment_list", "array_pair_list",
  "non_empty_array_pair_list", "collection_init",
  "non_empty_collection_init", "static_collection_init",
  "non_empty_static_collection_init", "encaps_list", "encaps_var",
  "encaps_var_offset", "internal_functions", "variable_list",
  "class_constant", "sm_typedef_statement", "sm_name_with_type",
  "sm_name_with_typevar", "sm_typeargs_opt", "sm_type_list",
  "sm_func_type_list", "sm_opt_return_type", "sm_typevar_list",
  "sm_shape_member_type", "sm_non_empty_shape_member_list",
  "sm_shape_member_list", "sm_shape_type", "sm_type", "sm_type_opt", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,    61,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    63,    58,   278,   279,   124,
      94,    38,   280,   281,   282,   283,    60,    62,   284,   285,
     286,   287,    43,    45,    46,    42,    47,    37,    33,   288,
     126,    64,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    91,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,    40,
      41,    59,   123,   125,    36,    96,    93,    34,    39
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   179,   180,   181,   181,   182,   182,   182,   182,   182,
     182,   182,   183,   182,   184,   182,   182,   182,   185,   185,
     185,   185,   185,   185,   186,   186,   187,   187,   187,   187,
     188,   188,   189,   189,   189,   190,   191,   192,   193,   193,
     194,   194,   195,   195,   195,   195,   196,   196,   196,   197,
     196,   198,   196,   199,   196,   200,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     201,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   202,   202,   204,   203,   205,   205,   206,   206,
     207,   209,   208,   210,   208,   212,   211,   213,   211,   214,
     211,   215,   211,   217,   216,   218,   216,   219,   219,   220,
     221,   222,   222,   222,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227,   228,   228,   229,   229,   230,   230,
     231,   231,   232,   232,   233,   233,   234,   234,   235,   235,
     235,   235,   236,   236,   236,   237,   237,   238,   238,   239,
     239,   240,   240,   241,   241,   242,   242,   242,   242,   243,
     243,   243,   243,   243,   243,   243,   243,   244,   244,   245,
     245,   245,   245,   246,   246,   247,   247,   247,   248,   248,
     248,   248,   249,   249,   251,   250,   252,   250,   250,   253,
     250,   254,   250,   250,   250,   250,   250,   250,   255,   255,
     255,   256,   257,   257,   258,   258,   259,   259,   260,   260,
     261,   261,   261,   261,   262,   262,   263,   263,   264,   264,
     265,   265,   266,   267,   267,   267,   268,   268,   268,   268,
     269,   269,   269,   269,   269,   269,   269,   270,   270,   270,
     271,   271,   272,   272,   273,   273,   274,   274,   275,   275,
     275,   275,   275,   275,   276,   276,   276,   276,   277,   277,
     278,   278,   279,   280,   280,   281,   281,   282,   283,   284,
     285,   285,   285,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     287,   286,   288,   286,   286,   286,   286,   289,   289,   290,
     290,   291,   291,   292,   292,   293,   294,   295,   296,   297,
     297,   298,   298,   298,   299,   299,   300,   300,   300,   300,
     301,   302,   302,   303,   303,   304,   304,   305,   305,   306,
     307,   307,   308,   308,   308,   309,   309,   309,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   311,   312,   312,   313,   313,   313,   314,   314,
     314,   315,   315,   315,   316,   316,   316,   317,   317,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   319,   319,   319,   319,   319,   319,   319,   319,
     320,   320,   321,   321,   321,   321,   321,   321,   321,   322,
     322,   323,   323,   324,   324,   325,   325,   325,   325,   326,
     326,   326,   326,   326,   327,   327,   327,   328,   328,   328,
     328,   328,   328,   329,   329,   330,   330,   330,   330,   331,
     331,   332,   332,   333,   333,   334,   334,   335,   335,   336,
     336,   338,   337,   339,   340,   340,   341,   341,   342,   342,
     343,   343,   344,   344,   345,   345,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   347,   347,   347,   347,
     347,   347,   347,   347,   348,   348,   348,   349,   349,   349,
     349,   349,   349,   350,   350,   351,   351,   352,   352,   352,
     353,   353,   354,   354,   355,   355,   356,   356,   356,   356,
     356,   356,   357,   357,   357,   357,   357,   358,   358,   358,
     358,   358,   358,   359,   359,   360,   360,   360,   360,   360,
     360,   360,   360,   361,   361,   362,   362,   362,   362,   363,
     363,   364,   364,   364,   364,   365,   365,   365,   365,   366,
     366,   366,   366,   366,   366,   367,   367,   367,   368,   368,
     368,   368,   368,   368,   368,   369,   369,   370,   371,   372,
     372,   373,   373,   374,   374,   375,   375,   376,   376,   376,
     376,   377,   377,   378,   378,   378,   378,   378,   378,   379,
     380,   380,   381,   381,   382,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   384,   384
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       4,     3,     0,     6,     0,     5,     3,     2,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     2,     3,     4,
       1,     3,     1,     2,     3,     1,     2,     2,     5,     4,
       2,     0,     1,     1,     1,     1,     3,     5,     8,     0,
       4,     0,     6,     0,    10,     0,     4,     2,     3,     2,
       3,     2,     3,     3,     3,     3,     3,     5,     1,     1,
       0,     9,     5,    14,     5,     3,     3,     2,     2,     2,
       2,     2,     9,     0,     0,     5,     1,     0,     1,     0,
       1,     0,    11,     0,    12,     0,     8,     0,     9,     0,
       7,     0,     8,     0,     6,     0,     7,     1,     1,     1,
       1,     1,     2,     2,     2,     0,     2,     0,     2,     0,
       1,     3,     1,     3,     2,     0,     1,     2,     1,     4,
       1,     4,     1,     4,     1,     4,     3,     5,     3,     4,
       4,     5,     5,     4,     0,     1,     1,     4,     0,     5,
       0,     2,     0,     3,     0,     3,     2,     1,     0,     3,
       4,     6,     5,     5,     6,     8,     7,     2,     0,     1,
       2,     3,     4,     3,     1,     1,     2,     4,     3,     5,
       1,     3,     2,     0,     0,     4,     0,     5,     2,     0,
      10,     0,    11,     3,     3,     3,     3,     5,     2,     2,
       0,     6,     5,     4,     3,     1,     1,     3,     4,     1,
       1,     1,     1,     4,     1,     3,     2,     0,     2,     0,
       1,     3,     1,     1,     1,     1,     3,     4,     4,     4,
       1,     1,     2,     2,     2,     3,     3,     1,     1,     1,
       1,     3,     1,     1,     1,     0,     1,     2,     1,     1,
       1,     1,     1,     1,     3,     5,     1,     3,     5,     4,
       3,     3,     3,     3,     1,     1,     0,     2,     3,     6,
       1,     1,     1,     6,     3,     4,     6,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     4,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     3,     2,
       0,    11,     0,    12,     1,     1,     1,     5,     3,     5,
       3,     2,     0,     2,     0,     4,     4,     4,     4,     4,
       4,     1,     1,     3,     5,     0,     3,     4,     1,     2,
       4,     2,     6,     0,     1,     4,     0,     2,     0,     1,
       1,     3,     1,     3,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     0,     0,     1,     1,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     1,     1,     2,     2,     4,     4,     1,     1,
       3,     3,     1,     1,     1,     1,     3,     3,     3,     2,
       0,     1,     0,     1,     0,     5,     3,     3,     1,     1,
       1,     1,     3,     2,     1,     1,     1,     1,     1,     2,
       2,     4,     4,     2,     0,     5,     3,     3,     1,     3,
       1,     2,     0,     5,     3,     2,     0,     3,     0,     4,
       2,     0,     3,     3,     1,     0,     1,     2,     2,     4,
       3,     3,     2,     4,     2,     4,     1,     1,     1,     1,
       1,     2,     4,     3,     4,     3,     1,     1,     1,     1,
       2,     4,     4,     3,     1,     1,     3,     7,     6,     8,
       9,     8,    10,     7,     6,     1,     2,     4,     4,     1,
       1,     4,     1,     0,     1,     2,     1,     1,     2,     4,
       3,     3,     0,     1,     2,     4,     3,     2,     3,     6,
       0,     1,     4,     2,     0,     5,     3,     3,     1,     6,
       4,     4,     2,     2,     0,     5,     3,     3,     1,     2,
       0,     5,     3,     3,     1,     2,     2,     1,     2,     1,
       4,     3,     3,     6,     3,     1,     1,     1,     4,     4,
       2,     2,     4,     2,     2,     1,     3,     3,     5,     1,
       2,     1,     4,     3,     0,     1,     3,     3,     1,     1,
       0,     0,     2,     3,     1,     4,     5,     3,     3,     3,
       3,     1,     2,     0,     4,     2,     2,     2,     1,     1,
       4,     6,     1,     8,     5,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     551,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   612,   473,     0,   479,
     480,    18,   503,   600,    69,   481,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,   466,     0,     0,     0,     0,
     111,     0,     0,     0,   485,   487,   488,   482,   483,     0,
       0,   489,   484,     0,     0,   464,    19,    20,    21,    23,
      22,     0,   486,     0,     0,     0,     0,    68,    41,   604,
     474,     0,     0,     3,    30,    32,    35,   502,     0,   463,
       0,     5,    89,     6,     7,     8,     0,   272,     0,     0,
       0,     0,   270,   337,   336,   346,   345,     0,   344,   567,
     465,     0,   505,   335,     0,   570,   271,     0,     0,   568,
     569,   566,   595,   599,     0,   325,   504,     9,   466,     0,
       0,    30,    89,   664,   271,   663,     0,   661,   660,   339,
       0,     0,   309,   310,   311,   312,   334,   332,   331,   330,
     329,   328,   327,   326,   466,     0,   674,   465,     0,   292,
     290,   277,   469,     0,   674,   468,     0,   478,   607,   606,
     470,     0,     0,   472,   333,     0,     0,     0,   264,     0,
      49,   266,     0,     0,    55,    57,     0,     0,    59,     0,
       0,     0,   698,   702,     0,     0,   674,     0,   699,     0,
      61,     0,    41,     0,     0,     0,    25,    26,   175,     0,
       0,   174,   113,   112,   180,    89,     0,     0,     0,     0,
       0,   671,    99,   109,   620,   624,   649,     0,   491,     0,
       0,     0,   647,     0,    14,     0,    33,     0,   267,   103,
     110,   376,   352,     0,   272,     0,   270,   271,     0,     0,
     475,     0,   476,     0,     0,     0,    81,     0,     0,    37,
     168,     0,    17,    88,     0,   108,    95,   107,    78,    79,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   612,    77,   603,   603,
     634,     0,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   291,   289,
       0,   571,   556,   603,     0,   562,   168,   603,     0,   605,
     596,   620,     0,     0,     0,   553,   548,   512,     0,     0,
       0,     0,     0,     0,    37,     0,   168,   260,     0,   608,
     556,   564,   471,     0,    41,   148,     0,    66,     0,     0,
     265,     0,     0,     0,     0,     0,    58,    76,    60,   674,
     695,   696,     0,   693,     0,     0,   675,   697,     0,   670,
      62,     0,    75,    27,     0,    16,     0,     0,   176,     0,
      64,     0,     0,     0,    65,   665,     0,     0,     0,     0,
       0,   119,     0,   621,     0,     0,   628,     0,   512,     0,
       0,   490,   648,   503,     0,     0,   646,   508,   645,    34,
       4,    11,    12,    63,     0,     0,     0,     0,   512,     0,
       0,   261,   322,   575,    46,    40,    42,    43,    44,    45,
       0,   338,   506,   507,    31,     0,     0,     0,   514,   169,
       0,   340,    91,   115,   295,   297,   296,     0,     0,   293,
     294,   298,   300,   299,   314,   313,   316,   315,   317,   319,
     320,   318,   308,   307,   302,   303,   301,   304,   305,   306,
     321,   602,     0,     0,   638,     0,   512,   667,   573,   595,
     101,   105,     0,    97,     0,     0,   268,   274,   288,   287,
     286,   285,   284,   283,   282,   281,   280,   279,   278,     0,
     558,   557,     0,     0,     0,     0,     0,     0,   662,   546,
     550,   511,   552,     0,     0,   674,     0,   611,   610,     0,
       0,   558,   557,   262,   150,   152,   263,     0,    41,   132,
      50,   266,     0,     0,     0,     0,   144,   144,    56,     0,
       0,   691,   512,     0,   680,     0,     0,     0,     0,     0,
     464,     0,    35,   493,   463,   499,     0,   492,    39,   498,
      84,     0,    24,    28,     0,   173,   181,   342,   178,     0,
       0,   658,   659,    10,   684,     0,     0,     0,   620,   617,
       0,   632,     0,   356,   511,   623,   657,   656,   655,     0,
     651,     0,   652,   654,     0,     4,   183,   370,   371,   379,
     378,     0,     0,   511,   351,   355,     0,     0,   572,   556,
     563,   601,     0,   673,   170,   462,   513,   167,     0,   555,
       0,     0,   117,   324,     0,   359,   360,     0,   357,   511,
     633,     0,   168,   119,     0,    93,   115,   612,   275,     0,
       0,   168,   560,   561,   574,   597,   598,     0,     0,     0,
     519,   520,   521,     0,     0,     0,   528,   527,   540,   512,
       0,   548,   609,   556,   565,   477,     0,   154,     0,     0,
      47,     0,     0,     0,     0,   125,   126,   136,     0,    41,
     134,    72,   144,     0,   144,     0,     0,   700,     0,   511,
     692,   694,   679,   678,     0,   676,   494,   495,   510,     0,
       0,   354,     0,   640,     0,    74,     0,    29,   177,   555,
       0,   666,    67,     0,     0,   672,   118,   120,   183,     0,
       0,   618,     0,     0,   627,     0,   626,   650,     0,    15,
       0,   245,     0,     0,   348,     0,   668,     0,   558,   557,
     676,     0,   171,    38,   157,     0,   514,   554,   706,   555,
     114,     0,     0,   323,   637,   636,   168,     0,     0,   183,
       0,   117,   478,   559,   168,     0,     0,   524,   525,   526,
     529,   530,   534,     0,   523,   542,   511,   545,   547,   549,
     559,     0,     0,     0,     0,   151,    52,     0,   266,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   138,
       0,   689,   690,     0,     0,   704,   518,     0,   512,   501,
       0,   512,     0,   500,   644,     0,   512,     0,     0,     0,
     179,   683,   687,   688,     0,   245,   622,   620,   269,   273,
     631,   630,     0,     0,    13,     0,     0,   248,   249,   250,
     253,   252,   251,   243,     0,     0,     0,   104,   182,   184,
       0,   242,   246,     0,   245,   382,     0,     0,   384,   377,
     380,     0,   375,     0,     0,     0,   168,   172,   681,   555,
     156,   705,     0,     0,   116,   183,     0,     0,   594,   183,
     245,   555,     0,   276,   168,     0,   588,   538,     0,   512,
     522,     0,     0,   512,   539,     0,    41,     0,   147,   133,
       0,   124,    70,   137,     0,     0,   140,     0,   145,   146,
      41,   139,   701,   677,     0,     0,   496,   511,   509,     0,
     511,   353,   497,     0,   358,   511,   639,     0,    41,   681,
       0,   685,   121,   100,     0,     0,   625,   653,     0,     0,
     122,   212,   210,   464,    23,     0,   206,     0,   211,   222,
       0,   220,   225,     0,   224,     0,   223,     0,    89,   247,
     186,     0,   188,     0,   244,   373,     0,     0,   347,   559,
     168,     0,     0,   365,   155,   706,     0,   159,   681,   245,
     635,   593,   245,   106,     0,   183,     0,   587,     0,   531,
     511,   533,     0,   532,   511,   541,    41,   153,    48,    53,
       0,   135,   141,    41,   143,     0,   517,   516,   350,     0,
     643,   642,     0,     0,   365,   686,   619,   629,     0,     0,
     196,   200,     0,     0,   193,   433,   432,   429,   431,   430,
     449,   451,   450,   421,   411,   427,   426,   389,   398,   399,
     401,   400,   420,   404,   402,   403,   405,   406,   407,   408,
     409,   410,   412,   413,   414,   415,   416,   417,   419,   418,
     390,   391,   392,   394,   395,   397,   435,   436,   445,   444,
     443,   442,   441,   440,   428,   446,   437,   438,   439,   422,
     423,   424,   425,   447,   448,   452,   454,   453,   455,   456,
     434,   458,   457,   393,   459,   460,   396,   461,   388,   217,
     385,     0,   194,   238,   239,   237,   230,     0,   231,   195,
     256,     0,     0,     0,     0,    89,   374,   372,   383,   381,
     168,     0,   591,   682,     0,     0,     0,   160,     0,     0,
      96,   102,   681,   245,   589,   537,   536,   544,     0,   149,
       0,    41,   130,    71,   142,   703,     0,     0,     0,     0,
      85,     0,   259,   123,     0,     0,   214,   207,     0,     0,
       0,   219,   221,     0,     0,   226,   233,   234,   232,     0,
       0,   185,     0,     0,     0,     0,     0,   590,     0,    41,
       0,   163,     0,   162,    41,     0,    98,     0,     0,    41,
     128,    54,     0,   515,   349,   641,    41,    41,   197,    30,
       0,   198,   199,     0,     0,   213,   216,   386,   387,     0,
     208,   235,   236,   228,   229,   227,   257,   254,   189,   187,
     258,     0,   592,     0,   368,   514,     0,   164,     0,   161,
       0,    41,   535,   543,     0,     0,     0,     0,     0,   245,
     215,   218,     0,   555,   191,   369,   513,     0,   341,     0,
     166,    92,     0,     0,   131,    83,   343,   204,     0,   244,
     255,     0,   555,     0,   366,   364,   165,    94,   129,    87,
       0,     0,   203,   681,     0,   367,     0,    86,    73,     0,
     202,     0,   681,     0,   201,   240,    41,   190,     0,     0,
       0,   192,     0,   241,     0,    41,     0,    82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    93,   615,   430,   141,   215,   216,    95,
      96,    97,    98,    99,   100,   258,   445,   446,   369,   189,
    1160,   375,  1020,  1289,   725,   726,  1298,   274,   142,   447,
     640,   780,   448,   463,   656,   411,   653,   449,   434,   654,
     276,   232,   249,   106,   642,   772,   597,   736,   959,   811,
     695,  1211,  1163,   550,   701,   374,   558,   703,   930,   545,
     687,   690,   803,   765,   766,   457,   458,   220,   221,   226,
     751,   868,   977,  1133,  1263,  1282,  1174,  1221,  1222,  1223,
     965,   966,   967,  1175,  1181,  1230,   970,   971,   975,  1126,
    1127,  1128,  1307,   869,   870,   871,   872,  1131,   873,   107,
     183,   370,   371,   108,   109,   110,   111,   112,   639,   729,
     438,   831,   439,   832,   113,   114,   115,   575,   116,   117,
    1145,  1245,   118,   435,  1137,   436,   752,   621,   882,   879,
    1119,  1120,   119,   120,   121,   177,   184,   261,   357,   122,
     578,   579,   123,   827,   532,   637,   828,   677,   790,   678,
     908,   909,   679,   912,   913,   680,   530,   347,   150,   151,
     124,   768,   331,   332,   630,   125,   178,   144,   127,   128,
     129,   130,   131,   132,   133,   492,   134,   180,   181,   414,
     417,   418,   495,   496,   835,   836,   241,   242,   609,   135,
     406,   136,   137,   207,   233,   269,   385,   714,   993,   595,
     561,   562,   563,   208,   209,   892
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -924
static const yytype_int16 yypact[] =
{
    -924,   118,  3067,  -924,  8931,  8931,   -40,  8931,  8931,  8931,
    -924,  8931,  8931,  8931,  8931,  8931,  8931,  8931,  8931,  8931,
    8931,  8931,  8931,  9137,  9137,  8931,  9150,   -26,   -14,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  8931,  -924,   -14,    13,
     121,   129,   -14,  6701,   331,  6859,  -924,   815,  7017,     2,
    8931,   484,    35,   151,   168,   301,   134,   138,   148,   150,
    -924,   331,   153,   162,  -924,  -924,  -924,  -924,  -924,   273,
     620,  -924,  -924,   331,  7175,  -924,  -924,  -924,  -924,  -924,
    -924,   331,  -924,   141,   164,   331,  8931,  -924,  -924,   171,
     277,   382,   382,  -924,   310,   213,   759,  -924,   209,  -924,
      39,  -924,   352,  -924,  -924,  -924,   453,  -924,   214,   242,
     253,  2608,  -924,  -924,   371,  -924,   381,   389,  -924,    34,
     294,   328,  -924,  -924,   700,   -22,  5612,    66,   305,    91,
      95,   312,   -15,  -924,   127,  -924,   409,  -924,   401,   337,
     373,  -924,   352, 10254,  5770, 10254,  8931, 10254, 10254, 10213,
     482,   331,  -924,  -924,   477,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  2173,   369,  -924,   404,   414,
     414,  -924,   408,  2173,   369,   420,   421,   399,    99,  -924,
     450,    66,  7333,  -924,  -924,  8931,  5595,    41, 10254,  6385,
    -924,  8931,  8931,   331,  -924,  -924,  9664,   402,  -924,  9705,
     815,   815,   412,  -924,   429,   505,    60,   565,  -924,   331,
    -924,  9768,  -924,  9809,   331,    42,  -924,     1,  -924,  1784,
      44,  -924,  -924,  -924,   568,   352,    46,  9137,  9137,  9137,
     441,   452,  -924,  -924,  2058,  7509,    59,   428,  -924,  9089,
    9137,   314,  -924,   331,  -924,   194,   213,   419, 10254,  -924,
    -924,  -924,   536,   613,   451, 10254,   457,   473,  3225,  8931,
     485,   459,   502,   485,   221,    -6,  -924,   331,   815,   469,
    7667,   815,  -924,  -924,   356,  -924,  -924,  -924,  -924,  -924,
    -924,  8931,  8931,  8931,  7825,  8931,  8931,  8931,  8931,  8931,
    8931,  8931,  8931,  8931,  8931,  8931,  8931,  8931,  8931,  8931,
    8931,  8931,  8931,  8931,  8931,  8931,  9150,  -924,  8931,  8931,
    8931,   324,   331,   331,   352,   453,  6543,  8931,  8931,  8931,
    8931,  8931,  8931,  8931,  8931,  8931,  8931,  8931,  -924,  -924,
     398,  -924,   102,  8931,  8931,  -924,  7667,  8931,  8931,   171,
     103,  2058,   475,  7983,  9850,  -924,   486,   638,  2173,   490,
     -16,   324,   492,   -12,  -924,   184,  7667,  -924,   588,  -924,
     105,  -924,  -924,  9891,  -924,  -924,  8931,  -924,   587,  5753,
     662,   501, 10190,   660,    50,    51,  -924,  -924,  -924,   369,
    -924,  -924,   815,   601,   514,   676,  -924,  -924,  9899,  -924,
    -924,  3383,  -924,    17,   484,  -924,   331,  8931,   414,    35,
    -924,  9899,   520,   635,  -924,   414,    76,    79,    19,   539,
     331,   590,   544,   414,    80,  9137,  9954,   546,   706,   576,
     331,  -924,  -924,   656,  1441,    -8,  -924,  -924,  -924,   213,
    -924,  -924,  -924,  -924,   547,   560,    25,   600,   715,   563,
     815,     7,   673,     9,  -924,  -924,  -924,  -924,  -924,  -924,
    1526,  -924,  -924,  -924,  -924,    45,  9137,   572,   727, 10254,
     725,  -924,  -924,   624, 10294, 10331, 10213,  8931,  2900, 10376,
    6377,  3058,  3215,  3372,  3530,  3530,  3530,  3530,  1468,  1468,
    1468,  1468,   981,   981,   538,   538,   538,   477,   477,   477,
    -924, 10254,   570,   571, 10053,   577,   736,   -50,   583,   103,
    -924,  -924,   331,  -924,  2520,  8931,  -924, 10213, 10213, 10213,
   10213, 10213, 10213, 10213, 10213, 10213, 10213, 10213, 10213,  8931,
     -50,   592,   578,  1623,   589,   591,  2232,    84,  -924,  1723,
    -924,   331,  -924,   451,     7,   369,    21,   107,  -924,   593,
    8931,  -924,  -924,  -924,  5437,   380, 10254,   -14,  -924,  -924,
    -924,  8931,  1881,  9899,   331,  5911,   594,   603,  -924,    48,
     653,  -924,   770,   610,  1271,   815,  9899,  9899,   615,    16,
     649,   622,   286,  -924,   655,  -924,   621,  -924,  -924,  -924,
     698,   331,  -924,  -924,  2343,  -924,  -924,  -924,   788,  9137,
     633,  -924,  -924,  -924,    61,   642,   741,   643,  2058,  7381,
     803,   414,  8141,  -924,  8299,  -924,  -924,  -924,  -924,   644,
    -924,  8931,  -924,  -924,  2730,  -924,  -924,  -924,  -924,  -924,
    -924,   809,  8931,   740,  -924,  -924,   657,   634,  -924,   108,
    -924,  -924,   815,  -924,   414,  -924,  8457,  -924,  9899,    85,
     658,   741,   709, 10354,  8931,  -924,  -924,  8931,  -924,  8931,
    -924,   665,  7667,   590,   654,  -924,   624,  9150,   414,  9416,
     667,  7667,  -924,  -924,   109,  -924,  -924,   829,   754,   754,
    -924,  -924,  -924,   674,    22,   675,  -924,  -924,  -924,   838,
     677,   486,  -924,   116,  -924,  -924,  9457,   397,   -14,  6385,
    -924,   679,  3541,   681,  9137,   733,   414,  -924,   846,  -924,
    -924,  -924,  -924,   515,  -924,    23,   815,  -924,   815,   601,
    -924,  -924,  -924,   852,   691,   692,  -924,  -924,  9899,   726,
     331,   786,   331,  9899,   699,  -924,   711,  -924,  -924,    85,
    9899,   414,  -924,   331,   444,  -924,   863,  -924,  -924,    88,
     704,   414,  8615,  9137, 10254,  9137, 10094,  -924,  1056,  -924,
    2909,  1035,   262,   -57, 10254,   756,  -924,  8931,   -50,   707,
    -924,  9137, 10254,  -924,  -924,   710,   871,  -924,   815,    85,
    -924,   741,   712, 10354, 10254, 10149,  7667,   713,   716,  -924,
     729,   709,   399,   732,  7667,   739,  8931,  -924,  -924,  -924,
    -924,  -924,  1723,   744,  -924,   816,  1723,  -924,  -924,  -924,
    -924,   -14,   884,   843,  6385,  -924,  -924,   747,  8931,   414,
    1881,   749,  9899,  3699,   585,   751,  8931,    77,   198,  -924,
     757,  -924,  -924,  1374,   898,  -924,   804,   755,   921,  -924,
     811,   928,   767,  -924,   819,   771,   935,   741,   777,   780,
    -924,  -924,   939,   331,   741,  1582,  -924,  2058,  -924, 10213,
     414,   414,  8773,   772,  -924,   815,   741,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  1089,   801,   825,  -924,  -924,  -924,
     401,   806,  -924,    47,   937,  -924,   215,  8931,  -924,  -924,
    -924,  8931,  -924,  8931,  9498,   784,  7667,   414,   930,    94,
    -924,  -924,   264,   792,   863,  -924,  8931,   799,  -924,  -924,
    1635,    85,   798,  -924,  7667,   810,  -924,   860,   813,   977,
    -924,   864,   817,   980,  -924,   963,  -924,   820,  -924,  -924,
     827,  -924,  -924,  -924,   824,   828,  -924,  9623,  -924,  -924,
    -924,  -924,  -924,  -924,   815,  9899,  -924,  9899,  -924,  9899,
     919,  -924,  -924,  9899,  -924,  9899,  -924,   931,  -924,   930,
     331,  -924,  -924,  -924,    89,  9137, 10254,  -924,   990,    33,
    -924,  -924,  -924,    53,   833,    54,  -924,  9265,  -924,  -924,
      55,  -924,  -924,   388,  -924,   840,  -924,   936,   352,  -924,
    -924,   815,  -924,   401,   937,   868,  9539,  9582, 10254,   848,
    7667,   850,   815,   925,  -924,   815,   959,  1020,   930,  2382,
   10254,  -924,  2433,  -924,   866,  -924,   879,  -924,  1723,  -924,
    1723,  -924,  1723,  -924,   955,  -924,  -924,  5437,  -924,  -924,
    6069,  -924,  -924,  -924,  5437,   881,  -924,   934,  -924,   941,
    -924,   942,   887,  3857,   925,  -924,  -924,   414,  9899,   741,
    -924,  -924,  2443,  1089,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   292,
    -924,   801,  -924,  -924,  -924,  -924,  -924,    70,    96,  -924,
    1028,    56,   331,   936,  1048,   352,  -924,  -924,  -924,  -924,
    7667,   889,  -924,  -924,   904,   902,   271,  1062,  9899,   905,
    -924,  -924,   930,  6525,  -924,  -924,   956,  -924,   960,  5437,
    6227,  -924,  -924,  -924,  5437,  -924,  9899,  9899,  9899,   938,
    -924,   940,  -924,  -924,   252,    29,  -924,  -924,  9899,  9265,
    9265,  1055,  -924,   388,   388,   395,  -924,  -924,  -924,  9899,
    1036,  -924,   944,    57,  9899,   331,   945,  -924,   281,  -924,
    1044,  1095,  9899,  -924,  -924,   947,  -924,  1723,  1723,  -924,
    -924,  -924,  4015,  -924,  -924,  -924,  -924,  -924,  -924,  1032,
     984,  -924,  -924,  1037,  2443,  -924,  -924,  -924,  -924,   972,
    -924,  1097,  -924,  -924,  -924,  -924,  -924,  1116,  -924,  -924,
    -924,   962,  -924,  1059,  -924,  1125,  4173,  1124,  9899,  -924,
    4331,  -924,  -924,  -924,  4489,   967,  4647,  4805,   331,   937,
    -924,  -924,  9899,    85,  -924,  -924,   299,   970,  -924,  9899,
    -924,  -924,  4963,   978,  -924,  -924,  -924,   993,   331,   586,
    -924,   982,    85,  1077,  -924,  -924,  -924,  -924,  -924,   145,
     741,   983,  -924,   930,   985,  -924,   987,  -924,  -924,    68,
    -924,   -48,   930,   741,  -924,  -924,  -924,  -924,   -48,  1078,
    5121,  -924,   994,  -924,   991,  -924,  5279,  -924
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -924,  -924,  -396,  -924,  -924,  -924,    -2,  -924,   774,   -13,
     773,  1360,  -924,   115,  -924,   -81,  -924,    -1,  -924,  -924,
    -924,  -924,  -924,  -924,  -124,  -924,  -924,  -139,    38,     5,
    -924,  -924,     6,  -924,  -924,  -924,  -924,     8,  -924,  -924,
     851,   855,   856,  1047,   517,   394,   523,   416,  -111,  -924,
     370,  -924,  -924,  -924,  -924,  -924,  -924,  -459,   258,  -924,
    -924,  -924,  -924,  -718,  -924,  -327,  -924,  -924,   790,  -924,
    -705,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,   147,  -924,  -924,  -924,  -924,  -924,    71,  -924,   325,
    -793,  -924,  -113,  -924,  -853,  -852,  -840,    63,  -924,   -51,
     -24,  1158,  -526,  -299,  -924,  -924,  1818,  1112,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
     165,  -924,   448,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -669,  -924,  1046,   113,  -282,  -924,  -924,   422,  1248,
    1508,  -924,  -924,  -924,  -395,  -760,  -924,  -924,   534,  -777,
    -924,  -924,  -924,  -924,  -924,  -924,   526,  -924,  -924,  -924,
    -537,   320,  -152,  -148,  -115,  -924,  -924,    87,  -924,  -924,
    -924,  -924,    18,  -114,  -924,  -203,  -924,  -924,  -924,  -328,
    -924,  -924,  -924,  -924,  -924,  -924,   608,   775,  -924,  -924,
     986,  -924,  -924,  -266,   -79,  -158,  -238,  -924,  -923,  -697,
     503,  -924,  -924,   481,  -120,   222
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -675
static const yytype_int16 yytable[] =
{
      94,   101,   250,   342,   186,   460,   890,   103,   104,   524,
     105,   839,   335,   527,   190,   907,   354,   506,   194,   914,
     340,   983,   984,   605,   490,   693,  1034,   277,   359,   539,
     455,   979,   360,   845,   614,   254,   841,  1224,   217,  -579,
     102,  1039,   197,   624,   179,   206,   337,   271,   387,   366,
     394,   893,   399,   632,   403,   981,   706,   245,   554,   231,
     246,  -209,  1043,  1121,  1190,  1190,   361,   236,   333,   733,
    -583,   618,   426,  -669,   900,  1149,  1039,   556,  1183,   231,
     380,   381,   333,   253,   589,   386,   402,   589,   599,   126,
     880,   396,   599,   225,   719,  -576,   599,   599,   705,  1184,
     793,   650,   767,   928,   231,   330,   493,   581,   218,   330,
     169,   170,   268,   330,   349,   881,   816,   817,     3,  -674,
     419,  1186,   352,  1305,  1306,  -467,    10,   333,   627,   146,
     522,   391,   239,   240,   525,    10,   168,   168,  1187,   176,
     330,  1188,   358,   182,   979,   267,   951,  -585,   386,   346,
    -579,   734,  -577,   238,   443,   185,  -578,   338,   537,   794,
    -613,   267,   314,  -580,   337,   613,  -614,   710,  -616,  -581,
    -582,   619,   453,   257,   212,   502,   225,  -615,  -586,   334,
     420,  -583,   191,  1004,    94,   365,   620,    94,   368,   592,
     999,   373,   767,   334,  1002,   462,   819,   499,   379,   379,
      33,   393,  1225,   379,  1040,  1041,  -576,   389,   633,   219,
     272,   707,   367,   395,   874,   400,   499,   404,   982,   750,
     555,   387,   268,   557,  -209,  1044,  1122,  1191,  1239,  1205,
     429,  1155,   767,  1156,   250,  1157,   277,   499,   334,  1304,
    1185,   499,   764,   814,   499,   818,   590,  1296,   929,   591,
     600,   994,   350,  1035,   667,  -158,    94,    33,   846,  1036,
     353,   985,   559,  -577,  -513,   454,   379,  -578,   222,   206,
     739,  -613,   231,   126,  -580,   338,   126,  -614,   168,  -616,
    -581,  -582,   920,   544,   797,   223,   168,   251,  -615,   628,
     192,   816,   817,   629,   236,   996,   102,   533,   193,   426,
    1153,   339,  1200,   227,   -84,  1178,   398,   228,   874,   497,
     231,   231,  1243,   231,   405,   405,   408,   229,  1179,   230,
     626,   413,   234,    31,   179,   777,   713,   425,   520,   498,
    1283,   235,   168,   252,   785,  1180,   266,   997,   267,   651,
     168,   168,   168,   259,  1201,   126,   236,   168,   521,   535,
     236,   237,   767,   168,  1244,   260,   541,   267,    89,   239,
     240,   251,   660,   874,   767,   431,   432,    94,   549,   498,
    1301,   931,  1284,   538,   224,   782,   542,   651,   270,  1308,
     379,   217,   628,   273,   682,   278,   629,   236,   683,    94,
    1231,  1232,   426,   140,   583,    31,    73,    33,   452,    46,
      76,    77,    31,    78,    79,    80,  1278,  1279,   594,   875,
     238,   239,   240,   279,   354,   239,   240,   608,   610,   176,
    1233,   684,   876,   655,   280,  1218,  -674,    31,   413,   102,
    1252,  1253,  -361,   938,   877,   350,   941,  1234,   379,   979,
    1235,   946,   308,   848,   386,   715,   688,   689,   268,   897,
     309,   427,   239,   240,   168,   236,   126,   905,  -674,    31,
     263,   168,   874,   801,   802,   874,   310,   692,   311,    31,
    -362,    33,    76,    77,   336,    78,    79,    80,   126,    76,
      77,  -584,    78,    79,    80,  1267,   343,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,    89,    46,
     231,   236,   601,   574,    76,    77,   341,    78,    79,    80,
    1227,  1228,   760,   499,  1011,    31,   574,   243,  1015,   954,
     239,   240,   345,   691,    31,   461,   306,   676,   168,   681,
     200,   268,   328,   329,  1123,   330,    76,    77,  1124,    78,
      79,    80,    94,   634,   351,  1281,    76,    77,  -466,    78,
      79,    80,   698,    94,   700,    31,   201,   973,   236,   991,
    -465,   355,   379,   379,  1294,   421,   239,   240,   356,   168,
     519,   358,    89,   377,   382,   236,    31,  1006,   388,   727,
     426,   401,   102,   303,   304,   305,   820,   306,   821,   958,
     433,   658,    76,    77,   330,    78,    79,    80,   383,   275,
     885,    76,    77,   384,    78,    79,    80,   815,   816,   817,
     204,   409,    94,   101,   410,   437,   874,   168,   813,   103,
     104,   441,   105,   239,   240,   758,   440,   442,   214,   202,
     379,   126,    76,    77,   451,    78,    79,    80,   -36,   696,
     239,   240,   126,   443,   461,   759,   531,    31,   891,   606,
     607,   203,   102,    76,    77,   529,    78,    79,    80,    31,
     534,    33,   536,  1141,   804,   168,   789,   789,   574,   547,
     366,   204,   551,   553,   205,   179,   731,   925,   816,   817,
     560,   574,   574,   564,   565,   413,   741,    94,   805,   587,
      94,    31,   857,   858,   859,   860,   861,   862,   262,   264,
     265,   126,   168,   760,   379,    31,   379,    33,   588,   596,
     593,   168,   168,   598,   604,  1134,   603,   611,   829,   616,
     833,   617,   622,   623,    76,    77,   767,    78,    79,    80,
     102,   594,   842,   625,  -363,   636,    76,    77,   638,    78,
      79,    80,   635,   641,   649,   767,   645,   646,    94,   101,
     648,   980,   652,   574,   662,   103,   104,  1292,   105,   664,
     540,   661,    89,   685,   243,   702,   379,   665,    76,    77,
     176,    78,    79,    80,   704,   708,   126,   915,   709,   126,
     711,   809,    76,    77,   718,    78,    79,    80,   102,   720,
     676,   721,   244,   723,   676,   722,   166,   166,    46,   174,
     724,   730,    94,   918,   732,   735,   757,   168,    89,    53,
      54,    94,    31,  1196,  1025,   738,   742,    60,   312,   755,
     747,   379,   753,   787,   788,    31,   779,   769,   756,   771,
     850,   200,   851,   574,   776,  1017,   784,   126,   574,  1132,
     200,   594,   786,   792,   795,   574,   796,   798,   887,  1024,
     806,   102,   808,   206,   313,   810,   168,   201,   168,   812,
     823,   824,   825,   421,   974,   830,   201,  1033,   837,   379,
     838,   844,  1143,   847,   168,   891,   886,    31,   883,   889,
     888,   910,   140,   898,   895,    73,    31,    75,   899,    76,
      77,   126,    78,    79,    80,   911,    31,   696,   901,  -674,
     126,   904,    76,    77,  -244,    78,    79,    80,   978,   906,
     916,   917,   857,   858,   859,   860,   861,   862,   919,   922,
     932,   268,   926,   168,   934,   936,   935,   574,  -674,   937,
     202,  -674,   379,   939,   413,  1159,   940,   942,   166,   202,
     972,   943,  1164,   945,   944,   957,   166,   950,   594,   948,
     949,   969,   203,   990,    76,    77,   992,    78,    79,    80,
     168,   203,   998,    76,    77,  1118,    78,    79,    80,  1001,
    1005,  1125,   204,    76,    77,   205,    78,    79,    80,   206,
    1007,   204,  1008,  1009,   205,  1010,  1012,  1013,  1014,  1016,
     379,  1018,   166,   379,   973,  1021,  1195,  1019,  1029,  1022,
     166,   166,   166,  1038,  1032,  1042,   676,   166,   676,  1130,
     676,  1129,   422,   166,  1136,    94,   428,  1140,    94,  1162,
    1142,  1135,    94,   300,   301,   302,   303,   304,   305,  1144,
     306,    94,  1147,  1148,  1158,   422,  1152,   428,   422,   428,
     428,  1189,  1037,   857,   858,   859,   860,   861,   862,  1154,
     574,  1165,   574,  1192,   574,   102,  1166,  1169,   574,  1197,
     574,  1194,   102,  1167,  1168,   281,   282,   283,   168,   167,
     167,   102,   175,  1198,  1199,  1202,    10,  1204,  1207,   174,
    1212,   284,  1208,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   126,   306,  1229,   126,  1248,  1237,
    1216,   126,  1217,  1238,   166,  1242,  1241,  1247,  1246,  1251,
     126,   166,  -205,  1250,  1258,  1261,  1184,  1259,  1254,  1262,
     231,  1264,  1265,  1266,   855,  1256,  1257,  1269,  1274,   856,
    1285,   857,   858,   859,   860,   861,   862,   863,  1290,  1288,
    1295,  1312,  1293,   574,  1300,  1302,  1303,    94,    94,  1210,
      31,   572,    94,  1315,  1314,  1297,   503,   500,   582,   501,
    1272,   315,  1219,   781,   572,   902,   778,  1118,  1118,  1299,
     921,  1125,  1125,   864,   865,  1023,   866,   894,   166,   585,
    1177,   976,  1182,   231,   187,  1311,  1193,   102,   256,  1171,
     878,   961,   102,   791,   903,   676,   676,   799,   867,   995,
      94,   167,   822,   962,   407,   843,     0,  1146,     0,   167,
       0,     0,     0,     0,     0,  1310,     0,     0,     0,   166,
     140,     0,   853,    73,  1316,   963,     0,    76,    77,     0,
      78,   964,    80,     0,    94,     0,   126,   126,    94,     0,
     102,   126,    94,     0,    94,    94,  1277,     0,     0,     0,
       0,     0,     0,   574,     0,   167,     0,     0,     0,     0,
      94,     0,     0,   167,   167,   167,  1291,   166,     0,     0,
     167,   574,   574,   574,   102,     0,   167,     0,   102,  1220,
       0,     0,   102,   574,   102,   102,   200,     0,     0,   126,
       0,     0,     0,     0,   574,     0,     0,     0,    94,   574,
     102,     0,     0,     0,    94,     0,     0,   574,     0,     0,
       0,     0,   201,     0,     0,   166,   572,     0,     0,     0,
       0,     0,     0,   126,     0,     0,     0,   126,     0,   572,
     572,   126,    31,   126,   126,     0,     0,     0,   102,     0,
       0,     0,   175,     0,   102,     0,     0,     0,     0,   126,
       0,     0,   166,   574,     0,     0,     0,     0,     0,   174,
       0,   166,   166,     0,     0,     0,     0,   574,     0,     0,
       0,     0,     0,     0,   574,     0,     0,   167,     0,     0,
       0,     0,     0,     0,   167,   202,     0,   126,     0,   200,
       0,     0,     0,   126,     0,     0,     0,     0,     0,     0,
       0,   572,     0,     0,   174,     0,     0,   203,     0,    76,
      77,     0,    78,    79,    80,   201,     0,     0,   712,     0,
     174,     0,     0,     0,   576,     0,     0,   204,     0,     0,
     205,     0,     0,     0,     0,    31,     0,   576,     0,     0,
     281,   282,   283,     0,     0,     0,     0,     0,     0,     0,
       0,   167,     0,     0,     0,     0,   284,   166,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
     306,   572,     0,     0,     0,     0,   572,     0,   202,     0,
       0,     0,   167,   572,  -675,  -675,  -675,  -675,   298,   299,
     300,   301,   302,   303,   304,   305,   166,   306,   166,     0,
     203,     0,    76,    77,     0,    78,    79,    80,     0,     0,
       0,   933,     0,     0,   166,   281,   282,   283,     0,     0,
     204,     0,     0,   205,   174,     0,     0,     0,     0,     0,
     167,   284,     0,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306,     0,     0,     0,     0,
       0,     0,     0,   166,     0,   572,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   167,   576,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     174,     0,   576,   576,   612,     0,     0,   174,     0,     0,
     166,     0,     0,    10,     0,     0,     0,     0,     0,   174,
       0,     0,   281,   282,   283,   167,   577,   174,     0,     0,
       0,     0,   737,     0,   167,   167,     0,     0,   284,   577,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,     0,   306,     0,     0,     0,    10,     0,     0,     0,
       0,   855,     0,     0,   576,     0,   856,   770,   857,   858,
     859,   860,   861,   862,   863,     0,     0,     0,     0,   631,
       0,     0,     0,   175,     0,     0,     0,     0,   572,     0,
     572,     0,   572,     0,     0,     0,   572,     0,   572,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   166,     0,
     864,   865,     0,   866,   855,     0,     0,     0,     0,   856,
     167,   857,   858,   859,   860,   861,   862,   863,   573,     0,
       0,     0,     0,     0,     0,   953,     0,     0,     0,     0,
       0,   573,     0,     0,   576,   668,   669,     0,     0,   576,
       0,     0,     0,     0,     0,     0,   576,     0,     0,     0,
       0,     0,     0,   864,   865,     0,   866,     0,     0,   167,
       0,   167,   670,   671,    31,     0,   663,     0,     0,     0,
       0,   577,   672,     0,     0,     0,     0,   167,  1003,     0,
       0,   572,   174,     0,   577,   577,   174,   737,     0,     0,
       0,     0,   143,   145,     0,   147,   148,   149,     0,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,     0,     0,   171,     0,     0,     0,   673,     0,     0,
       0,     0,     0,     0,   188,    31,   167,    33,   576,   674,
       0,   196,     0,   199,     0,     0,   211,     0,   213,     0,
       0,    76,    77,     0,    78,    79,    80,     0,     0,     0,
       0,     0,     0,   947,     0,     0,   577,     0,     0,   675,
     952,     0,   248,   167,     0,   164,     0,     0,     0,     0,
       0,     0,   960,     0,   255,     0,     0,     0,     0,   586,
     968,     0,   694,   573,     0,     0,     0,     0,     0,     0,
       0,   572,     0,     0,     0,   140,   573,   573,    73,     0,
      75,     0,    76,    77,     0,    78,    79,    80,     0,   572,
     572,   572,     0,     0,     0,     0,     0,   174,     0,     0,
       0,   572,    31,   165,    33,     0,   397,     0,    89,     0,
       0,     0,   572,     0,   344,     0,   577,   572,     0,     0,
       0,   577,     0,     0,     0,   572,     0,     0,   577,     0,
       0,   576,     0,   576,     0,   576,     0,     0,     0,   576,
       0,   576,   164,     0,     0,     0,     0,     0,   573,     0,
     363,   167,     0,   363,     0,     0,     0,     0,     0,   188,
     372,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   572,   140,     0,     0,    73,     0,    75,     0,    76,
      77,     0,    78,    79,    80,   572,     0,     0,     0,     0,
       0,     0,   572,     0,     0,     0,     0,     0,     0,     0,
     165,     0,     0,   416,     0,    89,     0,   424,     0,     0,
     577,   697,     0,   174,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   716,   717,   174,   450,   573,     0,
       0,     0,     0,   573,   576,  1173,     0,     0,   459,   968,
     573,     0,     0,     0,     0,     0,     0,     0,     0,   464,
     465,   466,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,     0,     0,   491,   491,   494,    31,
       0,    33,     0,     0,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   763,     0,     0,     0,
       0,   491,   523,     0,   459,   491,   526,     0,     0,     0,
       0,   507,     0,     0,     0,     0,     0,     0,     0,   164,
       0,     0,   573,     0,   459,     0,     0,     0,     0,     0,
       0,   412,     0,   577,   546,   577,     0,   577,     0,     0,
       0,   577,     0,   577,   576,     0,     0,     0,     0,   140,
       0,     0,    73,     0,    75,     0,    76,    77,     0,    78,
      79,    80,   576,   576,   576,   584,     0,     0,     0,     0,
       0,     0,     0,     0,   576,     0,   826,   165,     0,     0,
       0,   834,    89,     0,     0,   576,    26,     0,   840,     0,
     576,   281,   282,   283,    31,     0,    33,     0,   576,     0,
       0,     0,     0,     0,     0,     0,     0,   284,     0,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
       0,   306,     0,     0,   164,   643,   577,     0,     0,     0,
    1176,     0,     0,     0,   576,   573,     0,   573,     0,   573,
       0,     0,     0,   573,     0,   573,     0,     0,   576,     0,
       0,     0,     0,     0,   140,   576,     0,    73,     0,    75,
     923,    76,    77,   248,    78,    79,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   960,   659,     0,     0,
       0,     0,   348,     0,     0,     0,     0,    89,     0,  1309,
       0,     0,   281,   282,   283,     0,     0,     0,   686,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   284,   188,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,     0,   306,     0,     0,     0,   577,     0,   573,     0,
       0,     0,     0,     0,     0,   666,     0,     0,     0,     0,
       0,     0,     0,     0,   577,   577,   577,     0,     0,     0,
     744,     0,   746,    10,     0,     0,   577,     0,     0,   748,
       0,     0,     0,     0,     0,     0,     0,   577,     0,     0,
     754,     0,   577,  1026,     0,  1027,     0,  1028,     0,     0,
     577,  1030,     0,  1031,   762,     0,     0,     0,     0,     0,
       0,     0,   773,     0,     0,   774,     0,   775,     0,     0,
     459,     0,  1260,     0,    10,     0,     0,     0,     0,   459,
       0,   855,     0,     0,     0,     0,   856,     0,   857,   858,
     859,   860,   861,   862,   863,     0,   577,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   573,     0,
     577,     0,    29,    30,     0,     0,   728,   577,     0,     0,
       0,     0,    35,     0,     0,     0,   573,   573,   573,     0,
     864,   865,   855,   866,     0,     0,     0,   856,   573,   857,
     858,   859,   860,   861,   862,   863,  1172,     0,     0,   573,
       0,     0,     0,     0,   573,  1150,     0,     0,     0,     0,
     849,     0,   573,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,     0,     0,   884,     0,     0,     0,   569,
       0,   864,   865,   657,   866,    71,    72,     0,     0,     0,
       0,    31,     0,    33,   459,     0,     0,     0,     0,    82,
       0,     0,   459,     0,   849,     0,  1151,     0,   573,     0,
       0,     0,     0,     0,     0,     0,     0,   281,   282,   283,
       0,     0,   573,     0,     0,     0,   188,     0,     0,   573,
       0,   164,     0,   284,   927,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,  1203,   306,     0,     0,
       0,   140,     0,     0,    73,     0,    75,     0,    76,    77,
     956,    78,    79,    80,  1213,  1214,  1215,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1226,     0,     0,   165,
       0,     0,     0,     0,    89,   986,     0,  1236,     0,   987,
       0,   988,  1240,     0,   459,     0,     0,     0,     0,     0,
    1249,     0,     0,     0,  1000,     0,     0,     0,     0,     0,
       0,     0,   459,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1270,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1280,    10,    11,    12,     0,     0,     0,  1286,    13,   307,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,    28,     0,     0,     0,    29,
      30,    31,    32,    33,     0,    34,     0,     0,   459,    35,
      36,    37,    38,     0,    39,     0,    40,     0,    41,     0,
       0,    42,     0,     0,     0,    43,    44,    45,    46,    47,
      48,    49,     0,    50,    51,    52,     0,     0,     0,    53,
      54,    55,     0,    56,    57,    58,    59,    60,    61,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
       0,     0,     0,     0,     0,     0,    69,     0,     0,     0,
       0,    70,    71,    72,    73,    74,    75,     0,    76,    77,
       0,    78,    79,    80,    81,     0,    82,     0,     0,     0,
      83,     0,     0,     0,     0,     0,    84,    85,     0,    86,
       0,    87,    88,   749,    89,    90,     0,    91,    92,   281,
     282,   283,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,   284,   644,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,     0,   306,
      10,    11,    12,     0,     0,     0,     0,    13,   459,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,     0,     0,    29,    30,
      31,    32,    33,     0,    34,     0,     0,     0,    35,    36,
      37,    38,     0,    39,     0,    40,     0,    41,     0,     0,
      42,     0,     0,     0,    43,    44,    45,    46,    47,    48,
      49,     0,    50,    51,    52,     0,     0,     0,    53,    54,
      55,     0,    56,    57,    58,    59,    60,    61,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
      70,    71,    72,    73,    74,    75,     0,    76,    77,     0,
      78,    79,    80,    81,     0,    82,     0,     0,     0,    83,
       4,     5,     6,     7,     8,    84,    85,     0,    86,     9,
      87,    88,   854,    89,    90,     0,    91,    92,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,     0,   306,    10,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,     0,     0,    29,    30,    31,    32,
      33,     0,    34,     0,     0,     0,    35,    36,    37,    38,
       0,    39,     0,    40,     0,    41,     0,     0,    42,     0,
       0,     0,    43,    44,    45,    46,    47,    48,    49,     0,
      50,    51,    52,     0,     0,     0,    53,    54,    55,     0,
      56,    57,    58,    59,    60,    61,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,    70,    71,
      72,    73,    74,    75,     0,    76,    77,     0,    78,    79,
      80,    81,     0,    82,     0,     0,     0,    83,     4,     5,
       6,     7,     8,    84,    85,     0,    86,     9,    87,    88,
       0,    89,    90,     0,    91,    92,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,     0,   306,     0,    10,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,     0,     0,    29,    30,    31,    32,    33,     0,
      34,     0,     0,     0,    35,    36,    37,    38,     0,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,     0,    48,    49,     0,    50,     0,
      52,     0,     0,     0,    53,    54,    55,     0,    56,    57,
      58,     0,    60,    61,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,   140,    71,    72,    73,
      74,    75,     0,    76,    77,     0,    78,    79,    80,    81,
       0,    82,     0,     0,     0,    83,     4,     5,     6,     7,
       8,    84,     0,     0,    86,     9,    87,    88,   444,    89,
      90,     0,    91,    92,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
       0,   306,     0,     0,    10,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,     0,
       0,     0,    29,    30,    31,    32,    33,     0,    34,     0,
       0,     0,    35,    36,    37,    38,     0,    39,     0,    40,
       0,    41,     0,     0,    42,     0,     0,     0,    43,    44,
      45,    46,     0,    48,    49,     0,    50,     0,    52,     0,
       0,     0,    53,    54,    55,     0,    56,    57,    58,     0,
      60,    61,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,   140,    71,    72,    73,    74,    75,
       0,    76,    77,     0,    78,    79,    80,    81,     0,    82,
       0,     0,     0,    83,     4,     5,     6,     7,     8,    84,
       0,     0,    86,     9,    87,    88,   580,    89,    90,     0,
      91,    92,  -675,  -675,  -675,  -675,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,     0,   306,
       0,     0,    10,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,     0,     0,     0,
      29,    30,    31,    32,    33,     0,    34,     0,     0,     0,
      35,    36,    37,    38,   807,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
       0,    48,    49,     0,    50,     0,    52,     0,     0,     0,
      53,    54,    55,     0,    56,    57,    58,     0,    60,    61,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,   140,    71,    72,    73,    74,    75,     0,    76,
      77,     0,    78,    79,    80,    81,     0,    82,     0,     0,
       0,    83,     4,     5,     6,     7,     8,    84,     0,     0,
      86,     9,    87,    88,     0,    89,    90,     0,    91,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,     0,     0,    29,    30,
      31,    32,    33,     0,    34,     0,     0,     0,    35,    36,
      37,    38,     0,    39,     0,    40,     0,    41,   924,     0,
      42,     0,     0,     0,    43,    44,    45,    46,     0,    48,
      49,     0,    50,     0,    52,     0,     0,     0,    53,    54,
      55,     0,    56,    57,    58,     0,    60,    61,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
     140,    71,    72,    73,    74,    75,     0,    76,    77,     0,
      78,    79,    80,    81,     0,    82,     0,     0,     0,    83,
       4,     5,     6,     7,     8,    84,     0,     0,    86,     9,
      87,    88,     0,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,     0,     0,    29,    30,    31,    32,
      33,     0,    34,     0,     0,     0,    35,    36,    37,    38,
       0,    39,     0,    40,     0,    41,     0,     0,    42,     0,
       0,     0,    43,    44,    45,    46,     0,    48,    49,     0,
      50,     0,    52,     0,     0,     0,    53,    54,    55,     0,
      56,    57,    58,     0,    60,    61,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,   140,    71,
      72,    73,    74,    75,     0,    76,    77,     0,    78,    79,
      80,    81,     0,    82,     0,     0,     0,    83,     4,     5,
       6,     7,     8,    84,     0,     0,    86,     9,    87,    88,
    1170,    89,    90,     0,    91,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,     0,     0,    29,    30,    31,    32,    33,     0,
      34,     0,     0,     0,    35,    36,    37,    38,     0,    39,
       0,    40,  1255,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,     0,    48,    49,     0,    50,     0,
      52,     0,     0,     0,    53,    54,    55,     0,    56,    57,
      58,     0,    60,    61,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,   140,    71,    72,    73,
      74,    75,     0,    76,    77,     0,    78,    79,    80,    81,
       0,    82,     0,     0,     0,    83,     4,     5,     6,     7,
       8,    84,     0,     0,    86,     9,    87,    88,     0,    89,
      90,     0,    91,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,     0,
       0,     0,    29,    30,    31,    32,    33,     0,    34,     0,
       0,     0,    35,    36,    37,    38,     0,    39,     0,    40,
       0,    41,     0,     0,    42,     0,     0,     0,    43,    44,
      45,    46,     0,    48,    49,     0,    50,     0,    52,     0,
       0,     0,    53,    54,    55,     0,    56,    57,    58,     0,
      60,    61,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,   140,    71,    72,    73,    74,    75,
       0,    76,    77,     0,    78,    79,    80,    81,     0,    82,
       0,     0,     0,    83,     4,     5,     6,     7,     8,    84,
       0,     0,    86,     9,    87,    88,  1268,    89,    90,     0,
      91,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,     0,     0,     0,
      29,    30,    31,    32,    33,     0,    34,     0,     0,     0,
      35,    36,    37,    38,     0,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
       0,    48,    49,     0,    50,     0,    52,     0,     0,     0,
      53,    54,    55,     0,    56,    57,    58,     0,    60,    61,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,   140,    71,    72,    73,    74,    75,     0,    76,
      77,     0,    78,    79,    80,    81,     0,    82,     0,     0,
       0,    83,     4,     5,     6,     7,     8,    84,     0,     0,
      86,     9,    87,    88,  1271,    89,    90,     0,    91,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,     0,     0,    29,    30,
      31,    32,    33,     0,    34,     0,     0,     0,    35,    36,
      37,    38,     0,    39,  1273,    40,     0,    41,     0,     0,
      42,     0,     0,     0,    43,    44,    45,    46,     0,    48,
      49,     0,    50,     0,    52,     0,     0,     0,    53,    54,
      55,     0,    56,    57,    58,     0,    60,    61,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
     140,    71,    72,    73,    74,    75,     0,    76,    77,     0,
      78,    79,    80,    81,     0,    82,     0,     0,     0,    83,
       4,     5,     6,     7,     8,    84,     0,     0,    86,     9,
      87,    88,     0,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,     0,     0,    29,    30,    31,    32,
      33,     0,    34,     0,     0,     0,    35,    36,    37,    38,
       0,    39,     0,    40,     0,    41,     0,     0,    42,     0,
       0,     0,    43,    44,    45,    46,     0,    48,    49,     0,
      50,     0,    52,     0,     0,     0,    53,    54,    55,     0,
      56,    57,    58,     0,    60,    61,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,   140,    71,
      72,    73,    74,    75,     0,    76,    77,     0,    78,    79,
      80,    81,     0,    82,     0,     0,     0,    83,     4,     5,
       6,     7,     8,    84,     0,     0,    86,     9,    87,    88,
    1275,    89,    90,     0,    91,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,     0,     0,    29,    30,    31,    32,    33,     0,
      34,     0,     0,     0,    35,    36,    37,    38,     0,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,     0,    48,    49,     0,    50,     0,
      52,     0,     0,     0,    53,    54,    55,     0,    56,    57,
      58,     0,    60,    61,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,   140,    71,    72,    73,
      74,    75,     0,    76,    77,     0,    78,    79,    80,    81,
       0,    82,     0,     0,     0,    83,     4,     5,     6,     7,
       8,    84,     0,     0,    86,     9,    87,    88,  1276,    89,
      90,     0,    91,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,     0,
       0,     0,    29,    30,    31,    32,    33,     0,    34,     0,
       0,     0,    35,    36,    37,    38,     0,    39,     0,    40,
       0,    41,     0,     0,    42,     0,     0,     0,    43,    44,
      45,    46,     0,    48,    49,     0,    50,     0,    52,     0,
       0,     0,    53,    54,    55,     0,    56,    57,    58,     0,
      60,    61,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,   140,    71,    72,    73,    74,    75,
       0,    76,    77,     0,    78,    79,    80,    81,     0,    82,
       0,     0,     0,    83,     4,     5,     6,     7,     8,    84,
       0,     0,    86,     9,    87,    88,  1287,    89,    90,     0,
      91,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,     0,     0,     0,
      29,    30,    31,    32,    33,     0,    34,     0,     0,     0,
      35,    36,    37,    38,     0,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
       0,    48,    49,     0,    50,     0,    52,     0,     0,     0,
      53,    54,    55,     0,    56,    57,    58,     0,    60,    61,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,   140,    71,    72,    73,    74,    75,     0,    76,
      77,     0,    78,    79,    80,    81,     0,    82,     0,     0,
       0,    83,     4,     5,     6,     7,     8,    84,     0,     0,
      86,     9,    87,    88,  1313,    89,    90,     0,    91,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,     0,     0,    29,    30,
      31,    32,    33,     0,    34,     0,     0,     0,    35,    36,
      37,    38,     0,    39,     0,    40,     0,    41,     0,     0,
      42,     0,     0,     0,    43,    44,    45,    46,     0,    48,
      49,     0,    50,     0,    52,     0,     0,     0,    53,    54,
      55,     0,    56,    57,    58,     0,    60,    61,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
     140,    71,    72,    73,    74,    75,     0,    76,    77,     0,
      78,    79,    80,    81,     0,    82,     0,     0,     0,    83,
       4,     5,     6,     7,     8,    84,     0,     0,    86,     9,
      87,    88,  1317,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,     0,     0,    29,    30,    31,    32,
      33,     0,    34,     0,     0,     0,    35,    36,    37,    38,
       0,    39,     0,    40,     0,    41,     0,     0,    42,     0,
       0,     0,    43,    44,    45,    46,     0,    48,    49,     0,
      50,     0,    52,     0,     0,     0,    53,    54,    55,     0,
      56,    57,    58,     0,    60,    61,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,   140,    71,
      72,    73,    74,    75,     0,    76,    77,     0,    78,    79,
      80,    81,     0,    82,     0,     0,     0,    83,     4,     5,
       6,     7,     8,    84,     0,     0,    86,     9,    87,    88,
       0,    89,    90,     0,    91,    92,     0,     0,     0,     0,
       0,   364,     0,     0,     0,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,     0,     0,    29,    30,    31,    32,    33,     0,
      34,   328,   329,     0,    35,    36,    37,    38,     0,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,     0,    48,    49,     0,    50,     0,
      52,     0,     0,     0,     0,     0,    55,     0,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,    69,     0,   330,     0,     0,   140,    71,    72,    73,
      74,    75,     0,    76,    77,     0,    78,    79,    80,     0,
       0,    82,     0,     0,     0,    83,     4,     5,     6,     7,
       8,    84,     0,     0,    86,     9,    87,    88,     0,    89,
      90,     0,    91,    92,     0,     0,     0,     0,     0,   548,
       0,     0,     0,   343,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,     0,
       0,     0,    29,    30,    31,    32,    33,     0,    34,   328,
     329,     0,    35,    36,    37,    38,     0,    39,     0,    40,
       0,    41,     0,     0,    42,     0,     0,     0,    43,    44,
      45,    46,     0,    48,    49,     0,    50,     0,    52,     0,
       0,     0,     0,     0,    55,     0,    56,    57,    58,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,    69,
       0,   330,     0,     0,   140,    71,    72,    73,    74,    75,
       0,    76,    77,     0,    78,    79,    80,     0,     0,    82,
       0,     0,     0,    83,     4,     5,     6,     7,     8,    84,
       0,     0,    86,     9,    87,    88,     0,    89,    90,     0,
      91,    92,     0,     0,     0,     0,     0,   699,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,     0,     0,     0,
      29,    30,    31,    32,    33,     0,    34,     0,     0,     0,
      35,    36,    37,    38,     0,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
       0,    48,    49,     0,    50,     0,    52,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,   140,    71,    72,    73,    74,    75,     0,    76,
      77,     0,    78,    79,    80,     0,     0,    82,     0,     0,
       0,    83,     4,     5,     6,     7,     8,    84,     0,     0,
      86,     9,    87,    88,     0,    89,    90,     0,    91,    92,
       0,     0,     0,     0,     0,  1161,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,     0,     0,    29,    30,
      31,    32,    33,     0,    34,     0,     0,     0,    35,    36,
      37,    38,     0,    39,     0,    40,     0,    41,     0,     0,
      42,     0,     0,     0,    43,    44,    45,    46,     0,    48,
      49,     0,    50,     0,    52,     0,     0,     0,     0,     0,
      55,     0,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
     140,    71,    72,    73,    74,    75,     0,    76,    77,     0,
      78,    79,    80,     0,     0,    82,     0,     0,     0,    83,
       4,     5,     6,     7,     8,    84,     0,     0,    86,     9,
      87,    88,     0,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,  1209,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,     0,     0,    29,    30,    31,    32,
      33,     0,    34,     0,     0,     0,    35,    36,    37,    38,
       0,    39,     0,    40,     0,    41,     0,     0,    42,     0,
       0,     0,    43,    44,    45,    46,     0,    48,    49,     0,
      50,     0,    52,     0,     0,     0,     0,     0,    55,     0,
      56,    57,    58,     0,     0,     0,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,   140,    71,
      72,    73,    74,    75,     0,    76,    77,     0,    78,    79,
      80,     0,     0,    82,     0,     0,     0,    83,     4,     5,
       6,     7,     8,    84,     0,     0,    86,     9,    87,    88,
       0,    89,    90,     0,    91,    92,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,     0,   306,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,     0,     0,    29,    30,    31,    32,    33,     0,
      34,     0,     0,     0,    35,    36,    37,    38,     0,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,     0,    48,    49,     0,    50,     0,
      52,     0,     0,     0,     0,     0,    55,     0,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,   140,    71,    72,    73,
      74,    75,     0,    76,    77,     0,    78,    79,    80,     0,
       0,    82,     0,     0,     0,    83,     4,     5,     6,     7,
       8,    84,     0,     0,    86,     9,    87,    88,     0,    89,
      90,     0,    91,    92,     0,     0,    10,     0,     0,     0,
       0,     0,     0,     0,   504,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,     0,     0,
       0,     0,    29,    30,    31,    32,    33,     0,     0,     0,
       0,     0,    35,     0,   855,     0,     0,     0,     0,   856,
       0,   857,   858,   859,   860,   861,   862,   863,     0,     0,
       0,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,     0,   139,    63,    64,    65,
      66,    67,    68,   864,   865,     0,   866,     0,     0,    69,
       0,     0,     0,     0,   140,    71,    72,    73,   505,    75,
       0,    76,    77,     0,    78,    79,    80,     0,  1206,    82,
       0,     0,     0,    83,     4,     5,     6,     7,     8,    84,
       0,     0,    86,     9,     0,     0,     0,    89,    90,     0,
      91,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,     0,     0,     0,     0,
      29,    30,    31,    32,    33,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   138,     0,     0,    57,    58,     0,     0,     0,
       0,     0,     0,     0,   139,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,   140,    71,    72,    73,     0,    75,     0,    76,
      77,     0,    78,    79,    80,     0,     0,    82,     0,     0,
       0,    83,     4,     5,     6,     7,     8,    84,     0,     0,
      86,     9,   195,     0,     0,    89,    90,     0,    91,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     138,     0,     0,    57,    58,     0,     0,     0,     0,     0,
       0,     0,   139,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
     140,    71,    72,    73,     0,    75,     0,    76,    77,     0,
      78,    79,    80,     0,     0,    82,     0,     0,     0,    83,
       4,     5,     6,     7,     8,    84,     0,     0,    86,     9,
     198,     0,     0,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,     0,     0,     0,     0,    29,    30,    31,    32,
      33,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     0,     0,
     139,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,   140,    71,
      72,    73,     0,    75,     0,    76,    77,     0,    78,    79,
      80,     0,     0,    82,     0,     0,     0,    83,     4,     5,
       6,     7,     8,    84,     0,     0,    86,     9,   210,     0,
       0,    89,    90,     0,    91,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
       0,     0,     0,     0,    29,    30,    31,    32,    33,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     247,     0,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   138,     0,     0,    57,
      58,     0,     0,     0,     0,     0,     0,     0,   139,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,   140,    71,    72,    73,
       0,    75,     0,    76,    77,     0,    78,    79,    80,     0,
       0,    82,     0,     0,     0,    83,     4,     5,     6,     7,
       8,    84,     0,     0,    86,     9,     0,     0,     0,    89,
      90,     0,    91,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,     0,     0,
       0,     0,    29,    30,    31,    32,    33,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,     0,     0,    57,    58,     0,
       0,     0,    31,     0,    33,     0,   139,    63,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,   140,    71,    72,    73,     0,    75,
       0,    76,    77,     0,    78,    79,    80,     0,     0,    82,
       0,     0,   164,    83,     0,     0,     0,     0,     0,    84,
       0,     0,    86,   362,   740,     0,     0,    89,    90,     0,
      91,    92,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,   140,     0,     0,    73,     0,    75,     0,    76,
      77,     0,    78,    79,    80,     0,     0,     0,     0,     0,
     415,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     165,    11,    12,     0,     0,    89,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     138,     0,     0,    57,    58,     0,     0,     0,     0,     0,
       0,     0,   139,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
     140,    71,    72,    73,     0,    75,     0,    76,    77,     0,
      78,    79,    80,     0,     0,    82,     0,     0,     0,    83,
       4,     5,     6,     7,     8,    84,     0,     0,    86,     9,
       0,     0,     0,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   456,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,     0,     0,     0,     0,    29,    30,    31,    32,
      33,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     0,     0,
     139,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,   140,    71,
      72,    73,     0,    75,     0,    76,    77,     0,    78,    79,
      80,     0,     0,    82,     0,     0,     0,    83,     4,     5,
       6,     7,     8,    84,     0,     0,    86,     9,     0,     0,
       0,    89,    90,     0,    91,    92,     0,     0,     0,     0,
       0,   467,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
       0,     0,     0,     0,    29,    30,    31,    32,    33,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   138,     0,     0,    57,
      58,     0,     0,     0,     0,     0,     0,     0,   139,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,   140,    71,    72,    73,
       0,    75,     0,    76,    77,     0,    78,    79,    80,     0,
       0,    82,     0,     0,     0,    83,     4,     5,     6,     7,
       8,    84,     0,     0,    86,     9,     0,     0,     0,    89,
      90,     0,    91,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   504,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,     0,     0,
       0,     0,    29,    30,    31,    32,    33,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,     0,   139,    63,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,   140,    71,    72,    73,     0,    75,
       0,    76,    77,     0,    78,    79,    80,     0,     0,    82,
       0,     0,     0,    83,     4,     5,     6,     7,     8,    84,
       0,     0,    86,     9,     0,     0,     0,    89,    90,     0,
      91,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   743,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,     0,     0,     0,     0,
      29,    30,    31,    32,    33,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   138,     0,     0,    57,    58,     0,     0,     0,
       0,     0,     0,     0,   139,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,   140,    71,    72,    73,     0,    75,     0,    76,
      77,     0,    78,    79,    80,     0,     0,    82,     0,     0,
       0,    83,     4,     5,     6,     7,     8,    84,     0,     0,
      86,     9,     0,     0,     0,    89,    90,     0,    91,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     745,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     138,     0,     0,    57,    58,     0,     0,     0,     0,     0,
       0,     0,   139,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,    69,     0,     0,     0,     0,
     140,    71,    72,    73,     0,    75,     0,    76,    77,     0,
      78,    79,    80,     0,     0,    82,     0,     0,     0,    83,
       4,     5,     6,     7,     8,    84,     0,     0,    86,     9,
       0,     0,     0,    89,    90,     0,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   761,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,     0,     0,     0,     0,    29,    30,    31,    32,
      33,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     0,     0,
     139,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,   140,    71,
      72,    73,     0,    75,     0,    76,    77,     0,    78,    79,
      80,     0,     0,    82,     0,     0,     0,    83,     4,     5,
       6,     7,     8,    84,     0,     0,    86,     9,     0,     0,
       0,    89,    90,     0,    91,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
       0,     0,     0,     0,    29,    30,    31,    32,    33,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   138,     0,     0,    57,
      58,     0,     0,     0,     0,     0,     0,     0,   139,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,   140,    71,    72,    73,
     505,    75,     0,    76,    77,     0,    78,    79,    80,     0,
       0,    82,     0,     0,     0,    83,     4,     5,     6,     7,
       8,    84,     0,     0,    86,     9,     0,     0,     0,    89,
      90,     0,    91,    92,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   955,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,     0,     0,
       0,     0,    29,    30,    31,    32,    33,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,     0,   139,    63,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,   140,    71,    72,    73,     0,    75,
       0,    76,    77,     0,    78,    79,    80,     0,     0,    82,
       0,     0,     0,    83,     4,     5,     6,     7,     8,    84,
       0,     0,    86,     9,     0,     0,     0,    89,    90,     0,
      91,    92,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,     0,     0,     0,     0,
      29,    30,    31,    32,    33,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   138,     0,     0,    57,    58,     0,     0,     0,
       0,     0,     0,     0,   139,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,   140,    71,    72,    73,     0,    75,     0,    76,
      77,     0,    78,    79,    80,     0,     0,    82,     0,     0,
       0,    83,     4,     5,     6,     7,     8,    84,     0,     0,
      86,     9,     0,     0,     0,    89,    90,     0,    91,    92,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
      31,   423,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     138,     0,     0,    57,    58,     0,     0,     0,    31,     0,
      33,     0,   139,    63,    64,    65,    66,    67,    68,     0,
       0,    31,     0,    33,     0,    69,     0,     0,     0,     0,
     140,    71,    72,    73,     0,    75,     0,    76,    77,     0,
      78,    79,    80,     0,     0,    82,     0,     0,   164,    83,
       0,     0,     0,     0,     0,    84,     0,     0,    86,     0,
       0,   172,     0,    89,    90,     0,    91,    92,  1045,  1046,
    1047,  1048,  1049,     0,  1050,  1051,  1052,  1053,   140,     0,
       0,    73,     0,    75,     0,    76,    77,     0,    78,    79,
      80,   140,     0,     0,    73,     0,    75,     0,    76,    77,
       0,    78,    79,    80,     0,     0,   165,     0,     0,     0,
       0,    89,     0,     0,  1054,     0,     0,     0,     0,   173,
       0,     0,     0,     0,    89,     0,     0,  1055,  1056,  1057,
    1058,  1059,  1060,  1061,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,  1062,  1063,  1064,  1065,  1066,
    1067,  1068,  1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,
    1077,  1078,  1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,
    1087,  1088,  1089,  1090,  1091,  1092,  1093,  1094,  1095,  1096,
    1097,  1098,  1099,  1100,  1101,  1102,     0,     0,  1103,  1104,
    1105,  1106,  1107,  1108,  1109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1110,  1111,  1112,     0,
    1113,     0,     0,    76,    77,     0,    78,    79,    80,  1114,
       0,  1115,     0,     0,  1116,   281,   282,   283,     0,     0,
       0,     0,  1117,     0,     0,     0,     0,     0,     0,     0,
       0,   284,     0,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306,   281,   282,   283,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   284,     0,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,     0,   306,   281,   282,   283,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   284,     0,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,     0,   306,   281,   282,
     283,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   284,     0,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,     0,   306,   783,
       0,   281,   282,   283,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   284,     0,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     800,   306,   281,   282,   283,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   284,   928,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   989,   306,   281,   282,   283,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   284,
       0,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,  1138,   306,   281,   282,   283,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     284,     0,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,     0,   306,  1139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   281,   282,   283,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   284,   929,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,     0,   306,   281,   282,
     283,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   284,   376,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,     0,   306,   281,
     282,   283,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   284,   378,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,     0,   306,
     281,   282,   283,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   284,     0,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   390,
     306,   566,   567,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   281,   282,   283,     0,     0,    29,    30,
      31,     0,     0,     0,     0,     0,     0,     0,    35,   284,
     392,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,     0,   306,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     528,     0,     0,   568,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,     0,   569,     0,     0,     0,     0,
     140,    71,    72,    73,     0,   570,     0,    76,    77,     0,
      78,    79,    80,     0,     0,    82,     0,     0,     0,     0,
       0,   543,   281,   282,   283,   571,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   602,     0,   284,     0,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,     0,   306,   281,   282,   283,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   284,
       0,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,     0,   306,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   281,   282,
     283,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   284,   647,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,     0,   306,   281,
     282,   283,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   284,   852,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   284,   306,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,     0,   306,   281,   282,   283,     0,     0,     0,     0,
       0,   896,     0,     0,     0,     0,     0,     0,     0,   284,
     552,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,     0,   306,   282,   283,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   284,
       0,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   283,   306,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   284,     0,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
     306,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,     0,   306,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,     0,   306
};

static const yytype_int16 yycheck[] =
{
       2,     2,    81,   142,    28,   271,   766,     2,     2,   336,
       2,   729,   127,   341,    38,   792,   174,   316,    42,   796,
     134,   874,   874,   418,   306,   551,   949,   106,   180,   356,
     268,   871,   180,   738,   430,    86,   733,     8,    51,    61,
       2,     8,    44,   438,    26,    47,    61,     8,   206,     8,
       8,   769,     8,     8,     8,     8,     8,    70,     8,    61,
      73,     8,     8,     8,     8,     8,   181,    73,    61,     8,
      61,    46,    78,    13,   779,   998,     8,    26,     8,    81,
     200,   201,    61,    85,     8,   205,   225,     8,     8,     2,
     147,    90,     8,    55,    78,    61,     8,     8,   557,    29,
      78,   496,   639,    26,   106,   121,   309,    90,    73,   121,
      23,    24,   162,   121,   165,   172,    93,    94,     0,   169,
      61,    25,   173,   171,   172,   140,    41,    61,   121,   169,
     333,   212,   138,   139,   337,    41,    23,    24,    42,    26,
     121,    45,   121,   169,   984,   144,   843,   169,   268,   151,
     172,    90,    61,   137,   170,   169,    61,   172,   170,   137,
      61,   144,   124,    61,    61,   173,    61,   562,    61,    61,
      61,   146,   178,    86,   172,   314,   138,    61,   169,   172,
     121,   172,   169,   901,   186,   186,   161,   189,   189,   170,
     895,   193,   729,   172,   899,   274,   173,   311,   200,   201,
      73,   214,   173,   205,   171,   172,   172,   209,   163,   174,
     171,   163,   171,   171,   751,   171,   330,   171,   171,   615,
     170,   379,   162,   172,   171,   171,   171,   171,   171,  1152,
     243,  1008,   769,  1010,   313,  1012,   315,   351,   172,   171,
     170,   355,   157,   702,   358,   704,   170,   102,   171,   170,
     170,   157,   165,   950,   170,   170,   258,    73,   170,   170,
     173,    46,   382,   172,   170,   267,   268,   172,   117,   271,
     598,   172,   274,   186,   172,   172,   189,   172,   165,   172,
     172,   172,   808,   364,   679,   117,   173,   146,   172,   441,
     169,    93,    94,   441,    73,    31,   258,   348,   169,    78,
    1005,   174,    31,   169,   159,    13,   219,   169,   845,   311,
     312,   313,    31,   315,   227,   228,   229,   169,    26,   169,
     440,   234,   169,    71,   306,   652,   564,   240,   330,   311,
      31,   169,   219,   169,   661,    43,    26,    73,   144,   497,
     227,   228,   229,   172,    73,   258,    73,   234,   330,   351,
      73,    78,   889,   240,    73,    78,   358,   144,   174,   138,
     139,   146,   520,   900,   901,   171,   172,   369,   369,   351,
    1293,   173,    73,   355,    73,   657,   358,   535,   169,  1302,
     382,   394,   534,    31,   536,   171,   534,    73,   536,   391,
    1183,  1184,    78,   141,   396,    71,   144,    73,   177,    98,
     148,   149,    71,   151,   152,   153,  1259,  1259,   410,   147,
     137,   138,   139,   171,   572,   138,   139,   419,   420,   306,
      25,   536,   160,   502,   171,   173,   140,    71,   341,   391,
    1207,  1208,    61,   828,   172,   348,   831,    42,   440,  1279,
      45,   836,    61,   742,   564,   565,    66,    67,   162,   776,
      61,   137,   138,   139,   341,    73,   369,   784,   172,    71,
      78,   348,   999,    66,    67,  1002,   172,   548,   140,    71,
      61,    73,   148,   149,   169,   151,   152,   153,   391,   148,
     149,   169,   151,   152,   153,  1245,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   174,    98,
     502,    73,   415,   388,   148,   149,   169,   151,   152,   153,
    1179,  1180,   632,   627,   909,    71,   401,   144,   913,   847,
     138,   139,    40,   547,    71,   169,    49,   529,   415,   531,
      25,   162,    59,    60,   146,   121,   148,   149,   150,   151,
     152,   153,   544,   456,   140,  1263,   148,   149,   140,   151,
     152,   153,   554,   555,   555,    71,    51,   169,    73,   886,
     140,   140,   564,   565,  1282,   137,   138,   139,   169,   456,
     172,   121,   174,   171,   162,    73,    71,   904,    13,   581,
      78,    13,   544,    45,    46,    47,   706,    49,   708,   855,
     171,   504,   148,   149,   121,   151,   152,   153,   169,   146,
     758,   148,   149,    98,   151,   152,   153,    92,    93,    94,
     166,   170,   614,   614,   162,    79,  1153,   504,   699,   614,
     614,   170,   614,   138,   139,   627,    13,   170,   144,   124,
     632,   544,   148,   149,   175,   151,   152,   153,   169,   552,
     138,   139,   555,   170,   169,   627,     8,    71,   768,    73,
      74,   146,   614,   148,   149,   169,   151,   152,   153,    71,
     170,    73,   170,   990,   688,   552,   668,   669,   553,    82,
       8,   166,   171,    13,   169,   657,   589,    92,    93,    94,
      79,   566,   567,   169,     8,   598,   599,   689,   689,   169,
     692,    71,   106,   107,   108,   109,   110,   111,    90,    91,
      92,   614,   589,   823,   706,    71,   708,    73,    73,   119,
     171,   598,   599,   169,     8,   981,   170,    61,   720,   172,
     722,   161,   122,     8,   148,   149,  1263,   151,   152,   153,
     692,   733,   734,   170,    61,     8,   148,   149,    13,   151,
     152,   153,   170,   119,     8,  1282,   176,   176,   750,   750,
     173,   871,   169,   638,   176,   750,   750,   171,   750,   170,
     172,   169,   174,   170,   144,   171,   768,   176,   148,   149,
     657,   151,   152,   153,   171,   122,   689,   801,     8,   692,
     170,   694,   148,   149,   169,   151,   152,   153,   750,   140,
     792,   169,   172,   172,   796,   140,    23,    24,    98,    26,
     102,    13,   804,   804,   171,   163,   172,   694,   174,   109,
     110,   813,    71,  1140,   934,   172,    13,   117,   118,    79,
     176,   823,    13,    69,    70,    71,   172,   169,   171,   120,
     743,    25,   745,   718,   169,   916,   169,   750,   723,   978,
      25,   843,    13,   169,   169,   730,     8,   170,   761,   930,
     171,   813,   171,   855,   154,   122,   743,    51,   745,    13,
       8,   170,   170,   137,   866,    79,    51,   948,   169,   871,
     159,     8,   992,   169,   761,   995,   169,    71,   122,     8,
     170,   137,   141,   170,   172,   144,    71,   146,   172,   148,
     149,   804,   151,   152,   153,    79,    71,   810,   169,   140,
     813,   169,   148,   149,    98,   151,   152,   153,   870,   170,
      26,    68,   106,   107,   108,   109,   110,   111,   171,   170,
     163,   162,   171,   810,    26,   170,   122,   812,   169,     8,
     124,   172,   934,   122,   847,  1016,     8,   170,   165,   124,
     115,   122,  1023,     8,   173,   173,   173,     8,   950,   172,
     170,   150,   146,   169,   148,   149,    26,   151,   152,   153,
     847,   146,   170,   148,   149,   967,   151,   152,   153,   170,
     172,   973,   166,   148,   149,   169,   151,   152,   153,   981,
     170,   166,   122,   170,   169,     8,   122,   170,     8,    26,
     992,   171,   219,   995,   169,   171,  1135,   170,    79,   171,
     227,   228,   229,    13,    73,   172,  1008,   234,  1010,    73,
    1012,   171,   237,   240,   146,  1017,   241,   169,  1020,  1020,
     170,   983,  1024,    42,    43,    44,    45,    46,    47,   104,
      49,  1033,    73,    13,    79,   260,   170,   262,   263,   264,
     265,    13,   955,   106,   107,   108,   109,   110,   111,   170,
     935,   170,   937,  1132,   939,  1017,   122,   170,   943,   170,
     945,    13,  1024,   122,   122,     9,    10,    11,   955,    23,
      24,  1033,    26,   169,   172,    13,    41,   172,   122,   306,
    1161,    25,   122,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,  1017,    49,    51,  1020,    13,    73,
     172,  1024,   172,   169,   341,   170,  1195,    73,  1199,   172,
    1033,   348,    90,  1204,   140,   153,    29,    90,  1209,    13,
    1132,   169,    73,     8,    99,  1216,  1217,    13,   171,   104,
     170,   106,   107,   108,   109,   110,   111,   112,   155,   171,
      73,    73,   170,  1038,   171,   170,   169,  1159,  1160,  1160,
      71,   388,  1164,   172,   170,  1289,   315,   312,   394,   313,
    1251,   124,  1174,   656,   401,   781,   653,  1179,  1180,  1290,
     810,  1183,  1184,   148,   149,   927,   151,   771,   415,   399,
    1043,   866,  1121,  1195,    36,  1308,  1133,  1159,    86,  1034,
     752,   112,  1164,   669,   782,  1207,  1208,   681,   173,   889,
    1212,   165,   709,   124,   228,   734,    -1,   995,    -1,   173,
      -1,    -1,    -1,    -1,    -1,  1306,    -1,    -1,    -1,   456,
     141,    -1,   176,   144,  1315,   146,    -1,   148,   149,    -1,
     151,   152,   153,    -1,  1246,    -1,  1159,  1160,  1250,    -1,
    1212,  1164,  1254,    -1,  1256,  1257,  1258,    -1,    -1,    -1,
      -1,    -1,    -1,  1148,    -1,   219,    -1,    -1,    -1,    -1,
    1272,    -1,    -1,   227,   228,   229,  1278,   504,    -1,    -1,
     234,  1166,  1167,  1168,  1246,    -1,   240,    -1,  1250,  1174,
      -1,    -1,  1254,  1178,  1256,  1257,    25,    -1,    -1,  1212,
      -1,    -1,    -1,    -1,  1189,    -1,    -1,    -1,  1310,  1194,
    1272,    -1,    -1,    -1,  1316,    -1,    -1,  1202,    -1,    -1,
      -1,    -1,    51,    -1,    -1,   552,   553,    -1,    -1,    -1,
      -1,    -1,    -1,  1246,    -1,    -1,    -1,  1250,    -1,   566,
     567,  1254,    71,  1256,  1257,    -1,    -1,    -1,  1310,    -1,
      -1,    -1,   306,    -1,  1316,    -1,    -1,    -1,    -1,  1272,
      -1,    -1,   589,  1248,    -1,    -1,    -1,    -1,    -1,   596,
      -1,   598,   599,    -1,    -1,    -1,    -1,  1262,    -1,    -1,
      -1,    -1,    -1,    -1,  1269,    -1,    -1,   341,    -1,    -1,
      -1,    -1,    -1,    -1,   348,   124,    -1,  1310,    -1,    25,
      -1,    -1,    -1,  1316,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   638,    -1,    -1,   641,    -1,    -1,   146,    -1,   148,
     149,    -1,   151,   152,   153,    51,    -1,    -1,   157,    -1,
     657,    -1,    -1,    -1,   388,    -1,    -1,   166,    -1,    -1,
     169,    -1,    -1,    -1,    -1,    71,    -1,   401,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   415,    -1,    -1,    -1,    -1,    25,   694,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,   718,    -1,    -1,    -1,    -1,   723,    -1,   124,    -1,
      -1,    -1,   456,   730,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   743,    49,   745,    -1,
     146,    -1,   148,   149,    -1,   151,   152,   153,    -1,    -1,
      -1,   157,    -1,    -1,   761,     9,    10,    11,    -1,    -1,
     166,    -1,    -1,   169,   771,    -1,    -1,    -1,    -1,    -1,
     504,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   810,    -1,   812,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   552,   553,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     837,    -1,   566,   567,   173,    -1,    -1,   844,    -1,    -1,
     847,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,   856,
      -1,    -1,     9,    10,    11,   589,   388,   864,    -1,    -1,
      -1,    -1,   596,    -1,   598,   599,    -1,    -1,    25,   401,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    99,    -1,    -1,   638,    -1,   104,   641,   106,   107,
     108,   109,   110,   111,   112,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,   657,    -1,    -1,    -1,    -1,   935,    -1,
     937,    -1,   939,    -1,    -1,    -1,   943,    -1,   945,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   955,    -1,
     148,   149,    -1,   151,    99,    -1,    -1,    -1,    -1,   104,
     694,   106,   107,   108,   109,   110,   111,   112,   388,    -1,
      -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,    -1,
      -1,   401,    -1,    -1,   718,    42,    43,    -1,    -1,   723,
      -1,    -1,    -1,    -1,    -1,    -1,   730,    -1,    -1,    -1,
      -1,    -1,    -1,   148,   149,    -1,   151,    -1,    -1,   743,
      -1,   745,    69,    70,    71,    -1,   173,    -1,    -1,    -1,
      -1,   553,    79,    -1,    -1,    -1,    -1,   761,   173,    -1,
      -1,  1038,  1039,    -1,   566,   567,  1043,   771,    -1,    -1,
      -1,    -1,     4,     5,    -1,     7,     8,     9,    -1,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    71,   810,    73,   812,   136,
      -1,    43,    -1,    45,    -1,    -1,    48,    -1,    50,    -1,
      -1,   148,   149,    -1,   151,   152,   153,    -1,    -1,    -1,
      -1,    -1,    -1,   837,    -1,    -1,   638,    -1,    -1,   166,
     844,    -1,    74,   847,    -1,   111,    -1,    -1,    -1,    -1,
      -1,    -1,   856,    -1,    86,    -1,    -1,    -1,    -1,   401,
     864,    -1,    31,   553,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1148,    -1,    -1,    -1,   141,   566,   567,   144,    -1,
     146,    -1,   148,   149,    -1,   151,   152,   153,    -1,  1166,
    1167,  1168,    -1,    -1,    -1,    -1,    -1,  1174,    -1,    -1,
      -1,  1178,    71,   169,    73,    -1,   172,    -1,   174,    -1,
      -1,    -1,  1189,    -1,   146,    -1,   718,  1194,    -1,    -1,
      -1,   723,    -1,    -1,    -1,  1202,    -1,    -1,   730,    -1,
      -1,   935,    -1,   937,    -1,   939,    -1,    -1,    -1,   943,
      -1,   945,   111,    -1,    -1,    -1,    -1,    -1,   638,    -1,
     182,   955,    -1,   185,    -1,    -1,    -1,    -1,    -1,   191,
     192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1248,   141,    -1,    -1,   144,    -1,   146,    -1,   148,
     149,    -1,   151,   152,   153,  1262,    -1,    -1,    -1,    -1,
      -1,    -1,  1269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     169,    -1,    -1,   235,    -1,   174,    -1,   239,    -1,    -1,
     812,   553,    -1,  1290,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   566,   567,  1303,   259,   718,    -1,
      -1,    -1,    -1,   723,  1038,  1039,    -1,    -1,   270,  1043,
     730,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,    -1,    -1,   308,   309,   310,    71,
      -1,    73,    -1,    -1,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   638,    -1,    -1,    -1,
      -1,   333,   334,    -1,   336,   337,   338,    -1,    -1,    -1,
      -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   812,    -1,   356,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,   935,   366,   937,    -1,   939,    -1,    -1,
      -1,   943,    -1,   945,  1148,    -1,    -1,    -1,    -1,   141,
      -1,    -1,   144,    -1,   146,    -1,   148,   149,    -1,   151,
     152,   153,  1166,  1167,  1168,   397,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1178,    -1,   718,   169,    -1,    -1,
      -1,   723,   174,    -1,    -1,  1189,    63,    -1,   730,    -1,
    1194,     9,    10,    11,    71,    -1,    73,    -1,  1202,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,   111,   467,  1038,    -1,    -1,    -1,
    1042,    -1,    -1,    -1,  1248,   935,    -1,   937,    -1,   939,
      -1,    -1,    -1,   943,    -1,   945,    -1,    -1,  1262,    -1,
      -1,    -1,    -1,    -1,   141,  1269,    -1,   144,    -1,   146,
     812,   148,   149,   505,   151,   152,   153,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1290,   519,    -1,    -1,
      -1,    -1,   169,    -1,    -1,    -1,    -1,   174,    -1,  1303,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,   540,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   551,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,  1148,    -1,  1038,    -1,
      -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1166,  1167,  1168,    -1,    -1,    -1,
     602,    -1,   604,    41,    -1,    -1,  1178,    -1,    -1,   611,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1189,    -1,    -1,
     622,    -1,  1194,   935,    -1,   937,    -1,   939,    -1,    -1,
    1202,   943,    -1,   945,   636,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   644,    -1,    -1,   647,    -1,   649,    -1,    -1,
     652,    -1,  1224,    -1,    41,    -1,    -1,    -1,    -1,   661,
      -1,    99,    -1,    -1,    -1,    -1,   104,    -1,   106,   107,
     108,   109,   110,   111,   112,    -1,  1248,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1148,    -1,
    1262,    -1,    69,    70,    -1,    -1,   173,  1269,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,  1166,  1167,  1168,    -1,
     148,   149,    99,   151,    -1,    -1,    -1,   104,  1178,   106,
     107,   108,   109,   110,   111,   112,  1038,    -1,    -1,  1189,
      -1,    -1,    -1,    -1,  1194,   173,    -1,    -1,    -1,    -1,
     742,    -1,  1202,    -1,    -1,    -1,    -1,    -1,   125,   126,
     127,   128,   129,    -1,    -1,   757,    -1,    -1,    -1,   136,
      -1,   148,   149,    63,   151,   142,   143,    -1,    -1,    -1,
      -1,    71,    -1,    73,   776,    -1,    -1,    -1,    -1,   156,
      -1,    -1,   784,    -1,   786,    -1,   173,    -1,  1248,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,  1262,    -1,    -1,    -1,   808,    -1,    -1,  1269,
      -1,   111,    -1,    25,   816,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,  1148,    49,    -1,    -1,
      -1,   141,    -1,    -1,   144,    -1,   146,    -1,   148,   149,
     852,   151,   152,   153,  1166,  1167,  1168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1178,    -1,    -1,   169,
      -1,    -1,    -1,    -1,   174,   877,    -1,  1189,    -1,   881,
      -1,   883,  1194,    -1,   886,    -1,    -1,    -1,    -1,    -1,
    1202,    -1,    -1,    -1,   896,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   904,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1248,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1262,    41,    42,    43,    -1,    -1,    -1,  1269,    48,   171,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    75,    -1,    -1,   990,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,   101,    -1,   103,   104,   105,    -1,    -1,    -1,   109,
     110,   111,    -1,   113,   114,   115,   116,   117,   118,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,   145,   146,    -1,   148,   149,
      -1,   151,   152,   153,   154,    -1,   156,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    -1,   166,   167,    -1,   169,
      -1,   171,   172,   173,   174,   175,    -1,   177,   178,     9,
      10,    11,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,  1140,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
     101,    -1,   103,   104,   105,    -1,    -1,    -1,   109,   110,
     111,    -1,   113,   114,   115,   116,   117,   118,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,   146,    -1,   148,   149,    -1,
     151,   152,   153,   154,    -1,   156,    -1,    -1,    -1,   160,
       3,     4,     5,     6,     7,   166,   167,    -1,   169,    12,
     171,   172,   173,   174,   175,    -1,   177,   178,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,   105,    -1,    -1,    -1,   109,   110,   111,    -1,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,   146,    -1,   148,   149,    -1,   151,   152,
     153,   154,    -1,   156,    -1,    -1,    -1,   160,     3,     4,
       5,     6,     7,   166,   167,    -1,   169,    12,   171,   172,
      -1,   174,   175,    -1,   177,   178,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
     105,    -1,    -1,    -1,   109,   110,   111,    -1,   113,   114,
     115,    -1,   117,   118,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,   146,    -1,   148,   149,    -1,   151,   152,   153,   154,
      -1,   156,    -1,    -1,    -1,   160,     3,     4,     5,     6,
       7,   166,    -1,    -1,   169,    12,   171,   172,   173,   174,
     175,    -1,   177,   178,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,
      -1,    -1,   109,   110,   111,    -1,   113,   114,   115,    -1,
     117,   118,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,   146,
      -1,   148,   149,    -1,   151,   152,   153,   154,    -1,   156,
      -1,    -1,    -1,   160,     3,     4,     5,     6,     7,   166,
      -1,    -1,   169,    12,   171,   172,   173,   174,   175,    -1,
     177,   178,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,
     109,   110,   111,    -1,   113,   114,   115,    -1,   117,   118,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,   146,    -1,   148,
     149,    -1,   151,   152,   153,   154,    -1,   156,    -1,    -1,
      -1,   160,     3,     4,     5,     6,     7,   166,    -1,    -1,
     169,    12,   171,   172,    -1,   174,   175,    -1,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    89,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,   105,    -1,    -1,    -1,   109,   110,
     111,    -1,   113,   114,   115,    -1,   117,   118,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,   146,    -1,   148,   149,    -1,
     151,   152,   153,   154,    -1,   156,    -1,    -1,    -1,   160,
       3,     4,     5,     6,     7,   166,    -1,    -1,   169,    12,
     171,   172,    -1,   174,   175,    -1,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
     103,    -1,   105,    -1,    -1,    -1,   109,   110,   111,    -1,
     113,   114,   115,    -1,   117,   118,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,   146,    -1,   148,   149,    -1,   151,   152,
     153,   154,    -1,   156,    -1,    -1,    -1,   160,     3,     4,
       5,     6,     7,   166,    -1,    -1,   169,    12,   171,   172,
     173,   174,   175,    -1,   177,   178,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    87,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
     105,    -1,    -1,    -1,   109,   110,   111,    -1,   113,   114,
     115,    -1,   117,   118,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,   146,    -1,   148,   149,    -1,   151,   152,   153,   154,
      -1,   156,    -1,    -1,    -1,   160,     3,     4,     5,     6,
       7,   166,    -1,    -1,   169,    12,   171,   172,    -1,   174,
     175,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,
      -1,    -1,   109,   110,   111,    -1,   113,   114,   115,    -1,
     117,   118,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,   146,
      -1,   148,   149,    -1,   151,   152,   153,   154,    -1,   156,
      -1,    -1,    -1,   160,     3,     4,     5,     6,     7,   166,
      -1,    -1,   169,    12,   171,   172,   173,   174,   175,    -1,
     177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,
     109,   110,   111,    -1,   113,   114,   115,    -1,   117,   118,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,   146,    -1,   148,
     149,    -1,   151,   152,   153,   154,    -1,   156,    -1,    -1,
      -1,   160,     3,     4,     5,     6,     7,   166,    -1,    -1,
     169,    12,   171,   172,   173,   174,   175,    -1,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    85,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,   105,    -1,    -1,    -1,   109,   110,
     111,    -1,   113,   114,   115,    -1,   117,   118,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,   146,    -1,   148,   149,    -1,
     151,   152,   153,   154,    -1,   156,    -1,    -1,    -1,   160,
       3,     4,     5,     6,     7,   166,    -1,    -1,   169,    12,
     171,   172,    -1,   174,   175,    -1,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
     103,    -1,   105,    -1,    -1,    -1,   109,   110,   111,    -1,
     113,   114,   115,    -1,   117,   118,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,   146,    -1,   148,   149,    -1,   151,   152,
     153,   154,    -1,   156,    -1,    -1,    -1,   160,     3,     4,
       5,     6,     7,   166,    -1,    -1,   169,    12,   171,   172,
     173,   174,   175,    -1,   177,   178,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
     105,    -1,    -1,    -1,   109,   110,   111,    -1,   113,   114,
     115,    -1,   117,   118,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,   146,    -1,   148,   149,    -1,   151,   152,   153,   154,
      -1,   156,    -1,    -1,    -1,   160,     3,     4,     5,     6,
       7,   166,    -1,    -1,   169,    12,   171,   172,   173,   174,
     175,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,
      -1,    -1,   109,   110,   111,    -1,   113,   114,   115,    -1,
     117,   118,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,   146,
      -1,   148,   149,    -1,   151,   152,   153,   154,    -1,   156,
      -1,    -1,    -1,   160,     3,     4,     5,     6,     7,   166,
      -1,    -1,   169,    12,   171,   172,   173,   174,   175,    -1,
     177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,
     109,   110,   111,    -1,   113,   114,   115,    -1,   117,   118,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,   146,    -1,   148,
     149,    -1,   151,   152,   153,   154,    -1,   156,    -1,    -1,
      -1,   160,     3,     4,     5,     6,     7,   166,    -1,    -1,
     169,    12,   171,   172,   173,   174,   175,    -1,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,   105,    -1,    -1,    -1,   109,   110,
     111,    -1,   113,   114,   115,    -1,   117,   118,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,   146,    -1,   148,   149,    -1,
     151,   152,   153,   154,    -1,   156,    -1,    -1,    -1,   160,
       3,     4,     5,     6,     7,   166,    -1,    -1,   169,    12,
     171,   172,   173,   174,   175,    -1,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
     103,    -1,   105,    -1,    -1,    -1,   109,   110,   111,    -1,
     113,   114,   115,    -1,   117,   118,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,   146,    -1,   148,   149,    -1,   151,   152,
     153,   154,    -1,   156,    -1,    -1,    -1,   160,     3,     4,
       5,     6,     7,   166,    -1,    -1,   169,    12,   171,   172,
      -1,   174,   175,    -1,   177,   178,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    59,    60,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
     105,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,   121,    -1,    -1,   141,   142,   143,   144,
     145,   146,    -1,   148,   149,    -1,   151,   152,   153,    -1,
      -1,   156,    -1,    -1,    -1,   160,     3,     4,     5,     6,
       7,   166,    -1,    -1,   169,    12,   171,   172,    -1,   174,
     175,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    59,
      60,    -1,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,
      -1,    -1,    -1,    -1,   111,    -1,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,   121,    -1,    -1,   141,   142,   143,   144,   145,   146,
      -1,   148,   149,    -1,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,    -1,   160,     3,     4,     5,     6,     7,   166,
      -1,    -1,   169,    12,   171,   172,    -1,   174,   175,    -1,
     177,   178,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,
      -1,    -1,   111,    -1,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,   145,   146,    -1,   148,
     149,    -1,   151,   152,   153,    -1,    -1,   156,    -1,    -1,
      -1,   160,     3,     4,     5,     6,     7,   166,    -1,    -1,
     169,    12,   171,   172,    -1,   174,   175,    -1,   177,   178,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,   105,    -1,    -1,    -1,    -1,    -1,
     111,    -1,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,   145,   146,    -1,   148,   149,    -1,
     151,   152,   153,    -1,    -1,   156,    -1,    -1,    -1,   160,
       3,     4,     5,     6,     7,   166,    -1,    -1,   169,    12,
     171,   172,    -1,   174,   175,    -1,   177,   178,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
     103,    -1,   105,    -1,    -1,    -1,    -1,    -1,   111,    -1,
     113,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,   146,    -1,   148,   149,    -1,   151,   152,
     153,    -1,    -1,   156,    -1,    -1,    -1,   160,     3,     4,
       5,     6,     7,   166,    -1,    -1,   169,    12,   171,   172,
      -1,   174,   175,    -1,   177,   178,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
     105,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,   146,    -1,   148,   149,    -1,   151,   152,   153,    -1,
      -1,   156,    -1,    -1,    -1,   160,     3,     4,     5,     6,
       7,   166,    -1,    -1,   169,    12,   171,   172,    -1,   174,
     175,    -1,   177,   178,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    99,    -1,    -1,    -1,    -1,   104,
      -1,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,   148,   149,    -1,   151,    -1,    -1,   136,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,   145,   146,
      -1,   148,   149,    -1,   151,   152,   153,    -1,   173,   156,
      -1,    -1,    -1,   160,     3,     4,     5,     6,     7,   166,
      -1,    -1,   169,    12,    -1,    -1,    -1,   174,   175,    -1,
     177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,    -1,   146,    -1,   148,
     149,    -1,   151,   152,   153,    -1,    -1,   156,    -1,    -1,
      -1,   160,     3,     4,     5,     6,     7,   166,    -1,    -1,
     169,    12,   171,    -1,    -1,   174,   175,    -1,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,   146,    -1,   148,   149,    -1,
     151,   152,   153,    -1,    -1,   156,    -1,    -1,    -1,   160,
       3,     4,     5,     6,     7,   166,    -1,    -1,   169,    12,
     171,    -1,    -1,   174,   175,    -1,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,   146,    -1,   148,   149,    -1,   151,   152,
     153,    -1,    -1,   156,    -1,    -1,    -1,   160,     3,     4,
       5,     6,     7,   166,    -1,    -1,   169,    12,   171,    -1,
      -1,   174,   175,    -1,   177,   178,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
      -1,   146,    -1,   148,   149,    -1,   151,   152,   153,    -1,
      -1,   156,    -1,    -1,    -1,   160,     3,     4,     5,     6,
       7,   166,    -1,    -1,   169,    12,    -1,    -1,    -1,   174,
     175,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    71,    -1,    73,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,   146,
      -1,   148,   149,    -1,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,   111,   160,    -1,    -1,    -1,    -1,    -1,   166,
      -1,    -1,   169,   170,   123,    -1,    -1,   174,   175,    -1,
     177,   178,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,   141,    -1,    -1,   144,    -1,   146,    -1,   148,
     149,    -1,   151,   152,   153,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     169,    42,    43,    -1,    -1,   174,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,   146,    -1,   148,   149,    -1,
     151,   152,   153,    -1,    -1,   156,    -1,    -1,    -1,   160,
       3,     4,     5,     6,     7,   166,    -1,    -1,   169,    12,
      -1,    -1,    -1,   174,   175,    -1,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,   146,    -1,   148,   149,    -1,   151,   152,
     153,    -1,    -1,   156,    -1,    -1,    -1,   160,     3,     4,
       5,     6,     7,   166,    -1,    -1,   169,    12,    -1,    -1,
      -1,   174,   175,    -1,   177,   178,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
      -1,   146,    -1,   148,   149,    -1,   151,   152,   153,    -1,
      -1,   156,    -1,    -1,    -1,   160,     3,     4,     5,     6,
       7,   166,    -1,    -1,   169,    12,    -1,    -1,    -1,   174,
     175,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,   146,
      -1,   148,   149,    -1,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,    -1,   160,     3,     4,     5,     6,     7,   166,
      -1,    -1,   169,    12,    -1,    -1,    -1,   174,   175,    -1,
     177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,    -1,   146,    -1,   148,
     149,    -1,   151,   152,   153,    -1,    -1,   156,    -1,    -1,
      -1,   160,     3,     4,     5,     6,     7,   166,    -1,    -1,
     169,    12,    -1,    -1,    -1,   174,   175,    -1,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,   146,    -1,   148,   149,    -1,
     151,   152,   153,    -1,    -1,   156,    -1,    -1,    -1,   160,
       3,     4,     5,     6,     7,   166,    -1,    -1,   169,    12,
      -1,    -1,    -1,   174,   175,    -1,   177,   178,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,   146,    -1,   148,   149,    -1,   151,   152,
     153,    -1,    -1,   156,    -1,    -1,    -1,   160,     3,     4,
       5,     6,     7,   166,    -1,    -1,   169,    12,    -1,    -1,
      -1,   174,   175,    -1,   177,   178,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
     145,   146,    -1,   148,   149,    -1,   151,   152,   153,    -1,
      -1,   156,    -1,    -1,    -1,   160,     3,     4,     5,     6,
       7,   166,    -1,    -1,   169,    12,    -1,    -1,    -1,   174,
     175,    -1,   177,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,   146,
      -1,   148,   149,    -1,   151,   152,   153,    -1,    -1,   156,
      -1,    -1,    -1,   160,     3,     4,     5,     6,     7,   166,
      -1,    -1,   169,    12,    -1,    -1,    -1,   174,   175,    -1,
     177,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,    -1,   146,    -1,   148,
     149,    -1,   151,   152,   153,    -1,    -1,   156,    -1,    -1,
      -1,   160,     3,     4,     5,     6,     7,   166,    -1,    -1,
     169,    12,    -1,    -1,    -1,   174,   175,    -1,   177,   178,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    71,    -1,
      73,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    71,    -1,    73,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,   146,    -1,   148,   149,    -1,
     151,   152,   153,    -1,    -1,   156,    -1,    -1,   111,   160,
      -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,   169,    -1,
      -1,   111,    -1,   174,   175,    -1,   177,   178,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,   141,    -1,
      -1,   144,    -1,   146,    -1,   148,   149,    -1,   151,   152,
     153,   141,    -1,    -1,   144,    -1,   146,    -1,   148,   149,
      -1,   151,   152,   153,    -1,    -1,   169,    -1,    -1,    -1,
      -1,   174,    -1,    -1,    49,    -1,    -1,    -1,    -1,   169,
      -1,    -1,    -1,    -1,   174,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,
     145,    -1,    -1,   148,   149,    -1,   151,   152,   153,   154,
      -1,   156,    -1,    -1,   159,     9,    10,    11,    -1,    -1,
      -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,   173,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     173,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   173,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,   173,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,   173,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   171,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   171,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   171,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   171,
      49,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    25,
     171,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,   146,    -1,   148,   149,    -1,
     151,   152,   153,    -1,    -1,   156,    -1,    -1,    -1,    -1,
      -1,   170,     9,    10,    11,   166,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   122,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   122,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    25,    49,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      90,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    11,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   180,   181,     0,     3,     4,     5,     6,     7,    12,
      41,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    62,    63,    64,    65,    69,
      70,    71,    72,    73,    75,    79,    80,    81,    82,    84,
      86,    88,    91,    95,    96,    97,    98,    99,   100,   101,
     103,   104,   105,   109,   110,   111,   113,   114,   115,   116,
     117,   118,   123,   124,   125,   126,   127,   128,   129,   136,
     141,   142,   143,   144,   145,   146,   148,   149,   151,   152,
     153,   154,   156,   160,   166,   167,   169,   171,   172,   174,
     175,   177,   178,   182,   185,   188,   189,   190,   191,   192,
     193,   196,   207,   208,   211,   216,   222,   278,   282,   283,
     284,   285,   286,   293,   294,   295,   297,   298,   301,   311,
     312,   313,   318,   321,   339,   344,   346,   347,   348,   349,
     350,   351,   352,   353,   355,   368,   370,   371,   111,   123,
     141,   185,   207,   285,   346,   285,   169,   285,   285,   285,
     337,   338,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   111,   169,   189,   312,   313,   346,
     346,   285,   111,   169,   189,   312,   313,   314,   345,   351,
     356,   357,   169,   279,   315,   169,   279,   280,   285,   198,
     279,   169,   169,   169,   279,   171,   285,   185,   171,   285,
      25,    51,   124,   146,   166,   169,   185,   372,   382,   383,
     171,   285,   172,   285,   144,   186,   187,   188,    73,   174,
     246,   247,   117,   117,    73,   207,   248,   169,   169,   169,
     169,   185,   220,   373,   169,   169,    73,    78,   137,   138,
     139,   365,   366,   144,   172,   188,   188,    95,   285,   221,
     373,   146,   169,   185,   278,   285,   286,   346,   194,   172,
      78,   316,   365,    78,   365,   365,    26,   144,   162,   374,
     169,     8,   171,    31,   206,   146,   219,   373,   171,   171,
     171,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   171,    61,    61,
     172,   140,   118,   154,   207,   222,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    59,    60,
     121,   341,   342,    61,   172,   343,   169,    61,   172,   174,
     352,   169,   206,    13,   285,    40,   185,   336,   169,   278,
     346,   140,   278,   346,   374,   140,   169,   317,   121,   341,
     342,   343,   170,   285,    26,   196,     8,   171,   196,   197,
     280,   281,   285,   185,   234,   200,   171,   171,   171,   185,
     383,   383,   162,   169,    98,   375,   383,   374,    13,   185,
     171,   194,   171,   188,     8,   171,    90,   172,   346,     8,
     171,    13,   206,     8,   171,   346,   369,   369,   346,   170,
     162,   214,   123,   346,   358,    31,   285,   359,   360,    61,
     121,   137,   366,    72,   285,   346,    78,   137,   366,   188,
     184,   171,   172,   171,   217,   302,   304,    79,   289,   291,
      13,   170,   170,   170,   173,   195,   196,   208,   211,   216,
     285,   175,   177,   178,   185,   375,    31,   244,   245,   285,
     372,   169,   373,   212,   285,   285,   285,    26,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     314,   285,   354,   354,   285,   361,   362,   185,   351,   352,
     220,   221,   206,   219,    31,   145,   282,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   172,
     185,   351,   354,   285,   244,   354,   285,   358,   170,   169,
     335,     8,   323,   278,   170,   185,   170,   170,   351,   244,
     172,   185,   351,   170,   194,   238,   285,    82,    26,   196,
     232,   171,    90,    13,     8,   170,    26,   172,   235,   383,
      79,   379,   380,   381,   169,     8,    42,    43,   124,   136,
     146,   166,   189,   190,   192,   296,   312,   318,   319,   320,
     173,    90,   187,   185,   285,   247,   319,   169,    73,     8,
     170,   170,   170,   171,   185,   378,   119,   225,   169,     8,
     170,   346,   122,   170,     8,   323,    73,    74,   185,   367,
     185,    61,   173,   173,   181,   183,   172,   161,    46,   146,
     161,   306,   122,     8,   323,   170,   383,   121,   341,   342,
     343,   173,     8,   163,   346,   170,     8,   324,    13,   287,
     209,   119,   223,   285,    26,   176,   176,   122,   173,     8,
     323,   374,   169,   215,   218,   373,   213,    63,   346,   285,
     374,   169,   176,   173,   170,   176,   173,   170,    42,    43,
      69,    70,    79,   124,   136,   166,   185,   326,   328,   331,
     334,   185,   341,   342,   343,   170,   285,   239,    66,    67,
     240,   279,   194,   281,    31,   229,   346,   319,   185,    26,
     196,   233,   171,   236,   171,   236,     8,   163,   122,     8,
     323,   170,   157,   375,   376,   383,   319,   319,   169,    78,
     140,   169,   140,   172,   102,   203,   204,   185,   173,   288,
      13,   346,   171,     8,    90,   163,   226,   312,   172,   358,
     123,   346,    13,    31,   285,    31,   285,   176,   285,   173,
     181,   249,   305,    13,   285,    79,   171,   172,   185,   351,
     383,    31,   285,   319,   157,   242,   243,   339,   340,   169,
     312,   120,   224,   285,   285,   285,   169,   244,   225,   172,
     210,   223,   314,   173,   169,   244,    13,    69,    70,   185,
     327,   327,   169,    78,   137,   169,     8,   323,   170,   335,
     173,    66,    67,   241,   279,   196,   171,    83,   171,   346,
     122,   228,    13,   194,   236,    92,    93,    94,   236,   173,
     383,   383,   379,     8,   170,   170,   319,   322,   325,   185,
      79,   290,   292,   185,   319,   363,   364,   169,   159,   242,
     319,   378,   185,   382,     8,   249,   170,   169,   282,   285,
     346,   346,   122,   176,   173,    99,   104,   106,   107,   108,
     109,   110,   111,   112,   148,   149,   151,   173,   250,   272,
     273,   274,   275,   277,   339,   147,   160,   172,   301,   308,
     147,   172,   307,   122,   285,   374,   169,   346,   170,     8,
     324,   383,   384,   242,   226,   172,   122,   244,   170,   172,
     249,   169,   224,   317,   169,   244,   170,   328,   329,   330,
     137,    79,   332,   333,   328,   279,    26,    68,   196,   171,
     281,   229,   170,   319,    89,    92,   171,   285,    26,   171,
     237,   173,   163,   157,    26,   122,   170,     8,   323,   122,
       8,   323,   170,   122,   173,     8,   323,   312,   172,   170,
       8,   378,   312,   173,   358,    31,   285,   173,   372,   227,
     312,   112,   124,   146,   152,   259,   260,   261,   312,   150,
     265,   266,   115,   169,   185,   267,   268,   251,   207,   275,
     383,     8,   171,   273,   274,    46,   285,   285,   285,   173,
     169,   244,    26,   377,   157,   340,    31,    73,   170,   249,
     285,   170,   249,   173,   242,   172,   244,   170,   122,   170,
       8,   323,   122,   170,     8,   323,    26,   194,   171,   170,
     201,   171,   171,   237,   194,   383,   319,   319,   319,    79,
     319,   319,    73,   194,   377,   378,   170,   346,    13,     8,
     171,   172,   172,     8,   171,     3,     4,     5,     6,     7,
       9,    10,    11,    12,    49,    62,    63,    64,    65,    66,
      67,    68,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   123,   124,   125,   126,   127,   128,   129,
     141,   142,   143,   145,   154,   156,   159,   167,   185,   309,
     310,     8,   171,   146,   150,   185,   268,   269,   270,   171,
      73,   276,   206,   252,   372,   207,   146,   303,   173,   173,
     169,   244,   170,   383,   104,   299,   384,    73,    13,   377,
     173,   173,   170,   249,   170,   328,   328,   328,    79,   194,
     199,    26,   196,   231,   194,   170,   122,   122,   122,   170,
     173,   299,   319,   312,   255,   262,   318,   260,    13,    26,
      43,   263,   266,     8,    29,   170,    25,    42,    45,    13,
       8,   171,   373,   276,    13,   206,   244,   170,   169,   172,
      31,    73,    13,   319,   172,   377,   173,   122,   122,    26,
     196,   230,   194,   319,   319,   319,   172,   172,   173,   185,
     192,   256,   257,   258,     8,   173,   319,   310,   310,    51,
     264,   269,   269,    25,    42,    45,   319,    73,   169,   171,
     319,   373,   170,    31,    73,   300,   194,    73,    13,   319,
     194,   172,   328,   328,   194,    87,   194,   194,   140,    90,
     318,   153,    13,   253,   169,    73,     8,   324,   173,    13,
     319,   173,   194,    85,   171,   173,   173,   185,   273,   274,
     319,   242,   254,    31,    73,   170,   319,   173,   171,   202,
     155,   185,   171,   170,   242,    73,   102,   203,   205,   227,
     171,   377,   170,   169,   171,   171,   172,   271,   377,   312,
     194,   271,    73,   173,   170,   172,   194,   173
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (&yylloc, _p, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).line0   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).char0 = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).line1    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).char1  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).line0   = (Current).line1   =		\
	    YYRHSLOC (Rhs, 0).line1;				\
	  (Current).char0 = (Current).char1 =		\
	    YYRHSLOC (Rhs, 0).char1;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).line0, (Loc).char0,	\
	      (Loc).line1,  (Loc).char1)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location, _p); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, HPHP::HPHP_PARSER_NS::Parser *_p)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, _p)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    HPHP::HPHP_PARSER_NS::Parser *_p;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (_p);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, HPHP::HPHP_PARSER_NS::Parser *_p)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, _p)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    HPHP::HPHP_PARSER_NS::Parser *_p;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, _p);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, HPHP::HPHP_PARSER_NS::Parser *_p)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, _p)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    HPHP::HPHP_PARSER_NS::Parser *_p;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , _p);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, _p); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, HPHP::HPHP_PARSER_NS::Parser *_p)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, _p)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    HPHP::HPHP_PARSER_NS::Parser *_p;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (_p);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (HPHP::HPHP_PARSER_NS::Parser *_p);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (HPHP::HPHP_PARSER_NS::Parser *_p)
#else
int
yyparse (_p)
    HPHP::HPHP_PARSER_NS::Parser *_p;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.line0   = yylloc.line1   = 1;
  yylloc.char0 = yylloc.char1 = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	struct yyalloc *yyptr =
	  (struct yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        memset(yyptr, 0, YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE_RESET (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 816 "../../../hphp/util/parser/hphp.y"
    { _p->popLabelInfo();
                                         _p->saveParseTree((yyval));;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 822 "../../../hphp/util/parser/hphp.y"
    { _p->addStatement((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 823 "../../../hphp/util/parser/hphp.y"
    { _p->onStatementListStart((yyval));;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 826 "../../../hphp/util/parser/hphp.y"
    { _p->nns((yyvsp[(1) - (1)]).num() == T_DECLARE);
                                         (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 828 "../../../hphp/util/parser/hphp.y"
    { _p->nns(); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 829 "../../../hphp/util/parser/hphp.y"
    { _p->nns(); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 830 "../../../hphp/util/parser/hphp.y"
    { _p->nns(); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 831 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 832 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 833 "../../../hphp/util/parser/hphp.y"
    { _p->onNamespaceStart((yyvsp[(2) - (3)]).text());
                                         (yyval).reset();;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 835 "../../../hphp/util/parser/hphp.y"
    { _p->onNamespaceStart((yyvsp[(2) - (3)]).text());;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 836 "../../../hphp/util/parser/hphp.y"
    { _p->onNamespaceEnd(); (yyval) = (yyvsp[(5) - (6)]);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 837 "../../../hphp/util/parser/hphp.y"
    { _p->onNamespaceStart("");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 838 "../../../hphp/util/parser/hphp.y"
    { _p->onNamespaceEnd(); (yyval) = (yyvsp[(4) - (5)]);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 839 "../../../hphp/util/parser/hphp.y"
    { _p->nns(); (yyval).reset();;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 840 "../../../hphp/util/parser/hphp.y"
    { _p->nns();
                                         _p->finishStatement((yyval), (yyvsp[(1) - (2)])); (yyval) = 1;;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 845 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 846 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 847 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 848 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 849 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 850 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 855 "../../../hphp/util/parser/hphp.y"
    { ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 856 "../../../hphp/util/parser/hphp.y"
    { ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 859 "../../../hphp/util/parser/hphp.y"
    { _p->onUse((yyvsp[(1) - (1)]).text(),"");;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 860 "../../../hphp/util/parser/hphp.y"
    { _p->onUse((yyvsp[(2) - (2)]).text(),"");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 861 "../../../hphp/util/parser/hphp.y"
    { _p->onUse((yyvsp[(1) - (3)]).text(),(yyvsp[(3) - (3)]).text());;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 863 "../../../hphp/util/parser/hphp.y"
    { _p->onUse((yyvsp[(2) - (4)]).text(),(yyvsp[(4) - (4)]).text());;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 867 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 869 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(2) - (3)]) + (yyvsp[(3) - (3)]);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 872 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = 1;;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 873 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]); (yyval) = 0;;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 875 "../../../hphp/util/parser/hphp.y"
    { (yyval).setText(_p->nsDecl((yyvsp[(3) - (3)]).text()));
                                         (yyval) = 0;;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 879 "../../../hphp/util/parser/hphp.y"
    { if ((yyvsp[(1) - (1)]).num())
                                           (yyvsp[(1) - (1)]).setText(_p->resolve((yyvsp[(1) - (1)]).text(),0));
                                         (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 885 "../../../hphp/util/parser/hphp.y"
    { if ((yyvsp[(1) - (2)]).num())
                                           (yyvsp[(1) - (2)]).setText(_p->resolve((yyvsp[(1) - (2)]).text(),0));
                                         (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 891 "../../../hphp/util/parser/hphp.y"
    { if ((yyvsp[(1) - (2)]).num())
                                           (yyvsp[(1) - (2)]).setText(_p->resolve((yyvsp[(1) - (2)]).text(),1));
                                         (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 897 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(3) - (5)]).setText(_p->nsDecl((yyvsp[(3) - (5)]).text()));
                                          on_constant(_p,(yyval),&(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 899 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(2) - (4)]).setText(_p->nsDecl((yyvsp[(2) - (4)]).text()));
                                          on_constant(_p,(yyval),  0,(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 905 "../../../hphp/util/parser/hphp.y"
    { _p->addStatement((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 906 "../../../hphp/util/parser/hphp.y"
    { _p->onStatementListStart((yyval));;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 909 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 910 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 911 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 912 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 915 "../../../hphp/util/parser/hphp.y"
    { _p->onBlock((yyval), (yyvsp[(2) - (3)]));;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 919 "../../../hphp/util/parser/hphp.y"
    { _p->onIf((yyval),(yyvsp[(2) - (5)]),(yyvsp[(3) - (5)]),(yyvsp[(4) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 924 "../../../hphp/util/parser/hphp.y"
    { _p->onIf((yyval),(yyvsp[(2) - (8)]),(yyvsp[(4) - (8)]),(yyvsp[(5) - (8)]),(yyvsp[(6) - (8)]));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 925 "../../../hphp/util/parser/hphp.y"
    { _p->pushLabelScope();;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 926 "../../../hphp/util/parser/hphp.y"
    { _p->popLabelScope();
                                         _p->onWhile((yyval),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 929 "../../../hphp/util/parser/hphp.y"
    { _p->pushLabelScope();;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 931 "../../../hphp/util/parser/hphp.y"
    { _p->popLabelScope();
                                         _p->onDo((yyval),(yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]));;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 934 "../../../hphp/util/parser/hphp.y"
    { _p->pushLabelScope();;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 935 "../../../hphp/util/parser/hphp.y"
    { _p->popLabelScope();
                                         _p->onFor((yyval),(yyvsp[(3) - (10)]),(yyvsp[(5) - (10)]),(yyvsp[(7) - (10)]),(yyvsp[(10) - (10)]));;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 937 "../../../hphp/util/parser/hphp.y"
    { _p->pushLabelScope();;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 938 "../../../hphp/util/parser/hphp.y"
    { _p->popLabelScope();
                                         _p->onSwitch((yyval),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 940 "../../../hphp/util/parser/hphp.y"
    { _p->onBreak((yyval), NULL);;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 941 "../../../hphp/util/parser/hphp.y"
    { _p->onBreak((yyval), &(yyvsp[(2) - (3)]));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 942 "../../../hphp/util/parser/hphp.y"
    { _p->onContinue((yyval), NULL);;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 943 "../../../hphp/util/parser/hphp.y"
    { _p->onContinue((yyval), &(yyvsp[(2) - (3)]));;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 944 "../../../hphp/util/parser/hphp.y"
    { _p->onReturn((yyval), NULL);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 945 "../../../hphp/util/parser/hphp.y"
    { _p->onReturn((yyval), &(yyvsp[(2) - (3)]));;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 946 "../../../hphp/util/parser/hphp.y"
    { _p->onYieldBreak((yyval));;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 947 "../../../hphp/util/parser/hphp.y"
    { _p->onGlobal((yyval), (yyvsp[(2) - (3)]));;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 948 "../../../hphp/util/parser/hphp.y"
    { _p->onStatic((yyval), (yyvsp[(2) - (3)]));;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 949 "../../../hphp/util/parser/hphp.y"
    { _p->onEcho((yyval), (yyvsp[(2) - (3)]), 0);;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 950 "../../../hphp/util/parser/hphp.y"
    { _p->onUnset((yyval), (yyvsp[(3) - (5)]));;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 951 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 952 "../../../hphp/util/parser/hphp.y"
    { _p->onEcho((yyval), (yyvsp[(1) - (1)]), 1);;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 955 "../../../hphp/util/parser/hphp.y"
    { _p->pushLabelScope();;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 956 "../../../hphp/util/parser/hphp.y"
    { _p->popLabelScope();
                                         _p->onForEach((yyval),(yyvsp[(3) - (9)]),(yyvsp[(5) - (9)]),(yyvsp[(6) - (9)]),(yyvsp[(9) - (9)]));;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 959 "../../../hphp/util/parser/hphp.y"
    { _p->onBlock((yyval), (yyvsp[(5) - (5)])); (yyval) = T_DECLARE;;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 967 "../../../hphp/util/parser/hphp.y"
    { _p->onTry((yyval),(yyvsp[(3) - (14)]),(yyvsp[(7) - (14)]),(yyvsp[(8) - (14)]),(yyvsp[(11) - (14)]),(yyvsp[(13) - (14)]),(yyvsp[(14) - (14)]));;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 970 "../../../hphp/util/parser/hphp.y"
    { _p->onTry((yyval), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 971 "../../../hphp/util/parser/hphp.y"
    { _p->onThrow((yyval), (yyvsp[(2) - (3)]));;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 972 "../../../hphp/util/parser/hphp.y"
    { _p->onGoto((yyval), (yyvsp[(2) - (3)]), true);
                                         _p->addGoto((yyvsp[(2) - (3)]).text(),
                                                     _p->getLocation(),
                                                     &(yyval)); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 976 "../../../hphp/util/parser/hphp.y"
    { _p->onExpStatement((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 977 "../../../hphp/util/parser/hphp.y"
    { _p->onExpStatement((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 978 "../../../hphp/util/parser/hphp.y"
    { _p->onExpStatement((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 979 "../../../hphp/util/parser/hphp.y"
    { _p->onExpStatement((yyval), (yyvsp[(1) - (2)]));;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 980 "../../../hphp/util/parser/hphp.y"
    { _p->onLabel((yyval), (yyvsp[(1) - (2)]));
                                         _p->addLabel((yyvsp[(1) - (2)]).text(),
                                                      _p->getLocation(),
                                                      &(yyval)); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 992 "../../../hphp/util/parser/hphp.y"
    { _p->onCatch((yyval), (yyvsp[(1) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(5) - (9)]), (yyvsp[(8) - (9)]));;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 993 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 997 "../../../hphp/util/parser/hphp.y"
    { finally_statement(_p);;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 999 "../../../hphp/util/parser/hphp.y"
    { _p->onFinally((yyval), (yyvsp[(4) - (5)]));;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1004 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1008 "../../../hphp/util/parser/hphp.y"
    { (yyval) = 1;;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1009 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1013 "../../../hphp/util/parser/hphp.y"
    { _p->pushFuncLocation();;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1018 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(3) - (3)]).setText(_p->nsDecl((yyvsp[(3) - (3)]).text()));
                                         _p->onFunctionStart((yyvsp[(3) - (3)]));
                                         _p->pushLabelInfo();;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1023 "../../../hphp/util/parser/hphp.y"
    { Token t; t.reset();
                                         _p->onFunction((yyval),0,t,(yyvsp[(2) - (11)]),(yyvsp[(3) - (11)]),(yyvsp[(6) - (11)]),(yyvsp[(10) - (11)]),0);
                                         _p->popLabelInfo();
                                         _p->popTypeScope();;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1028 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(4) - (4)]).setText(_p->nsDecl((yyvsp[(4) - (4)]).text()));
                                         _p->onFunctionStart((yyvsp[(4) - (4)]));
                                         _p->pushLabelInfo();;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1033 "../../../hphp/util/parser/hphp.y"
    { Token t; t.reset();
                                         _p->onFunction((yyval),0,t,(yyvsp[(3) - (12)]),(yyvsp[(4) - (12)]),(yyvsp[(7) - (12)]),(yyvsp[(11) - (12)]),&(yyvsp[(1) - (12)]));
                                         _p->popLabelInfo();
                                         _p->popTypeScope();;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1041 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(2) - (2)]).setText(_p->nsDecl((yyvsp[(2) - (2)]).text()));
                                         _p->onClassStart((yyvsp[(1) - (2)]).num(),(yyvsp[(2) - (2)]));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1044 "../../../hphp/util/parser/hphp.y"
    { Token stmts;
                                         if (_p->peekClass()) {
                                           xhp_collect_attributes(_p,stmts,(yyvsp[(7) - (8)]));
                                         } else {
                                           stmts = (yyvsp[(7) - (8)]);
                                         }
                                         _p->onClass((yyval),(yyvsp[(1) - (8)]).num(),(yyvsp[(2) - (8)]),(yyvsp[(4) - (8)]),(yyvsp[(5) - (8)]),
                                                     stmts,0);
                                         if (_p->peekClass()) {
                                           _p->xhpResetAttributes();
                                         }
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1059 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(3) - (3)]).setText(_p->nsDecl((yyvsp[(3) - (3)]).text()));
                                         _p->onClassStart((yyvsp[(2) - (3)]).num(),(yyvsp[(3) - (3)]));;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1062 "../../../hphp/util/parser/hphp.y"
    { Token stmts;
                                         if (_p->peekClass()) {
                                           xhp_collect_attributes(_p,stmts,(yyvsp[(8) - (9)]));
                                         } else {
                                           stmts = (yyvsp[(8) - (9)]);
                                         }
                                         _p->onClass((yyval),(yyvsp[(2) - (9)]).num(),(yyvsp[(3) - (9)]),(yyvsp[(5) - (9)]),(yyvsp[(6) - (9)]),
                                                     stmts,&(yyvsp[(1) - (9)]));
                                         if (_p->peekClass()) {
                                           _p->xhpResetAttributes();
                                         }
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1076 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(2) - (2)]).setText(_p->nsDecl((yyvsp[(2) - (2)]).text()));
                                         _p->onClassStart(T_INTERFACE,(yyvsp[(2) - (2)]));;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1079 "../../../hphp/util/parser/hphp.y"
    { _p->onInterface((yyval),(yyvsp[(2) - (7)]),(yyvsp[(4) - (7)]),(yyvsp[(6) - (7)]),0);
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1084 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(3) - (3)]).setText(_p->nsDecl((yyvsp[(3) - (3)]).text()));
                                         _p->onClassStart(T_INTERFACE,(yyvsp[(3) - (3)]));;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1087 "../../../hphp/util/parser/hphp.y"
    { _p->onInterface((yyval),(yyvsp[(3) - (8)]),(yyvsp[(5) - (8)]),(yyvsp[(7) - (8)]),&(yyvsp[(1) - (8)]));
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1094 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(2) - (2)]).setText(_p->nsDecl((yyvsp[(2) - (2)]).text()));
                                         _p->onClassStart(T_TRAIT, (yyvsp[(2) - (2)]));;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1096 "../../../hphp/util/parser/hphp.y"
    { Token t_ext, t_imp;
                                         t_ext.reset(); t_imp.reset();
                                         _p->onClass((yyval),T_TRAIT,(yyvsp[(2) - (6)]),t_ext,t_imp,
                                                     (yyvsp[(5) - (6)]), 0);
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1104 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(3) - (3)]).setText(_p->nsDecl((yyvsp[(3) - (3)]).text()));
                                         _p->onClassStart(T_TRAIT, (yyvsp[(3) - (3)]));;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1106 "../../../hphp/util/parser/hphp.y"
    { Token t_ext, t_imp;
                                         t_ext.reset(); t_imp.reset();
                                         _p->onClass((yyval),T_TRAIT,(yyvsp[(3) - (7)]),t_ext,t_imp,
                                                     (yyvsp[(6) - (7)]), &(yyvsp[(1) - (7)]));
                                         _p->popClass();
                                         _p->popTypeScope();;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1114 "../../../hphp/util/parser/hphp.y"
    { _p->pushClass(false); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1115 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(1) - (1)]).xhpLabel(); _p->pushTypeScope();
                                         _p->pushClass(true); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1119 "../../../hphp/util/parser/hphp.y"
    { _p->pushClass(false); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1122 "../../../hphp/util/parser/hphp.y"
    { _p->pushClass(false); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1125 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_CLASS;;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1126 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_ABSTRACT;;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1127 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_FINAL;;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1131 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1132 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1135 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1136 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1139 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1140 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1143 "../../../hphp/util/parser/hphp.y"
    { _p->onInterfaceName((yyval), NULL, (yyvsp[(1) - (1)]));;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1145 "../../../hphp/util/parser/hphp.y"
    { _p->onInterfaceName((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1148 "../../../hphp/util/parser/hphp.y"
    { _p->onTraitName((yyval), NULL, (yyvsp[(1) - (1)]));;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1150 "../../../hphp/util/parser/hphp.y"
    { _p->onTraitName((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1154 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1155 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1158 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1159 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]); (yyval) = 1;;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1163 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1165 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (4)]);;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1168 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1170 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (4)]);;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1173 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1175 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (4)]);;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1178 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1180 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (4)]);;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1190 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1191 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(3) - (4)]);;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1192 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (4)]);;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1193 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(3) - (5)]);;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1198 "../../../hphp/util/parser/hphp.y"
    { _p->onCase((yyval),(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1200 "../../../hphp/util/parser/hphp.y"
    { _p->onCase((yyval),(yyvsp[(1) - (4)]),NULL,(yyvsp[(4) - (4)]));;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1201 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1204 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1205 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1210 "../../../hphp/util/parser/hphp.y"
    { _p->onElseIf((yyval),(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1211 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1216 "../../../hphp/util/parser/hphp.y"
    { _p->onElseIf((yyval),(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1217 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1220 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1221 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1224 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(3) - (3)]);;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1225 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1230 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1232 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1233 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval).reset(); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1234 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1239 "../../../hphp/util/parser/hphp.y"
    { _p->onParam((yyval),NULL,(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]),0,NULL,&(yyvsp[(1) - (3)]));;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1241 "../../../hphp/util/parser/hphp.y"
    { _p->onParam((yyval),NULL,(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]),1,NULL,&(yyvsp[(1) - (4)]));;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1244 "../../../hphp/util/parser/hphp.y"
    { _p->onParam((yyval),NULL,(yyvsp[(2) - (6)]),(yyvsp[(4) - (6)]),1,&(yyvsp[(6) - (6)]),&(yyvsp[(1) - (6)]));;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1247 "../../../hphp/util/parser/hphp.y"
    { _p->onParam((yyval),NULL,(yyvsp[(2) - (5)]),(yyvsp[(3) - (5)]),0,&(yyvsp[(5) - (5)]),&(yyvsp[(1) - (5)]));;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1250 "../../../hphp/util/parser/hphp.y"
    { _p->onParam((yyval),&(yyvsp[(1) - (5)]),(yyvsp[(4) - (5)]),(yyvsp[(5) - (5)]),0,NULL,&(yyvsp[(3) - (5)]));;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1253 "../../../hphp/util/parser/hphp.y"
    { _p->onParam((yyval),&(yyvsp[(1) - (6)]),(yyvsp[(4) - (6)]),(yyvsp[(6) - (6)]),1,NULL,&(yyvsp[(3) - (6)]));;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1257 "../../../hphp/util/parser/hphp.y"
    { _p->onParam((yyval),&(yyvsp[(1) - (8)]),(yyvsp[(4) - (8)]),(yyvsp[(6) - (8)]),1,&(yyvsp[(8) - (8)]),&(yyvsp[(3) - (8)]));;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1261 "../../../hphp/util/parser/hphp.y"
    { _p->onParam((yyval),&(yyvsp[(1) - (7)]),(yyvsp[(4) - (7)]),(yyvsp[(5) - (7)]),0,&(yyvsp[(7) - (7)]),&(yyvsp[(3) - (7)]));;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1266 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1267 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1270 "../../../hphp/util/parser/hphp.y"
    { _p->onCallParam((yyval),NULL,(yyvsp[(1) - (1)]),0);;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1271 "../../../hphp/util/parser/hphp.y"
    { _p->onCallParam((yyval),NULL,(yyvsp[(2) - (2)]),1);;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1273 "../../../hphp/util/parser/hphp.y"
    { _p->onCallParam((yyval),&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1275 "../../../hphp/util/parser/hphp.y"
    { _p->onCallParam((yyval),&(yyvsp[(1) - (4)]),(yyvsp[(4) - (4)]),1);;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1279 "../../../hphp/util/parser/hphp.y"
    { _p->onGlobalVar((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1280 "../../../hphp/util/parser/hphp.y"
    { _p->onGlobalVar((yyval), NULL, (yyvsp[(1) - (1)]));;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1283 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1284 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]); (yyval) = 1;;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1285 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(3) - (4)]); (yyval) = 1;;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1289 "../../../hphp/util/parser/hphp.y"
    { _p->onStaticVariable((yyval),&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1291 "../../../hphp/util/parser/hphp.y"
    { _p->onStaticVariable((yyval),&(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),&(yyvsp[(5) - (5)]));;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1292 "../../../hphp/util/parser/hphp.y"
    { _p->onStaticVariable((yyval),0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1293 "../../../hphp/util/parser/hphp.y"
    { _p->onStaticVariable((yyval),0,(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]));;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1298 "../../../hphp/util/parser/hphp.y"
    { _p->onClassStatement((yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1299 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1302 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariableModifer((yyvsp[(1) - (1)]));;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1303 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariableStart
                                         ((yyval),&(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL);;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1306 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariableModifer((yyvsp[(1) - (2)]));;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1307 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariableStart
                                         ((yyval),&(yyvsp[(1) - (5)]),(yyvsp[(4) - (5)]),&(yyvsp[(2) - (5)]));;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1309 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariableStart
                                         ((yyval),NULL,(yyvsp[(1) - (2)]),NULL);;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1313 "../../../hphp/util/parser/hphp.y"
    { _p->onMethodStart((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
                                         _p->pushLabelInfo();;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1318 "../../../hphp/util/parser/hphp.y"
    { Token t; t.reset();
                                         _p->onMethod((yyval),(yyvsp[(1) - (10)]),t,(yyvsp[(3) - (10)]),(yyvsp[(4) - (10)]),(yyvsp[(7) - (10)]),(yyvsp[(10) - (10)]),0);
                                         _p->popLabelInfo();
                                         _p->popTypeScope();;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1325 "../../../hphp/util/parser/hphp.y"
    { _p->onMethodStart((yyvsp[(5) - (6)]), (yyvsp[(2) - (6)]));
                                         _p->pushLabelInfo();;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1330 "../../../hphp/util/parser/hphp.y"
    { Token t; t.reset();
                                         _p->onMethod((yyval),(yyvsp[(2) - (11)]),t,(yyvsp[(4) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(8) - (11)]),(yyvsp[(11) - (11)]),&(yyvsp[(1) - (11)]));
                                         _p->popLabelInfo();
                                         _p->popTypeScope();;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1335 "../../../hphp/util/parser/hphp.y"
    { _p->xhpSetAttributes((yyvsp[(2) - (3)]));;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1337 "../../../hphp/util/parser/hphp.y"
    { xhp_category_stmt(_p,(yyval),(yyvsp[(2) - (3)]));;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1339 "../../../hphp/util/parser/hphp.y"
    { xhp_children_stmt(_p,(yyval),(yyvsp[(2) - (3)]));;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1340 "../../../hphp/util/parser/hphp.y"
    { Token t; t.reset();
                                         _p->onTraitUse((yyval),(yyvsp[(2) - (3)]),t); ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1343 "../../../hphp/util/parser/hphp.y"
    { _p->onTraitUse((yyval),(yyvsp[(2) - (5)]),(yyvsp[(4) - (5)])); ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1346 "../../../hphp/util/parser/hphp.y"
    { _p->onTraitRule((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1347 "../../../hphp/util/parser/hphp.y"
    { _p->onTraitRule((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)])); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1348 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1354 "../../../hphp/util/parser/hphp.y"
    { _p->onTraitPrecRule((yyval),(yyvsp[(1) - (6)]),(yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]));;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1358 "../../../hphp/util/parser/hphp.y"
    { _p->onTraitAliasRuleModify((yyval),(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),
                                                                    (yyvsp[(4) - (5)]));;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1361 "../../../hphp/util/parser/hphp.y"
    { Token t; t.reset();
                                         _p->onTraitAliasRuleModify((yyval),(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),
                                                                    t);;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1368 "../../../hphp/util/parser/hphp.y"
    { _p->onTraitAliasRuleStart((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1369 "../../../hphp/util/parser/hphp.y"
    { Token t; t.reset();
                                         _p->onTraitAliasRuleStart((yyval),t,(yyvsp[(1) - (1)]));;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1374 "../../../hphp/util/parser/hphp.y"
    { xhp_attribute_list(_p,(yyval),
                                         _p->xhpGetAttributes(),(yyvsp[(1) - (1)]));;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1377 "../../../hphp/util/parser/hphp.y"
    { xhp_attribute_list(_p,(yyval), &(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1384 "../../../hphp/util/parser/hphp.y"
    { xhp_attribute(_p,(yyval),(yyvsp[(1) - (4)]),(yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]));
                                         (yyval) = 1;;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1386 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = 0;;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1390 "../../../hphp/util/parser/hphp.y"
    { (yyval) = 4;;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1391 "../../../hphp/util/parser/hphp.y"
    { /* This case handles all types other
                                            than "array", "var" and "enum".
                                            For now we just use type code 5;
                                            later xhp_attribute() will fix up
                                            the type code as appropriate. */
                                         (yyval) = 5; (yyval).setText((yyvsp[(1) - (1)]));;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1397 "../../../hphp/util/parser/hphp.y"
    { (yyval) = 6;;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1399 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(3) - (4)]); (yyval) = 7;;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1403 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1405 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),0,(yyvsp[(3) - (3)]),0);;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1409 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1410 "../../../hphp/util/parser/hphp.y"
    { scalar_null(_p, (yyval));;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1414 "../../../hphp/util/parser/hphp.y"
    { scalar_num(_p, (yyval), "1");;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1415 "../../../hphp/util/parser/hphp.y"
    { scalar_num(_p, (yyval), "0");;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 1419 "../../../hphp/util/parser/hphp.y"
    { Token t; scalar_num(_p, t, "1");
                                         _p->onArrayPair((yyval),0,&(yyvsp[(1) - (1)]),t,0);;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1422 "../../../hphp/util/parser/hphp.y"
    { Token t; scalar_num(_p, t, "1");
                                         _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]),t,0);;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1427 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING, (yyvsp[(1) - (1)]));;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1432 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = 2;;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 1433 "../../../hphp/util/parser/hphp.y"
    { (yyval) = -1;
                                         if ((yyvsp[(1) - (1)]).same("any")) (yyval) = 1;;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1435 "../../../hphp/util/parser/hphp.y"
    { (yyval) = 0;;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1439 "../../../hphp/util/parser/hphp.y"
    { xhp_children_paren(_p, (yyval), (yyvsp[(2) - (3)]), 0);;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1440 "../../../hphp/util/parser/hphp.y"
    { xhp_children_paren(_p, (yyval), (yyvsp[(2) - (4)]), 1);;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1441 "../../../hphp/util/parser/hphp.y"
    { xhp_children_paren(_p, (yyval), (yyvsp[(2) - (4)]), 2);;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1442 "../../../hphp/util/parser/hphp.y"
    { xhp_children_paren(_p, (yyval), (yyvsp[(2) - (4)]), 3);;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1446 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1447 "../../../hphp/util/parser/hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (1)]),0,  0);;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1448 "../../../hphp/util/parser/hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (2)]),1,  0);;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1449 "../../../hphp/util/parser/hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (2)]),2,  0);;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1450 "../../../hphp/util/parser/hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (2)]),3,  0);;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1452 "../../../hphp/util/parser/hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (3)]),4,&(yyvsp[(3) - (3)]));;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1454 "../../../hphp/util/parser/hphp.y"
    { xhp_children_decl(_p,(yyval),(yyvsp[(1) - (3)]),5,&(yyvsp[(3) - (3)]));;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1458 "../../../hphp/util/parser/hphp.y"
    { (yyval) = -1;
                                         if ((yyvsp[(1) - (1)]).same("any")) (yyval) = 1; else
                                         if ((yyvsp[(1) - (1)]).same("pcdata")) (yyval) = 2;;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1461 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(1) - (1)]).xhpLabel();  (yyval) = (yyvsp[(1) - (1)]); (yyval) = 3;;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1462 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(1) - (1)]).xhpLabel(0); (yyval) = (yyvsp[(1) - (1)]); (yyval) = 4;;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1466 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1467 "../../../hphp/util/parser/hphp.y"
    { _p->finishStatement((yyval), (yyvsp[(2) - (3)])); (yyval) = 1;;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1470 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1471 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1474 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1475 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1478 "../../../hphp/util/parser/hphp.y"
    { _p->onMemberModifier((yyval),NULL,(yyvsp[(1) - (1)]));;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1480 "../../../hphp/util/parser/hphp.y"
    { _p->onMemberModifier((yyval),&(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1483 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_PUBLIC;;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1484 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_PROTECTED;;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1485 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_PRIVATE;;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1486 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_STATIC;;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1487 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_ABSTRACT;;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1488 "../../../hphp/util/parser/hphp.y"
    { (yyval) = T_FINAL;;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1492 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariable((yyval),&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1494 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariable((yyval),&(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),&(yyvsp[(5) - (5)]));;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1495 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariable((yyval),0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1496 "../../../hphp/util/parser/hphp.y"
    { _p->onClassVariable((yyval),0,(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]));;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1500 "../../../hphp/util/parser/hphp.y"
    { _p->onClassConstant((yyval),&(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1501 "../../../hphp/util/parser/hphp.y"
    { _p->onClassConstant((yyval),0,(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1506 "../../../hphp/util/parser/hphp.y"
    { _p->onNewObject((yyval), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1507 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1511 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1515 "../../../hphp/util/parser/hphp.y"
    { _p->onExprListElem((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1516 "../../../hphp/util/parser/hphp.y"
    { _p->onExprListElem((yyval), NULL, (yyvsp[(1) - (1)]));;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1520 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1521 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1525 "../../../hphp/util/parser/hphp.y"
    { _p->onYield((yyval), (yyvsp[(2) - (2)]));;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1529 "../../../hphp/util/parser/hphp.y"
    { _p->onAssign((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 0, true);;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1534 "../../../hphp/util/parser/hphp.y"
    { _p->onListAssignment((yyval), (yyvsp[(3) - (6)]), &(yyvsp[(6) - (6)]), true);;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1538 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1539 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1540 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1544 "../../../hphp/util/parser/hphp.y"
    { _p->onListAssignment((yyval), (yyvsp[(3) - (6)]), &(yyvsp[(6) - (6)]));;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1545 "../../../hphp/util/parser/hphp.y"
    { _p->onAssign((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 0);;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1546 "../../../hphp/util/parser/hphp.y"
    { _p->onAssign((yyval), (yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]), 1);;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1549 "../../../hphp/util/parser/hphp.y"
    { _p->onAssignNew((yyval),(yyvsp[(1) - (6)]),(yyvsp[(5) - (6)]),(yyvsp[(6) - (6)]));;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1550 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_CLONE,1);;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1551 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_PLUS_EQUAL);;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1552 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_MINUS_EQUAL);;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1553 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_MUL_EQUAL);;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1554 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_DIV_EQUAL);;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1555 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_CONCAT_EQUAL);;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1556 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_MOD_EQUAL);;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1557 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_AND_EQUAL);;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1558 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_OR_EQUAL);;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1559 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_XOR_EQUAL);;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1560 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_SL_EQUAL);;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1561 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_SR_EQUAL);;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1562 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(1) - (2)]),T_INC,0);;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1563 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_INC,1);;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1564 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(1) - (2)]),T_DEC,0);;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1565 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_DEC,1);;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1566 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_BOOLEAN_OR);;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1567 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_BOOLEAN_AND);;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1568 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_LOGICAL_OR);;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1569 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_LOGICAL_AND);;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1570 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_LOGICAL_XOR);;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1571 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'|');;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1572 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'&');;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1573 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'^');;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1574 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'.');;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1575 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'+');;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1576 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'-');;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1577 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'*');;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1578 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'/');;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1579 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'%');;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1580 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_SL);;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1581 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_SR);;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1582 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'+',1);;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1583 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'-',1);;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1584 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'!',1);;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1585 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'~',1);;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1586 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_IS_IDENTICAL);;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1587 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_IS_NOT_IDENTICAL);;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1588 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_IS_EQUAL);;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1589 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_IS_NOT_EQUAL);;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1590 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'<');;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1591 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),
                                              T_IS_SMALLER_OR_EQUAL);;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1593 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),'>');;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1594 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),
                                              T_IS_GREATER_OR_EQUAL);;}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1597 "../../../hphp/util/parser/hphp.y"
    { BEXP((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),T_INSTANCEOF);;}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1598 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1599 "../../../hphp/util/parser/hphp.y"
    { _p->onQOp((yyval), (yyvsp[(1) - (5)]), &(yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));;}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1600 "../../../hphp/util/parser/hphp.y"
    { _p->onQOp((yyval), (yyvsp[(1) - (4)]),   0, (yyvsp[(4) - (4)]));;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1601 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1602 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_INT_CAST,1);;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1603 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_DOUBLE_CAST,1);;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1604 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_STRING_CAST,1);;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1605 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_ARRAY_CAST,1);;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1606 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_OBJECT_CAST,1);;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1607 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_BOOL_CAST,1);;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1608 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_UNSET_CAST,1);;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1609 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_EXIT,1);;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1610 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'@',1);;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1611 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1612 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1613 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1614 "../../../hphp/util/parser/hphp.y"
    { _p->onEncapsList((yyval),'`',(yyvsp[(2) - (3)]));;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1615 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_PRINT,1);;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1617 "../../../hphp/util/parser/hphp.y"
    { Token t; _p->onClosureStart(t);
                                         _p->pushLabelInfo();;}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1621 "../../../hphp/util/parser/hphp.y"
    { Token u; u.reset();
                                         _p->onClosure((yyval),u,(yyvsp[(2) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(8) - (11)]),(yyvsp[(10) - (11)]),0);
                                         _p->popLabelInfo();;}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1625 "../../../hphp/util/parser/hphp.y"
    { Token t; _p->onClosureStart(t);
                                         _p->pushLabelInfo();;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1629 "../../../hphp/util/parser/hphp.y"
    { Token u; u.reset();
                                         _p->onClosure((yyval),u,(yyvsp[(3) - (12)]),(yyvsp[(6) - (12)]),(yyvsp[(9) - (12)]),(yyvsp[(11) - (12)]),1);
                                         _p->popLabelInfo();;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1632 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1633 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1634 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1641 "../../../hphp/util/parser/hphp.y"
    { validate_shape_keyname((yyvsp[(3) - (5)]), _p);
                                        _p->onArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),0); ;}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1645 "../../../hphp/util/parser/hphp.y"
    { validate_shape_keyname((yyvsp[(1) - (3)]), _p);
                                        _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0); ;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1653 "../../../hphp/util/parser/hphp.y"
    { validate_shape_keyname((yyvsp[(3) - (5)]), _p);
                                        _p->onArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),0); ;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1657 "../../../hphp/util/parser/hphp.y"
    { validate_shape_keyname((yyvsp[(1) - (3)]), _p);
                                        _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0); ;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1663 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]); ;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1664 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1669 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]); ;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1670 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1674 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p);
                                        _p->onArray((yyval), (yyvsp[(3) - (4)]), T_ARRAY); ;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1679 "../../../hphp/util/parser/hphp.y"
    { _p->onArray((yyval),(yyvsp[(3) - (4)]),T_ARRAY);;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1684 "../../../hphp/util/parser/hphp.y"
    { Token t;
                                         _p->onName(t,(yyvsp[(1) - (4)]),Parser::StringName);
                                         BEXP((yyval),t,(yyvsp[(3) - (4)]),T_COLLECTION);;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1691 "../../../hphp/util/parser/hphp.y"
    { Token t;
                                         _p->onName(t,(yyvsp[(1) - (4)]),Parser::StringName);
                                         BEXP((yyval),t,(yyvsp[(3) - (4)]),T_COLLECTION);;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1698 "../../../hphp/util/parser/hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1700 "../../../hphp/util/parser/hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1704 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1705 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1706 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1713 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(3) - (5)]);;}
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1714 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1718 "../../../hphp/util/parser/hphp.y"
    { _p->onClosureParam((yyval),&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1719 "../../../hphp/util/parser/hphp.y"
    { _p->onClosureParam((yyval),&(yyvsp[(1) - (4)]),(yyvsp[(4) - (4)]),1);;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1720 "../../../hphp/util/parser/hphp.y"
    { _p->onClosureParam((yyval),  0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1721 "../../../hphp/util/parser/hphp.y"
    { _p->onClosureParam((yyval),  0,(yyvsp[(2) - (2)]),1);;}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1728 "../../../hphp/util/parser/hphp.y"
    { xhp_tag(_p,(yyval),(yyvsp[(2) - (4)]),(yyvsp[(3) - (4)]));;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1731 "../../../hphp/util/parser/hphp.y"
    { Token t1; _p->onArray(t1,(yyvsp[(1) - (2)]));
                                         Token t2; _p->onArray(t2,(yyvsp[(2) - (2)]));
                                         _p->onCallParam((yyvsp[(1) - (2)]),NULL,t1,0);
                                         _p->onCallParam((yyval), &(yyvsp[(1) - (2)]),t2,0);
                                         (yyval).setText("");;}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1738 "../../../hphp/util/parser/hphp.y"
    { _p->onArray((yyvsp[(4) - (6)]),(yyvsp[(1) - (6)]));
                                         _p->onArray((yyvsp[(5) - (6)]),(yyvsp[(3) - (6)]));
                                         _p->onCallParam((yyvsp[(2) - (6)]),NULL,(yyvsp[(4) - (6)]),0);
                                         _p->onCallParam((yyval), &(yyvsp[(2) - (6)]),(yyvsp[(5) - (6)]),0);
                                         (yyval).setText((yyvsp[(6) - (6)]).text());;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1745 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); (yyval).setText("");;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1746 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); (yyval).setText((yyvsp[(1) - (1)]));;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1751 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (4)]),&(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]),0);;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1752 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1755 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (2)]),0,(yyvsp[(2) - (2)]),0);;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1756 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1759 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING, (yyvsp[(1) - (1)]));;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1763 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(1) - (1)]).xhpDecode();
                                         _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING, (yyvsp[(1) - (1)]));;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1766 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1769 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();
                                         if ((yyvsp[(1) - (1)]).htmlTrim()) {
                                           (yyvsp[(1) - (1)]).xhpDecode();
                                           _p->onScalar((yyval),
                                           T_CONSTANT_ENCAPSED_STRING, (yyvsp[(1) - (1)]));
                                         }
                                       ;}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1776 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1777 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1781 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1783 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (3)]) + ":" + (yyvsp[(3) - (3)]);;}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1785 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (3)]) + "-" + (yyvsp[(3) - (3)]);;}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1788 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1789 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1790 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1791 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1792 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1793 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1794 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1795 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1796 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1797 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1798 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1799 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1800 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1801 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1802 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1803 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1804 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1805 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1806 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1807 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1808 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1809 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1810 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1811 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1812 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1813 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1814 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1815 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1816 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1817 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1818 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1819 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1820 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1821 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1822 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1823 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1824 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1825 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1826 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1827 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1828 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1829 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1830 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1831 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1832 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1833 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1834 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1835 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1836 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1837 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1838 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1839 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1840 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1841 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1842 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1843 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1844 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1845 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1846 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1847 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1848 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1849 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1850 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 1851 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 1852 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 1853 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 1854 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 1855 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 1856 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 1857 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 1858 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 1859 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 1860 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 1861 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 1866 "../../../hphp/util/parser/hphp.y"
    { _p->onCall((yyval),0,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL);;}
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 1870 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 1871 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(1) - (1)]).xhpLabel(); (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 1874 "../../../hphp/util/parser/hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),Parser::StringName);;}
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 1875 "../../../hphp/util/parser/hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),Parser::StaticName);;}
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 1876 "../../../hphp/util/parser/hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),
                                         Parser::StaticClassExprName);;}
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 1880 "../../../hphp/util/parser/hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),Parser::StringName);;}
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 1881 "../../../hphp/util/parser/hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),Parser::StaticName);;}
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 1882 "../../../hphp/util/parser/hphp.y"
    { _p->onName((yyval),(yyvsp[(1) - (1)]),Parser::ExprName);;}
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 1886 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 1887 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 1888 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 1892 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 1893 "../../../hphp/util/parser/hphp.y"
    { _p->addEncap((yyval), NULL, (yyvsp[(1) - (1)]), 0);;}
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 1894 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 1898 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 1899 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 1903 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_LNUMBER,  (yyvsp[(1) - (1)]));;}
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 1904 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_DNUMBER,  (yyvsp[(1) - (1)]));;}
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 1905 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING,  (yyvsp[(1) - (1)]));;}
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 1907 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_LINE,     (yyvsp[(1) - (1)]));;}
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 1908 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_FILE,     (yyvsp[(1) - (1)]));;}
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 1909 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_DIR,      (yyvsp[(1) - (1)]));;}
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 1910 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_CLASS_C,  (yyvsp[(1) - (1)]));;}
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 1911 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_TRAIT_C,  (yyvsp[(1) - (1)]));;}
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 1912 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_METHOD_C, (yyvsp[(1) - (1)]));;}
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 1913 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_FUNC_C,   (yyvsp[(1) - (1)]));;}
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 1914 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_NS_C,  (yyvsp[(1) - (1)]));;}
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 1917 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyvsp[(2) - (3)]));;}
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 1919 "../../../hphp/util/parser/hphp.y"
    { (yyval).setText(""); _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyval));;}
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 1923 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 1924 "../../../hphp/util/parser/hphp.y"
    { _p->onConstantValue((yyval), (yyvsp[(1) - (1)]));;}
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 1925 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'+',1);;}
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 1926 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'-',1);;}
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 1928 "../../../hphp/util/parser/hphp.y"
    { _p->onArray((yyval),(yyvsp[(3) - (4)]),T_ARRAY); ;}
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 1930 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p);
                                         _p->onArray((yyval),(yyvsp[(3) - (4)]),T_ARRAY); ;}
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 1932 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 1933 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 1939 "../../../hphp/util/parser/hphp.y"
    { _p->onClassConst((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 1);;}
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 1941 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(1) - (3)]).xhpLabel();
                                         _p->onClassConst((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 1);;}
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 1946 "../../../hphp/util/parser/hphp.y"
    { _p->onConstantValue((yyval), (yyvsp[(1) - (1)]));;}
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 1947 "../../../hphp/util/parser/hphp.y"
    { _p->onConstantValue((yyval), (yyvsp[(1) - (1)]));;}
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 1948 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 1949 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 1950 "../../../hphp/util/parser/hphp.y"
    { _p->onEncapsList((yyval),'"',(yyvsp[(2) - (3)]));;}
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 1951 "../../../hphp/util/parser/hphp.y"
    { _p->onEncapsList((yyval),'\'',(yyvsp[(2) - (3)]));;}
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 1953 "../../../hphp/util/parser/hphp.y"
    { _p->onEncapsList((yyval),T_START_HEREDOC,
                                                          (yyvsp[(2) - (3)]));;}
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 1958 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 1959 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 1963 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 1964 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 513:

/* Line 1455 of yacc.c  */
#line 1967 "../../../hphp/util/parser/hphp.y"
    { only_in_hphp_syntax(_p); (yyval).reset();;}
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 1968 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 1974 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),0);;}
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 1976 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]),0);;}
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 1978 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 1979 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,  0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 1983 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_LNUMBER,  (yyvsp[(1) - (1)]));;}
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 1984 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_DNUMBER,  (yyvsp[(1) - (1)]));;}
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 1985 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval),
                                         T_CONSTANT_ENCAPSED_STRING,  (yyvsp[(1) - (1)]));;}
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 1989 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyvsp[(2) - (3)]));;}
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 1991 "../../../hphp/util/parser/hphp.y"
    { (yyval).setText(""); _p->onScalar((yyval), T_CONSTANT_ENCAPSED_STRING, (yyval));;}
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 1994 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval),T_LNUMBER,(yyvsp[(1) - (1)]));;}
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 1995 "../../../hphp/util/parser/hphp.y"
    { _p->onScalar((yyval),T_DNUMBER,(yyvsp[(1) - (1)]));;}
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 1996 "../../../hphp/util/parser/hphp.y"
    { constant_ae(_p,(yyval),(yyvsp[(1) - (1)]));;}
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 1999 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 2000 "../../../hphp/util/parser/hphp.y"
    { constant_ae(_p,(yyval),(yyvsp[(1) - (1)]));;}
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 2001 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'+',1);;}
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 2002 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),'-',1);;}
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 2004 "../../../hphp/util/parser/hphp.y"
    { _p->onArray((yyval),(yyvsp[(3) - (4)]),T_ARRAY);;}
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 2006 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p);
                                         _p->onArray((yyval),(yyvsp[(3) - (4)]),T_ARRAY); ;}
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 2012 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 2013 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 2018 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),0);;}
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 2020 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]),0);;}
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 2022 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 2023 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,  0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 2027 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]),0);;}
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 2028 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,  0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 2033 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]); ;}
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 2034 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 2039 "../../../hphp/util/parser/hphp.y"
    { validate_shape_keyname((yyvsp[(3) - (5)]), _p);
                                         _p->onArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),0); ;}
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 2043 "../../../hphp/util/parser/hphp.y"
    { validate_shape_keyname((yyvsp[(1) - (3)]), _p);
                                         _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0); ;}
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 2049 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 546:

/* Line 1455 of yacc.c  */
#line 2050 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 2053 "../../../hphp/util/parser/hphp.y"
    { _p->onArray((yyval),(yyvsp[(2) - (3)]),T_ARRAY);;}
    break;

  case 548:

/* Line 1455 of yacc.c  */
#line 2054 "../../../hphp/util/parser/hphp.y"
    { Token t; t.reset();
                                         _p->onArray((yyval),t,T_ARRAY);;}
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 2061 "../../../hphp/util/parser/hphp.y"
    { _p->onUserAttribute((yyval),&(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 550:

/* Line 1455 of yacc.c  */
#line 2063 "../../../hphp/util/parser/hphp.y"
    { _p->onUserAttribute((yyval),  0,(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 551:

/* Line 1455 of yacc.c  */
#line 2066 "../../../hphp/util/parser/hphp.y"
    { user_attribute_check(_p);;}
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 2068 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 553:

/* Line 1455 of yacc.c  */
#line 2071 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 2074 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 2075 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 2079 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 2081 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 2085 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (2)]);;}
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 2086 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(3) - (4)]);;}
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 2090 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 2091 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 2095 "../../../hphp/util/parser/hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 2096 "../../../hphp/util/parser/hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));;}
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 2101 "../../../hphp/util/parser/hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));;}
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 2102 "../../../hphp/util/parser/hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));;}
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 2106 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 2107 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 2108 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 2109 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 2110 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 2111 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 2112 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 2115 "../../../hphp/util/parser/hphp.y"
    { _p->onStaticMember((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 2117 "../../../hphp/util/parser/hphp.y"
    { _p->onCall((yyval),1,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL);;}
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 2118 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 2122 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 2123 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 2124 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 2125 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 2127 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 2129 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 582:

/* Line 1455 of yacc.c  */
#line 2131 "../../../hphp/util/parser/hphp.y"
    { _p->onCall((yyval),1,(yyvsp[(1) - (4)]),(yyvsp[(3) - (4)]),NULL);;}
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 2132 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 2136 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 2137 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 586:

/* Line 1455 of yacc.c  */
#line 2138 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 587:

/* Line 1455 of yacc.c  */
#line 2144 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectMethodCall((yyval),(yyvsp[(1) - (7)]),(yyvsp[(3) - (7)]),(yyvsp[(6) - (7)]));;}
    break;

  case 588:

/* Line 1455 of yacc.c  */
#line 2147 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectMethodCall((yyval),(yyvsp[(1) - (6)]),(yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]));;}
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 2150 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectMethodCall((yyval),(yyvsp[(1) - (8)]),(yyvsp[(4) - (8)]),(yyvsp[(7) - (8)]));;}
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 2153 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectMethodCall((yyval),(yyvsp[(2) - (9)]),(yyvsp[(5) - (9)]),(yyvsp[(8) - (9)]));;}
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 2156 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectMethodCall((yyval),(yyvsp[(2) - (8)]),(yyvsp[(5) - (8)]),(yyvsp[(7) - (8)]));;}
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 2159 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectMethodCall((yyval),(yyvsp[(2) - (10)]),(yyvsp[(6) - (10)]),(yyvsp[(9) - (10)]));;}
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 2166 "../../../hphp/util/parser/hphp.y"
    { _p->onCall((yyval),0,(yyvsp[(3) - (7)]),(yyvsp[(6) - (7)]),&(yyvsp[(1) - (7)]));;}
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 2170 "../../../hphp/util/parser/hphp.y"
    { _p->onCall((yyval),1,(yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]),&(yyvsp[(1) - (6)]));;}
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 2174 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 2176 "../../../hphp/util/parser/hphp.y"
    { _p->onIndirectRef((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 2181 "../../../hphp/util/parser/hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));;}
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 2182 "../../../hphp/util/parser/hphp.y"
    { _p->onRefDim((yyval), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));;}
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 2183 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 2186 "../../../hphp/util/parser/hphp.y"
    { _p->onSimpleVariable((yyval), (yyvsp[(1) - (1)]));;}
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 2187 "../../../hphp/util/parser/hphp.y"
    { _p->onDynamicVariable((yyval), (yyvsp[(3) - (4)]), 0);;}
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 2190 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 2191 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 2195 "../../../hphp/util/parser/hphp.y"
    { (yyval) = 1;;}
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 2196 "../../../hphp/util/parser/hphp.y"
    { (yyval)++;;}
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 2200 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 2201 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 2202 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 2203 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 2206 "../../../hphp/util/parser/hphp.y"
    { _p->onStaticMember((yyval),(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 2207 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 2211 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 2213 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 2215 "../../../hphp/util/parser/hphp.y"
    { _p->onObjectProperty((yyval),(yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 2216 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 2220 "../../../hphp/util/parser/hphp.y"
    { _p->onAListVar((yyval),&(yyvsp[(1) - (2)]),NULL);;}
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 2221 "../../../hphp/util/parser/hphp.y"
    { _p->onAListVar((yyval),&(yyvsp[(1) - (3)]),&(yyvsp[(3) - (3)]));;}
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 2223 "../../../hphp/util/parser/hphp.y"
    { _p->onAListSub((yyval),&(yyvsp[(1) - (6)]),(yyvsp[(5) - (6)]));;}
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 2224 "../../../hphp/util/parser/hphp.y"
    { _p->onAListVar((yyval),NULL,NULL);;}
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 2225 "../../../hphp/util/parser/hphp.y"
    { _p->onAListVar((yyval),NULL,&(yyvsp[(1) - (1)]));;}
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 2226 "../../../hphp/util/parser/hphp.y"
    { _p->onAListSub((yyval),NULL,(yyvsp[(3) - (4)]));;}
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 2231 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 2232 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset();;}
    break;

  case 625:

/* Line 1455 of yacc.c  */
#line 2236 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]),0);;}
    break;

  case 626:

/* Line 1455 of yacc.c  */
#line 2237 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]),0);;}
    break;

  case 627:

/* Line 1455 of yacc.c  */
#line 2238 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),0);;}
    break;

  case 628:

/* Line 1455 of yacc.c  */
#line 2239 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,  0,(yyvsp[(1) - (1)]),0);;}
    break;

  case 629:

/* Line 1455 of yacc.c  */
#line 2242 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (6)]),&(yyvsp[(3) - (6)]),(yyvsp[(6) - (6)]),1);;}
    break;

  case 630:

/* Line 1455 of yacc.c  */
#line 2244 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),&(yyvsp[(1) - (4)]),  0,(yyvsp[(4) - (4)]),1);;}
    break;

  case 631:

/* Line 1455 of yacc.c  */
#line 2245 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,&(yyvsp[(1) - (4)]),(yyvsp[(4) - (4)]),1);;}
    break;

  case 632:

/* Line 1455 of yacc.c  */
#line 2246 "../../../hphp/util/parser/hphp.y"
    { _p->onArrayPair((yyval),  0,  0,(yyvsp[(2) - (2)]),1);;}
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 2251 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 2252 "../../../hphp/util/parser/hphp.y"
    { _p->onEmptyCollection((yyval));;}
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 2256 "../../../hphp/util/parser/hphp.y"
    { _p->onCollectionPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 2257 "../../../hphp/util/parser/hphp.y"
    { _p->onCollectionPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]));;}
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 2258 "../../../hphp/util/parser/hphp.y"
    { _p->onCollectionPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 2259 "../../../hphp/util/parser/hphp.y"
    { _p->onCollectionPair((yyval),  0,  0,(yyvsp[(1) - (1)]));;}
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 2264 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);;}
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 2265 "../../../hphp/util/parser/hphp.y"
    { _p->onEmptyCollection((yyval));;}
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 2270 "../../../hphp/util/parser/hphp.y"
    { _p->onCollectionPair((yyval),&(yyvsp[(1) - (5)]),&(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 2272 "../../../hphp/util/parser/hphp.y"
    { _p->onCollectionPair((yyval),&(yyvsp[(1) - (3)]),  0,(yyvsp[(3) - (3)]));;}
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 2274 "../../../hphp/util/parser/hphp.y"
    { _p->onCollectionPair((yyval),  0,&(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 2275 "../../../hphp/util/parser/hphp.y"
    { _p->onCollectionPair((yyval),  0,  0,(yyvsp[(1) - (1)]));;}
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 2279 "../../../hphp/util/parser/hphp.y"
    { _p->addEncap((yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), -1);;}
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 2281 "../../../hphp/util/parser/hphp.y"
    { _p->addEncap((yyval), &(yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), 0);;}
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 2282 "../../../hphp/util/parser/hphp.y"
    { _p->addEncap((yyval), NULL, (yyvsp[(1) - (1)]), -1);;}
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 2284 "../../../hphp/util/parser/hphp.y"
    { _p->addEncap((yyval), NULL, (yyvsp[(1) - (2)]), 0);
                                         _p->addEncap((yyval), &(yyval), (yyvsp[(2) - (2)]), -1); ;}
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 2289 "../../../hphp/util/parser/hphp.y"
    { _p->onSimpleVariable((yyval), (yyvsp[(1) - (1)]));;}
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 2291 "../../../hphp/util/parser/hphp.y"
    { _p->encapRefDim((yyval), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));;}
    break;

  case 651:

/* Line 1455 of yacc.c  */
#line 2293 "../../../hphp/util/parser/hphp.y"
    { _p->encapObjProp((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 2295 "../../../hphp/util/parser/hphp.y"
    { _p->onDynamicVariable((yyval), (yyvsp[(2) - (3)]), 1);;}
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 2297 "../../../hphp/util/parser/hphp.y"
    { _p->encapArray((yyval), (yyvsp[(2) - (6)]), (yyvsp[(4) - (6)]));;}
    break;

  case 654:

/* Line 1455 of yacc.c  */
#line 2298 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(2) - (3)]);;}
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 2301 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = T_STRING;;}
    break;

  case 656:

/* Line 1455 of yacc.c  */
#line 2302 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = T_NUM_STRING;;}
    break;

  case 657:

/* Line 1455 of yacc.c  */
#line 2303 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval) = T_VARIABLE;;}
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 2307 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(3) - (4)]),T_ISSET,1);;}
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 2308 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(3) - (4)]),T_EMPTY,1);;}
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 2309 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_INCLUDE,1);;}
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 2310 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_INCLUDE_ONCE,1);;}
    break;

  case 662:

/* Line 1455 of yacc.c  */
#line 2311 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(3) - (4)]),T_EVAL,1);;}
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 2312 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_REQUIRE,1);;}
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 2313 "../../../hphp/util/parser/hphp.y"
    { UEXP((yyval),(yyvsp[(2) - (2)]),T_REQUIRE_ONCE,1);;}
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 2317 "../../../hphp/util/parser/hphp.y"
    { _p->onExprListElem((yyval), NULL, (yyvsp[(1) - (1)]));;}
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 2318 "../../../hphp/util/parser/hphp.y"
    { _p->onExprListElem((yyval), &(yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));;}
    break;

  case 667:

/* Line 1455 of yacc.c  */
#line 2323 "../../../hphp/util/parser/hphp.y"
    { _p->onClassConst((yyval), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), 0);;}
    break;

  case 668:

/* Line 1455 of yacc.c  */
#line 2331 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p);
                                         _p->onTypedef((yyval), (yyvsp[(2) - (5)]), (yyvsp[(4) - (5)])); ;}
    break;

  case 669:

/* Line 1455 of yacc.c  */
#line 2336 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 670:

/* Line 1455 of yacc.c  */
#line 2337 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 671:

/* Line 1455 of yacc.c  */
#line 2343 "../../../hphp/util/parser/hphp.y"
    { _p->pushTypeScope(); (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 672:

/* Line 1455 of yacc.c  */
#line 2347 "../../../hphp/util/parser/hphp.y"
    { _p->pushTypeScope(); (yyval) = (yyvsp[(1) - (4)]);
                                         only_in_strict_mode(_p); ;}
    break;

  case 673:

/* Line 1455 of yacc.c  */
#line 2354 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 674:

/* Line 1455 of yacc.c  */
#line 2355 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 677:

/* Line 1455 of yacc.c  */
#line 2364 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 678:

/* Line 1455 of yacc.c  */
#line 2365 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 679:

/* Line 1455 of yacc.c  */
#line 2366 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 2367 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 681:

/* Line 1455 of yacc.c  */
#line 2371 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 2372 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval) = (yyvsp[(2) - (2)]); ;}
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 2376 "../../../hphp/util/parser/hphp.y"
    { _p->addTypeVar((yyvsp[(1) - (3)]).text()); ;}
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 2377 "../../../hphp/util/parser/hphp.y"
    { _p->addTypeVar((yyvsp[(1) - (1)]).text()); ;}
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 2381 "../../../hphp/util/parser/hphp.y"
    { _p->addTypeVar((yyvsp[(1) - (5)]).text()); ;}
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 2382 "../../../hphp/util/parser/hphp.y"
    { _p->addTypeVar((yyvsp[(1) - (3)]).text()); ;}
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 2389 "../../../hphp/util/parser/hphp.y"
    { validate_shape_keyname((yyvsp[(1) - (3)]), _p); ;}
    break;

  case 692:

/* Line 1455 of yacc.c  */
#line 2400 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]); ;}
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 2402 "../../../hphp/util/parser/hphp.y"
    {;}
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 2406 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p);
                                         (yyval).setText("array"); ;}
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 2414 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval).reset(); ;}
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 2415 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval).reset(); ;}
    break;

  case 697:

/* Line 1455 of yacc.c  */
#line 2416 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (2)]);
                                         /* if the type annotation is a bound
                                            typevar we have to strip it */
                                         if (_p->scanner().isStrictMode() &&
                                             (_p->isTypeVar((yyval).text()) ||
                                              !(yyval).text().compare("mixed") ||
                                              !(yyval).text().compare("this")
                                             )) {
                                           (yyval).reset();
                                         }
                                       ;}
    break;

  case 698:

/* Line 1455 of yacc.c  */
#line 2427 "../../../hphp/util/parser/hphp.y"
    { (yyval).setText("array"); ;}
    break;

  case 699:

/* Line 1455 of yacc.c  */
#line 2428 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 2430 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p);
                                         (yyval).setText("array"); ;}
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 2433 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p);
                                         (yyval).setText("array"); ;}
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 2435 "../../../hphp/util/parser/hphp.y"
    { (yyvsp[(1) - (1)]).xhpLabel(); (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 2438 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p); (yyval).reset(); ;}
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 2439 "../../../hphp/util/parser/hphp.y"
    { only_in_strict_mode(_p);
                                        (yyval).setText("array"); ;}
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 2444 "../../../hphp/util/parser/hphp.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 2445 "../../../hphp/util/parser/hphp.y"
    { (yyval).reset(); ;}
    break;



/* Line 1455 of yacc.c  */
#line 10378 "hphp.tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, _p, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (&yylloc, _p, yymsg);
	  }
	else
	  {
	    yyerror (&yylloc, _p, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc, _p);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, _p);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, _p, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc, _p);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, _p);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
  YYSTACK_CLEANUP;
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 2448 "../../../hphp/util/parser/hphp.y"

bool Parser::parseImpl() {
  return yyparse(this) == 0;
}

