#pragma once
#include <string>
#include <vector>

using namespace std;

const int DEFAULT_STACK_SIZE = 10000;

class eStack
{
private:
	typedef struct myLL {
		string data;
		myLL* next;
	} stackLL;
	myLL* head;
	myLL* curr;
	int stackCt; //no of elements in stack
	string smallestEntry;
	static eStack* localSt;
	eStack(int stLimit = DEFAULT_STACK_SIZE);
	~eStack(void);
	bool stackSizeLimit;  
	bool stackLimitReached;
	int stackSize; //max size allowed in stack. total no of elements should not exceed this number.
	//bool myKeepAndDelete(myLL* head,int nodes2keep,int nodes2del);

public:
	//eStack(void);
	static eStack* initStack(const int myStSize = DEFAULT_STACK_SIZE);
	static void deleteStack();
	void disableStackLimit();
	bool push(string data2push);//use this to add to stack.
	string pop();//use this to remove top element from stack.
	string getTopElem();
	int getStackCt();
	void cleanUpStack();
	bool findElem(const string &elem2find);
	bool deleteElem(const string &elem2del);
	bool sortStack();
	myLL* getLowest(myLL* start);
	void swapNodes(myLL* &node1,myLL* &node2);
	bool keepAndDeleteNodes(int numNodes2keep,int numNodes2del);
	bool deleteNodes(int delStart,int delEnd);
	void removeDups();
	
};

