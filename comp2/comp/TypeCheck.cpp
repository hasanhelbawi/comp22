#include "TypeCheck.h"
#include <fstream>
#include <iostream>
#include "stdafx.h"
#include "AST.h"
#include <string>

using namespace std;

TypeCheck::TypeCheck(void)
{
}

TypeCheck::~TypeCheck(void)
{
}




Type_Error_Warning * TypeCheck::TCmultiexpr(ExpectedType first,ExpectedType second)
{
								Type_Error_Warning *TEW=new Type_Error_Warning();

											if((first==inttype)&&(second==inttype))
											{
												TEW->expectedType=inttype;
												TEW->Is_Error=false;
												TEW->Error_Warning_Type="";
											return TEW;
											}
											else if((first==stringtype)&&(second==stringtype))
											{
												TEW->expectedType=stringtype;
												TEW->Is_Error=false;
												TEW->Error_Warning_Type="";
											return TEW;
											}
											else if((first==floattype)&&(second==floattype))
											{
												TEW->expectedType=floattype;
												TEW->Is_Error=false;
												TEW->Error_Warning_Type="";
											return TEW;
											}
											else if((first==chartype)&&(second==chartype))
											{
												TEW->expectedType=chartype;
												TEW->Is_Error=false;
												TEW->Error_Warning_Type="";
											return TEW;
											}
											else if((first==booltype)&&(second==booltype))
											{
												TEW->expectedType=booltype;
												TEW->Is_Error=false;
												TEW->Error_Warning_Type="";
											return TEW;
											}
											else if((first==errortype)&&(second==errortype))
											{
												TEW->expectedType=errortype;
												TEW->Is_Error=false;
												TEW->Error_Warning_Type="";
											return TEW;
											}



											else if(((first==inttype)&&(second==stringtype))
											||((first==stringtype)&&(second==inttype)))
											{
												TEW->expectedType=errortype;
												TEW->Is_Error=true;
												TEW->Error_Warning_Type="INT & STRING TYPE CHECK ERROR";
											return TEW;
											}
											else if (((first==inttype)&&(second==floattype))
											||((first==floattype)&&(second==inttype)))
											{
											TEW->expectedType=floattype;
												TEW->Is_Error=true;
												TEW->Error_Warning_Type="INT & FLOAT TYPR CHECK WARNING ";
											return TEW;
											}
											else if ((first==inttype)||(second==inttype))
											{
											TEW->expectedType=inttype;
												TEW->Is_Error=false;
												TEW->Error_Warning_Type="";
											return TEW;
											}

											else if (((first==floattype)&&(second==stringtype))
											||((first==stringtype)&&(second==floattype)))
											{
											TEW->expectedType=errortype;
												TEW->Is_Error=true;
												TEW->Error_Warning_Type="FLOAT & STRING TYPR CHECK ERROR ";
											return TEW;
											}
											else if (((first==floattype)&&(second==chartype))
											||((first==chartype)&&(second==floattype)))
											{
											TEW->expectedType=errortype;
												TEW->Is_Error=true;
												TEW->Error_Warning_Type="CHAR & FLOAT TYPR CHECK ERROR ";
											return TEW;
											}
											else if (((first==floattype)&&(second==booltype))
											||((first==booltype)&&(second==floattype)))
											{
											TEW->expectedType=errortype;
												TEW->Is_Error=true;
												TEW->Error_Warning_Type="BOOL & FLOAT TYPR CHECK ERROR ";
											return TEW;
											}
											else if ((first==floattype)||(second==floattype))
											{
												TEW->expectedType=floattype;
												TEW->Is_Error=false;
												TEW->Error_Warning_Type="";
											return TEW;
											}											
											

											else if (((first==stringtype)&&(second==booltype))
											||((first==booltype)&&(second==stringtype)))
											{
											TEW->expectedType=errortype;
												TEW->Is_Error=true;
												TEW->Error_Warning_Type="STRING & BOOL TYPR CHECK ERROR ";
											return TEW;
											}
											else if (((first==stringtype)&&(second==chartype))
											||((first==chartype)&&(second==stringtype)))
											{
											TEW->expectedType=errortype;
												TEW->Is_Error=true;
												TEW->Error_Warning_Type="CHAR & STRING TYPR CHECK ERROR ";
											return TEW;
											}
											else if ((first==stringtype)||(second==stringtype))
											{
												TEW->expectedType=stringtype;
												TEW->Is_Error=false;
												TEW->Error_Warning_Type=" ";
											return TEW;
											}
											


											else if (((first==booltype)&&(second==chartype))
											||((first==chartype)&&(second==booltype)))
											{
											TEW->expectedType=errortype;
												TEW->Is_Error=true;
												TEW->Error_Warning_Type="CHAR & BOOL TYPR CHECK ERROR ";
											return TEW;
											}
											else if ((first==chartype)||(second==chartype))
											{
											TEW->expectedType=chartype;
												TEW->Is_Error=false;
												TEW->Error_Warning_Type="";
											return TEW;
											}
											else if ((first==booltype)||(second==booltype))
											{
											TEW->expectedType=booltype;
												TEW->Is_Error=false;
												TEW->Error_Warning_Type="";
											return TEW;
											}

}


