
#include"MQfunc.h"


text _stdcall MQ_Info () {
	json j;
	j.Add ("name", "墨墨商城");
	j.Add ("author", "小墨");
	j.Add ("description", "插件说明");
	j.Add ("version", "1.0.0");
	j.Add ("skey", "SDG5D4Ys89h7DJ849d");
	j.Add ("sdk", "S1");
	string str = j.ToString ();

	//text j = "{ \"name\":\"墨墨商城\", \"author\" : \"墨\", \"description\" : \"插件说明\", \"version\" : \"1.0.0\", \"skey\" : \"SDG5D4Ys89h7DJ849d\", \"sdk\" : \"S1\"}";
	return str.c_str();
}

int _stdcall MQ_Event (text BotQQ, int Type,int Type1, text Group, text AdminQQ, text QQ, text Msg, text ID, text No, text Msgna, int h ){


	return 1;
}

int _stdcall MQ_End () {


	return 0;
}


int _stdcall MQ_Set () {


	return 0;
}


