#ifndef IFCOMMAND_H
#define IFCOMMAND_H
#include"Command.h"
class IfCommand : public Command{
public:
	virtual string execute(vector<string> args);
};


#endif /* IFCOMMAND_H */
