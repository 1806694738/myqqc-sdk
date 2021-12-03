#pragma once



#include <string>
#include <iostream>
#include "CJsonObject.hpp"
#include <windows.h>
#include <cstdio> 
#include <fstream>
#include <regex>



#pragma comment(lib, "Wininet.lib")
using namespace std;

using json = neb::CJsonObject;
typedef const char* text;
typedef char* _text;
typedef long long llong;

class Api
{
public:
	HMODULE  hdll;
	Api ();
	~Api ();

	void Api_SendMsgEx (text QQ, int namebat, int type, text group, text Class, text msg, int id);
	void Api_OutPut (text msg);

private:
	typedef void (*_OutPut)(text);  _OutPut OutPut;
	typedef void (*_SendMsgEx)(text, int, int, text, text, text, int); _SendMsgEx SendMsgEx;
	
};

Api::Api ()
{
	
	 hdll = LoadLibrary (L"MyQQApi.DLL");
	 SendMsgEx = (_SendMsgEx)GetProcAddress (hdll, "Api_SendMsgEx");
	 OutPut = (_OutPut)GetProcAddress (hdll, "Api_OutPut");
}

Api::~Api ()
{
	FreeLibrary (hdll);
}

void Api::Api_SendMsgEx (text QQ, int namebat, int type, text group, text Class, text msg, int id) {
	

	if (SendMsgEx == NULL) {
		MessageBoxA (GetForegroundWindow (), "动态链接库指定命令\" Api_SendMsgEx\"不存在", "提示", 0);
		return ;
	}
	else
	{
		SendMsgEx (QQ, namebat, type, group, Class, msg, id);
	}

}
void Api::Api_OutPut (text msg) {



	if (OutPut == NULL) {
		MessageBoxA (GetForegroundWindow (), "动态链接库指定命令\"Api_OutPut\"不存在", "提示", 0);
		return;
	}
	else
	{
		OutPut (msg);
	}

	return;
}

Api api;
