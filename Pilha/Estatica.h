#ifndef ESTATICA_H
#define ESTATICA_H

#include <iostream>

#define MAX_SIZE 100 

class PilhaEstatica{
	private:
	int val[MAX_SIZE];
	int top;
	
	public:
	PilhaEstatica();
	bool Empty();
	bool Full();
	void Push(int x);
	void Pop();
	int Top();
	void Clear();
	void Print();
};

#endif 