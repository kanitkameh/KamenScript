#ifndef PLUSCOMMAND_H
#define PLUSCOMMAND_H
#include"Command.h"
class PlusCommand : public Command {
public:
	virtual string execute(vector<string> args);
};


#endif /* PLUSCOMMAND_H */
