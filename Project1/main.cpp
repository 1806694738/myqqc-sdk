
#include"MQfunc.h"


text _stdcall MQ_Info () {
	json j;
	j.Add ("name", "īī�̳�");
	j.Add ("author", "Сī");
	j.Add ("description", "���˵��");
	j.Add ("version", "1.0.0");
	j.Add ("skey", "SDG5D4Ys89h7DJ849d");
	j.Add ("sdk", "S1");
	string str = j.ToString ();

	//text j = "{ \"name\":\"īī�̳�\", \"author\" : \"ī\", \"description\" : \"���˵��\", \"version\" : \"1.0.0\", \"skey\" : \"SDG5D4Ys89h7DJ849d\", \"sdk\" : \"S1\"}";
	return str.c_str();
}

int  _stdcall MQ_Event (text a, int b,int c, text d, text e, text f, text g, text h, text i, text j, int k) {


	return 1;
}

int _stdcall MQ_End () {


	return 0;
}


int _stdcall MQ_Set () {


	return 0;
}


