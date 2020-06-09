#include"EqualityCommand.h"
#include"utils.h"
string EqualityCommand::execute(vector<string> args){
	for(int i=0;i<args.size()-1;i++){
		if(args[i].compare(args[i+1])!=0){
			return boolToString(false);
		}	
	}
	return boolToString(true);
}

