/* File: parser.y
 * --------------
 * Bison input file to generate the parser for the compiler.
 *
 * pp2: your job is to write a parser that will construct the parse tree
 *      and if no parse errors were found, print it.  The parser should
 *      accept the language as described in specification, and as augmented
 *      in the pp2 handout.
 */

%{

/* Just like lex, the text within this first region delimited by %{ and %}
 * is assumed to be C/C++ code and will be copied verbatim to the y.tab.c
 * file ahead of the definitions of the yyparse() function. Add other header
 * file inclusions or C++ variable declarations/prototypes that are needed
 * by your code here.
 */
#include "scanner.h" // for yylex
#include "parser.h"
#include "errors.h"
#include <stdio.h>

void yyerror(const char *msg); // standard error-handling routine

%}

/* The section before the first %% is the Definitions section of the yacc
 * input file. Here is where you declare tokens and types, add precedence
 * and associativity options, and so on.
 */

/* yylval
 * ------
 * Here we define the type of the yylval global variable that is used by
 * the scanner to store attibute information about the token just scanned
 * and thus communicate that information to the parser.
 *
 * pp2: You will need to add new fields to this union as you add different
 *      attributes to your non-terminal symbols.
 */
%union {
    int integerConstant;
    bool boolConstant;
    float floatConstant;
    char identifier[MaxIdentLen+1]; // +1 for terminating null
    Decl *decl;
		VarDecl *varDecl;
		FnDecl *fnDecl;
    List<Decl*> *declList;
		List<VarDecl*> *vDeclList;
		List<Stmt*> *stmtList;
		List<Expr*> *expList;
		List<Case*> *caseList;

    Identifier *id;
    Expr *exp;
		Call *call;
		Stmt *stmt;
		Type *type;
		TypeQualifier *typeQual;
		Operator *op;
		Case *caseLabel;
		Default *def;
}


/* Tokens
 * ------
 * Here we tell yacc about all the token types that we are using.
 * Bison will assign unique numbers to these and export the #define
 * in the generated y.tab.h header file.
 */
%token   T_Void T_Bool T_Int T_Float
%token   T_LessEqual T_GreaterEqual T_EQ T_NE T_LeftAngle T_RightAngle
%token   T_And T_Or
%token   T_Equal T_MulAssign T_DivAssign T_AddAssign T_SubAssign
%token   T_While T_For T_If T_Else T_Return T_Break
%token   T_Const T_Uniform T_Layout T_Continue T_Do
%token   T_Inc T_Dec T_Switch T_Case T_Default
%token   T_In T_Out T_InOut
%token   T_Mat2 T_Mat3 T_Mat4 T_Vec2 T_Vec3 T_Vec4
%token   T_Ivec2 T_Ivec3 T_Ivec4 T_Bvec2 T_Bvec3 T_Bvec4
%token   T_Uint T_Uvec2 T_Uvec3 T_Uvec4 T_Struct
%token   T_Semicolon T_Dot T_Colon T_Question T_Comma
%token   T_Dash T_Plus T_Star T_Slash
%token   T_LeftParen T_RightParen T_LeftBracket T_RightBracket T_LeftBrace T_RightBrace

%token   <identifier> T_Identifier
%token   <integerConstant> T_IntConstant
%token   <floatConstant> T_FloatConstant
%token   <boolConstant> T_BoolConstant

/* Non-terminal types
 * ------------------
 * In order for yacc to assign/access the correct field of $$, $1, we
 * must to declare which field is appropriate for the non-terminal.
 * As an example, this first type declaration establishes that the DeclList
 * non-terminal uses the field named "declList" in the yylval union. This
 * means that when we are setting $$ for a reduction for DeclList ore reading
 * $n which corresponds to a DeclList nonterminal we are accessing the field
 * of the union named "declList" which is of type List<Decl*>.
 * pp2: You'll need to add many of these of your own.
 */
%type <declList>  DeclList
%type <decl>      declaration
%type <exp>       primary_expression postfix_expression
%type <call>			function_call_generic 
%type <call>      function_call_header_no_parameters 
%type <call>      function_call_header_with_parameters
%type <call>      function_call_header
%type <id>				function_identifier
%type <expList>		expression_list
%type <exp>				unary_expression
%type <op>				unary_operator
%type <exp>				multiplicative_expression
%type <exp>				additive_expression
%type <exp>				relational_expression
%type <exp>				equality_expression
%type <exp>				logical_and_expression
%type <exp>				logical_or_expression
%type <exp>				conditional_expression
%type <exp>				assignment_expression
%type <op>				assignment_operator
%type <fnDecl>		function_prototype
%type <fnDecl>		function_declarator
%type <fnDecl>		function_header
%type <fnDecl>		function_header_with_parameters
%type <vDeclList>	parameter_list
%type <varDecl>		single_declaration
%type <typeQual>	type_qualifier
%type <type>			type_specifier
%type <exp>				array_specifier
%type <type>			type_specifier_nonarray
%type <exp>				declaration_statement
%type <stmt>			statement
%type <stmt>			simple_statement
%type <stmt>			compound_statement
%type <vDeclList>	var_decl_list
%type <stmtList>	statement_list
%type <exp>				expression_statement
%type <stmt>			selection_statement
%type <exp>				condition
%type <stmt>			switch_statement
%type <caseList>	case_list
%type <caseLabel>	case_label
%type <def>				default
%type <stmt>			iteration_statement
%type <exp> 			for_init_statement
%type <exp>				conditionopt
%type <exp> 			for_cond_statement
%type <stmt>			jump_statement
%type <declList>	translation_unit
%type <decl>			external_declaration
%type <fnDecl>		function_definition


%%
/* Rules
 * -----
 * All productions and actions should be placed between the start and stop
 * %% markers which delimit the Rules section.
 */

Program:    
  DeclList {
    @1;
    /* pp2: The @1 is needed to convince yacc to set up yylloc. You can remove
     * it once you have other uses of @n */
    Program *program = new Program($1);
    // If no errors, advance to next phase
    if (ReportError::NumErrors() == 0)
      program->Print(0);
  }
;

DeclList  :    
  DeclList declaration { ($$=$1)->Append($2); }
  | declaration { ($$ = new List<Decl*>)->Append($1); }
;

primary_expression: 
  T_Identifier { 
    Identifier *id = new Identifier(@1, $1);
    $$ = new VarExpr(@1, id); 
  } 
  | T_IntConstant { $$ = new IntConstant(@1,$1); }
  | T_FloatConstant { $$ = new FloatConstant(@1,$1); }
  | T_BoolConstant { $$ = new BoolConstant(@1,$1); }
  | T_LeftParen assignment_expression T_RightParen { $$ = $2; }
;

postfix_expression: 
  primary_expression { $$ = $1; }
  | postfix_expression T_LeftBracket assignment_expression T_RightBracket {
	  $$ = new ArrayAccess(@1, $1, $3);
	}
  | function_call_generic { $$ = $1; }
  | postfix_expression T_Dot T_Identifier {
	  $$ = new FieldAccess($1, new Identifier(@3,$3));
	}
  | postfix_expression T_Inc { 
	  Operator *op = new Operator(@2, "++");
	  $$ = new PostfixExpr($1, op);
	}
  | postfix_expression T_Dec {
	  Operator *op = new Operator(@2, "--");
		$$ = new PostfixExpr($1, op);
	}
;       

function_call_generic: 
  function_call_header_with_parameters T_RightParen { $$ = $1; }
  | function_call_header_no_parameters T_RightParen { $$ = $1; }
;

function_call_header_no_parameters: 
  function_call_header T_Void { $$ = $1; }
  | function_call_header { $$ = $1; }
;

function_call_header_with_parameters: 
	function_identifier T_LeftParen expression_list {
	  $$ = new Call(@1, NULL, $1, $3);
	}
;

function_call_header: 
  function_identifier T_LeftParen { 
	  $$ = new Call(@1, NULL, $1, new List<Expr*>);
	}
;

function_identifier: 
  T_Identifier { $$ = new Identifier(@1, $1); }
;

expression_list:
  assignment_expression { ($$ = new List<Expr*>)->Append($1); }
	| expression_list T_Comma assignment_expression { ($$=$1)->Append($3); }
;

unary_expression: 
  postfix_expression { $$ = $1; }
  | T_Inc unary_expression { 
	  Operator *op = new Operator(@1, "++");
	  $$ = new ArithmeticExpr(op, $2);
	}
  | T_Dec unary_expression {
	  Operator *op = new Operator(@1, "--");
	  $$ = new ArithmeticExpr(op, $2);
	}
  | unary_operator unary_expression {
	  $$ = new ArithmeticExpr($1, $2);
	}
;

unary_operator: 
  T_Plus { $$ = new Operator(@1, "+"); }
  | T_Dash { $$ = new Operator(@1, "-"); }
;

multiplicative_expression: 
  unary_expression { $$ = $1; }
  | multiplicative_expression T_Star unary_expression {
	  Operator *op = new Operator(@2, "*");
		$$ = new ArithmeticExpr($1, op, $3);
	}
  | multiplicative_expression T_Slash unary_expression {
	  Operator *op = new Operator(@2, "/");
		$$ = new ArithmeticExpr($1, op, $3);
	}
;

additive_expression: 
  multiplicative_expression { $$ = $1; }
  | additive_expression T_Plus multiplicative_expression {
	  Operator *op = new Operator(@2, "+");
		$$ = new ArithmeticExpr($1, op, $3);
	}
  | additive_expression T_Dash multiplicative_expression {
	  Operator *op = new Operator(@2, "-");
		$$ = new ArithmeticExpr($1, op, $3);
	}
;

relational_expression: 
  additive_expression { $$ = $1; }
  | relational_expression T_LeftAngle additive_expression {
	  Operator *op = new Operator(@2, "<");
		$$ = new RelationalExpr($1, op, $3);
	}
  | relational_expression T_RightAngle additive_expression {
	  Operator *op = new Operator(@2, ">");
		$$ = new RelationalExpr($1, op, $3);
	}
  | relational_expression T_LessEqual additive_expression {
	  Operator *op = new Operator(@2, "<=");
		$$ = new RelationalExpr($1, op, $3);
	}
  | relational_expression T_GreaterEqual additive_expression {
	  Operator *op = new Operator(@2, ">=");
		$$ = new RelationalExpr($1, op, $3);
	}
;

equality_expression: 
  relational_expression { $$ = $1; }
  | equality_expression T_EQ relational_expression {
	  Operator *op = new Operator(@2, "==");
		$$ = new EqualityExpr($1, op, $3);
	}
  | equality_expression T_NE relational_expression {
	  Operator *op = new Operator(@2, "!=");
		$$ = new EqualityExpr($1, op, $3);
	}
;                                                                      

logical_and_expression:
  equality_expression { $$ = $1; }
  | logical_and_expression T_And equality_expression {
	  Operator *op = new Operator(@2, "&&");
		$$ = new LogicalExpr($1, op, $3);
	}
;

logical_or_expression:
  logical_and_expression { $$ = $1; }
  | logical_or_expression T_Or logical_and_expression {
	  Operator *op = new Operator(@2, "||");
	  $$ = new LogicalExpr($1, op, $3);
	}
;

conditional_expression:
  logical_or_expression { $$ = $1; }
  | logical_or_expression T_Question assignment_expression T_Colon assignment_expression {
	  $$ = new SelectionExpr($1, $3, $5);
	}
;

assignment_expression:
  conditional_expression { $$ = $1; }
  | unary_expression assignment_operator assignment_expression {
    $$ = new AssignExpr($1, $2, $3);
  }
;

assignment_operator:
  T_Equal { $$ = new Operator(@1, "="); }
  | T_MulAssign { $$ = new Operator(@1, "*="); }
  | T_DivAssign { $$ = new Operator(@1, "/="); }
  | T_AddAssign { $$ = new Operator(@1, "+="); }
  | T_SubAssign { $$ = new Operator(@1, "-="); }
;

declaration:
  function_prototype T_Semicolon { $$ = $1;	}
	| function_definition { $$ = $1; }
 |single_declaration { $$ = $1; }
;

function_prototype:
  function_declarator T_RightParen { $$ = $1; }
;

function_declarator:
  function_header { $$ = $1; }
  | function_header_with_parameters { $$ = $1; }
;

function_header_with_parameters:
  type_specifier T_Identifier T_LeftParen parameter_list {
	  Identifier *id = new Identifier(@2, $2);
		$$ = new FnDecl(id, $1, $4);
	}
	| type_qualifier type_specifier T_Identifier T_LeftParen parameter_list	{
    Identifier *id = new Identifier(@3, $3);
		$$ = new FnDecl(id, $2, $1, $5);
	}
;

function_header:
  type_specifier T_Identifier T_LeftParen {
	  Identifier *id = new Identifier(@2, $2);
		$$ = new FnDecl(id, $1, new List<VarDecl*>);
	}
	| type_qualifier type_specifier T_Identifier T_LeftParen {
	  Identifier *id = new Identifier(@3, $3);
	  $$ = new FnDecl(id, $2, $1, new List<VarDecl*>);
	}
;

parameter_list:
  type_specifier T_Identifier {
	  Identifier *id = new Identifier(@2, $2);
		VarDecl *var = new VarDecl(id, $1);
		List<VarDecl*> *list = new List<VarDecl*>();
		list->Append(var);
    $$ = list;
	}
	| parameter_list T_Comma type_specifier T_Identifier {
	  Identifier *id = new Identifier(@4, $4);
		VarDecl *var = new VarDecl(id, $3);
    ($$=$1)->Append(var);
	}
;

single_declaration:
  type_specifier T_Identifier T_Semicolon {
    Identifier *id = new Identifier(@2,$2);
    $$ = new VarDecl(id,$1);
  } 
  | type_qualifier type_specifier T_Identifier T_Semicolon{
    Identifier *id = new Identifier(@3, $3);
    $$ = new VarDecl(id, $2, $1);
  }
  | type_specifier T_Identifier array_specifier T_Semicolon {
	  Identifier *id = new Identifier(@2, $2);
		ArrayType *type = new ArrayType(@1, $1);
		$$ = new VarDecl(id, type);
	}
	| type_qualifier type_specifier T_Identifier array_specifier T_Semicolon {
	  Identifier *id = new Identifier (@3, $3);
		ArrayType *type = new ArrayType(@2, $2);
		$$ = new VarDecl(id, type, $1);
	}
  | type_specifier T_Identifier T_Equal assignment_expression T_Semicolon {
	  Identifier *id = new Identifier (@2, $2);
		$$ = new VarDecl(id, $1, $4);
	}
	| type_qualifier type_specifier T_Identifier T_Equal assignment_expression T_Semicolon {
	  Identifier *id = new Identifier (@3, $3);
		$$ = new VarDecl(id, $2, $1, $5);
	}
;

type_qualifier:
  T_Const { $$ = TypeQualifier::constTypeQualifier; }
  | T_In { $$ = TypeQualifier::inTypeQualifier; }
  | T_Out { $$ = TypeQualifier::outTypeQualifier; }
  | T_Uniform { $$ = TypeQualifier::uniformTypeQualifier; }
;

type_specifier:
  type_specifier_nonarray { 
    $$ = new Type(*$1); 
  }
  | type_specifier_nonarray array_specifier {
	  $$ = new ArrayType(@1, $1);
	}
;

array_specifier:
  T_LeftBracket conditional_expression T_RightBracket { $$ = $2; }
;

type_specifier_nonarray:
  T_Void { $$ = Type::voidType; }
  | T_Float { $$ = Type::floatType; }
  | T_Int { $$ = Type::intType; }
  | T_Uint { $$ = Type::uintType; }
  | T_Bool { $$ = Type::boolType; }
  | T_Vec2 { $$ = Type::vec2Type; }
  | T_Vec3 { $$ = Type::vec3Type; }
  | T_Vec4 { $$ = Type::vec4Type; }
  | T_Bvec2 { $$ = Type::bvec2Type; }
  | T_Bvec3 { $$ = Type::bvec3Type; }
  | T_Bvec4 { $$ = Type::bvec4Type; }
  | T_Ivec2 { $$ = Type::ivec2Type; }
  | T_Ivec3 { $$ = Type::ivec3Type; }
  | T_Ivec4 { $$ = Type::ivec4Type; }
  | T_Uvec2 { $$ = Type::uvec2Type; }
  | T_Uvec3 { $$ = Type::uvec3Type; }
  | T_Uvec4 { $$ = Type::uvec4Type; }
  | T_Mat2 { $$ = Type::mat2Type; }
  | T_Mat3 { $$ = Type::mat3Type; }
  | T_Mat4 { $$ = Type::mat4Type; }
;

declaration_statement:
  assignment_expression { $$ = $1; }
;

statement:
  compound_statement { $$ = $1; }
  | simple_statement { $$ = $1; }
;

simple_statement:
  declaration_statement { $$ = $1; }
  | expression_statement { $$ = $1; }
  | selection_statement { $$ = $1; }
  | switch_statement { $$ = $1; }
  //| case_label { $$ = $1; }
  | iteration_statement { $$ = $1; }
  | jump_statement { $$ = $1; }
;

compound_statement:
  T_LeftBrace T_RightBrace {
	  $$ = new StmtBlock(new List<VarDecl*>, new List<Stmt*>);
	}
  | T_LeftBrace statement_list T_RightBrace {
	  $$ = new StmtBlock(new List<VarDecl*>, $2);
	}
	| T_LeftBrace var_decl_list T_RightBrace {
	  $$ = new StmtBlock($2, new List<Stmt*>);
	}
	| T_LeftBrace var_decl_list statement_list T_RightBrace {
	  $$ = new StmtBlock($2, $3);
	}
;

var_decl_list:
  var_decl_list single_declaration { 
    ($$ = $1)->Append($2); 
  }
  | { $$ = new List<VarDecl*>; }
; 

statement_list:
    statement { ($$ = new List<Stmt*>)->Append($1); }
  | statement_list statement { ($$=$1)->Append($2); }
;

expression_statement:
  T_Semicolon { $$ = new EmptyExpr(); }
  | assignment_expression T_Semicolon { $$ = $1; }
;

selection_statement:
  T_If T_LeftParen assignment_expression T_RightParen statement {
	  $$ = new IfStmt($3, $5, new EmptyExpr());
	}
	| T_If T_LeftParen assignment_expression T_RightParen statement T_Else statement {
	  $$ = new IfStmt($3, $5, $7);
	}
;

condition:
  assignment_expression { $$ = $1; }
;

switch_statement:
  T_Switch T_LeftParen assignment_expression T_RightParen T_LeftBrace case_list default T_RightBrace {
	  $$ = new SwitchStmt($3, $6, $7);
  }
	| T_Switch T_LeftParen assignment_expression T_RightParen T_LeftBrace case_list T_RightBrace {
	  $$ = new SwitchStmt($3, $6, NULL);
	}
;

case_list:
  case_list case_label { ($$=$1)->Append($2); }
	| case_label { ($$ = new List<Case*>)->Append($1); }
;

case_label:
  T_Case assignment_expression T_Colon statement_list { $$ = new Case($2, $4); }
;

default:
  T_Default T_Colon statement_list { $$ = new Default($3); }
;

iteration_statement:
  T_While T_LeftParen condition T_RightParen statement {
	  $$ = new WhileStmt($3, $5);
	}
  | T_Do statement T_While T_LeftParen assignment_expression T_RightParen T_Semicolon {
	  $$ = new DoWhileStmt($2, $5);
	}
  | T_For T_LeftParen for_init_statement for_cond_statement assignment_expression T_RightParen statement {
	  $$ = new ForStmt($3, $4, $5, $7);
	}
;

for_init_statement:
  expression_statement { $$ = $1; }
  | declaration_statement { $$ = $1; }
;

conditionopt:
  condition { $$ = $1; }
;

for_cond_statement:
  conditionopt T_Semicolon { $$ = $1; }
;

jump_statement:
  T_Break T_Semicolon { $$ = new BreakStmt(@1); }
  | T_Return T_Semicolon { $$ = new ReturnStmt(@1, new EmptyExpr); }
  | T_Return assignment_expression T_Semicolon { $$ = new ReturnStmt(@1, $2); }
;

translation_unit:
  external_declaration { ($$ = new List<Decl*>)->Append($1); }
  | translation_unit external_declaration { ($$=$1)->Append($2); }
;

external_declaration:
  function_definition { $$ = $1; }
  | declaration { $$ = $1; }
;

function_definition:
  function_prototype compound_statement {
	  ($$=$1)->SetFunctionBody($2);
	}
;

%%

/* The closing %% above marks the end of the Rules section and the beginning
 * of the User Subroutines section. All text from here to the end of the
 * file is copied verbatim to the end of the generated y.tab.c file.
 * This section is where you put definitions of helper functions.
 */

/* Function: InitParser
 * --------------------
 * This function will be called before any calls to yyparse().  It is designed
 * to give you an opportunity to do anything that must be done to initialize
 * the parser (set global variables, configure starting state, etc.). One
 * thing it already does for you is assign the value of the global variable
 * yydebug that controls whether yacc prints debugging information about
 * parser actions (shift/reduce) and contents of state stack during parser.
 * If set to false, no information is printed. Setting it to true will give
 * you a running trail that might be helpful when debugging your parser.
 * Please be sure the variable is set to false when submitting your final
 * version.
 */
void InitParser()
{
   PrintDebug("parser", "Initializing parser");
   yydebug = false;
}
