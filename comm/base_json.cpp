#include "base_json.h"

int serialize(Json::Value& _v, std::string& str)
{
#ifdef _STYLE_
	Json::StyledWriter _w;
#else
	Json::FastWriter _w;
#endif
	str = _w.write(_v);
	return 0;
}

int unserialize(std::string& str, Json::Value& _v)
{
	Json::Reader _r;
	if(_r.parse(str, _v, false)){
		return 0;
	}
	return -1;
}






