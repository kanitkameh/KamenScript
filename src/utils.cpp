#include"utils.h"
#include"sstream"
float stringToFloat(std::string s){
	std::stringstream ss(s);
	float result;
	ss >> result;
	return result;
};
std::string floatToString(float i){
	std::ostringstream strs;
	strs << i;
	return strs.str();
};
bool stringToBool(std::string s){
	return s.compare("true")==0;
}
std::string boolToString(bool b){
	return b?"true":"false";
}
