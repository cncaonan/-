#include "data.h"

data::data()
{}


int data::str_to_serialize(std::string& out)
{
	Json::Value root;
	root["nick_name"] = nick_name;
	root["school"] = school;
	root["msg"] = msg;
	root["cmd"] = cmd;
	return serialize(root, out);
}

int data::serialize_to_str(std::string& in)
{
	Json::Value root;
	unserialize(in, root);
	nick_name = root["nick_name"].asString();
	school = root["school"].asString();
	msg = root["msg"].asString();
	cmd = root["cmd"].asString();

}

data::~data()
{}

//int main()
//{
//	data d;
//	d.nick_name = "张三";
//	d.school = "工程";
//	d.msg = "hello world";
//	d.cmd = "none";
//	std::string s;
//	d.str_to_serialize(s);
//	std::cout<<s<<std::endl;
//
//	return 0;
//}

