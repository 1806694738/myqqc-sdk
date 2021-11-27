#pragma once



#include <string>
#include <iostream>
#include "CJsonObject.hpp"
#include <windows.h>
#include <cstdio> 


#pragma comment(lib, "Wininet.lib")
using namespace std;

using json = neb::CJsonObject;
typedef const char* text;
typedef char* _text;
typedef long long llong;



void Api_SendMsgEx (text QQ, int namebat, int type, text group, text Class, text msg, int id) {
	typedef text (*Func)(text,int,int,text,text,text,int);
	HMODULE  hdll = LoadLibrary ("MyQQApi.DLL");
	Func func = (Func)GetProcAddress (hdll, "Api_SendMsgEx");

	if (func == NULL) {
		MessageBoxA (GetForegroundWindow (), "��̬���ӿ�ָ������\" Api_SendMsgEx\"������", "��ʾ", 0);
		return ;
	}
	else
	{
		func (QQ, namebat, type, group, Class, msg, id);
	}

}


