#include<iostream>
#include<map>
#include<stack>
#include<string>
#include<vector>
#include<sstream>
#include"Command.h"
#include"PlusCommand.h"
#include"EqualityCommand.h"
#include"IfCommand.h"

using namespace std;

struct Node{
	string data;
	vector<Node *> children;
	bool isLeaf(){
		return children.size()==0;
	}
};

vector<string> split(const string& str)
{
   vector<string> result;
   stringstream s_stream(str); //create string stream from the string
   while(s_stream.good()) {
      string substr;
      getline(s_stream, substr, ' '); //get first string delimited by comma
      result.push_back(substr);
   }
	return result;
}

Node * generateParseTree(string s){
	vector<string> splitted = split(s);
	stack<Node *> stack;

	for(int i=0;i<splitted.size();i++){
		if(splitted[i].compare(")")==0){
			vector<Node *> nodes;
			Node * current;
			do{
				current = stack.top();
				stack.pop();
				if(current->data.compare("(")!=0)
					nodes.insert(nodes.begin(),current);
			}while(current->data.compare("(")!=0);
			Node * operation = nodes[0];
			nodes.erase(nodes.begin());
			operation->children = nodes;
			stack.push(operation);	
		} else { 
			Node * toPush = new Node();
			toPush->data = splitted[i];

			stack.push(toPush);	
		}
	}
	return stack.top();
}
//TODO
//Delete dynamically allocated memory
void freeParseTree(Node * root){

}
string evaluate(Node * root,map<string,Command *> m){
	if(root->isLeaf()){
		return root->data;
	}else{
		vector<string> args;
		for(int i=0;i<root->children.size();i++){
			args.push_back(evaluate(root->children[i],m));
		}
		return m[root->data]->execute(args);		
	}

}
void fillMap(map<string, Command *>& m){
	m.insert(m.begin(),pair<string, Command *>("+",new PlusCommand()));
	m.insert(m.begin(),pair<string, Command *>("equals", new EqualityCommand()));
	m.insert(m.begin(),pair<string, Command *>("if", new IfCommand()));
	// insert more commands here
}
int main(){
	map<string,Command *> m;
	fillMap(m);

	string s;
	getline(cin, s);

	Node * rootTree = generateParseTree(s);	

	cout << evaluate(rootTree,m);
	return 0;
}
