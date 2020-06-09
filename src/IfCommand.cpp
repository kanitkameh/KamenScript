#include"IfCommand.h"
#include"utils.h"
string IfCommand::execute(vector<string> args){
	string condition = args[0];
	return (stringToBool(condition))?args[1]:args[2];	
};

