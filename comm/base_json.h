#ifndef _BASE_JSON_H_
#define _BASE_JSON_H_

#include <iostream>
#include <string>
#include <json/json.h>

int serialize(Json::Value& _v, std::string& str);
int unserialize(std::string& str, Json::Value& v);

#endif







