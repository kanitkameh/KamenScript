#include"EqualityCommand.h"
#include<vector>
#include<gtest/gtest.h>
TEST(EqualityCommandTest,givenTwoEqualExpressionsReturnTrue){
	EqualityCommand obj;
	vector<string> args;
	args.push_back("3");
	args.push_back("3");
	ASSERT_EQ(obj.execute(args),"true");
}
TEST(EqualityCommandTest,givenMultipleEqualExpressionsReturnTrue){
	EqualityCommand obj;
	vector<string> args;
	args.push_back("4");
	args.push_back("4");
	args.push_back("4");
	args.push_back("4");
	args.push_back("4");
	ASSERT_EQ(obj.execute(args),"true");
}
TEST(EqualityCommandTest,givenAtLeastTwoDifferentExpressionsReturnFalse){
	EqualityCommand obj;
	vector<string> args;
	args.push_back("3");
	args.push_back("3");
	args.push_back("4");
	args.push_back("3");
	ASSERT_EQ(obj.execute(args),"false");
}
