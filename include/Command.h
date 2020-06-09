#ifndef COMMAND_H
#define COMMAND_H
#include<string>
#include<vector>

using namespace std;
class Command{
public:
	virtual string execute(vector<string> args) = 0;
};

#endif /* COMMAND_H */
