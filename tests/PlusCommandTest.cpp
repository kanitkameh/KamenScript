#include"PlusCommand.h"
#include<vector>
#include<gtest/gtest.h>
TEST(PlusCommandTest,givenTwoPositiveRationalNumbersSumThem){
	PlusCommand obj;
	vector<string> args;
	args.push_back("3.14");
	args.push_back("2");
	ASSERT_EQ(obj.execute(args),"5.14");
}
TEST(PlusCommandTest,givenTwoPositiveWholeNumbersSumThem){
	PlusCommand obj;
	vector<string> args;
	args.push_back("3");
	args.push_back("2");
	ASSERT_EQ(obj.execute(args),"5");
}
TEST(PlusCommandTest,givenMultiplePositiveWholeNumbersSumThem){
	PlusCommand obj;
	vector<string> args;
	args.push_back("11");
	args.push_back("4");
	args.push_back("5");
	args.push_back("2");
	ASSERT_EQ(obj.execute(args),"22");
}
TEST(PlusCommandTest,givenMultiplePositiveRationalNumbersSumThem){
	PlusCommand obj;
	vector<string> args;
	args.push_back("11.2");
	args.push_back("4.1");
	args.push_back("5");
	args.push_back("2.5");
	ASSERT_EQ(obj.execute(args),"22.8");
}
