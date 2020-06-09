#ifndef EQUALITYCOMMAND_H
#define EQUALITYCOMMAND_H
#include"Command.h"
class EqualityCommand : public Command {
public:
	virtual string execute(vector<string> args);
};


#endif /* EQUALITYCOMMAND_H */
