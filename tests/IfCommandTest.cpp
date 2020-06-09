#include<gtest/gtest.h>
#include"IfCommand.h"
#include<vector>
TEST(IfCommandTest,givenTrueConditionInIfReturnFirstValue){
	IfCommand obj;
	vector<string> args;
	args.push_back("true");
	args.push_back("12");
	args.push_back("101");
	ASSERT_EQ(obj.execute(args),"12");
}
TEST(IfCommandTest,givenFalseConditionInIfReturnFirstValue){
	IfCommand obj;
	vector<string> args;
	args.push_back("false");
	args.push_back("12");
	args.push_back("101");
	ASSERT_EQ(obj.execute(args),"101");
}
