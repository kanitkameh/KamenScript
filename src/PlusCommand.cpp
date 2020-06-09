#include"PlusCommand.h"
#include"utils.h"

string PlusCommand::execute(vector<string> args){
	float result;
	for(int i=0;i<args.size();i++){
		result+= stringToFloat(args[i]);
	}
	return floatToString(result);
};
