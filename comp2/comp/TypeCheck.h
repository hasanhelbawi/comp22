#pragma once
#include <iostream>
#include "AST.h"
using namespace::std;


class Type_Error_Warning{
public:

	ExpectedType expectedType;
	bool Is_Error;
	char* Error_Warning_Type;

};

class TypeCheck{
public:
	TypeCheck(void);
	~TypeCheck(void);
Type_Error_Warning * TCmultiexpr (ExpectedType first,ExpectedType second);
}; 

