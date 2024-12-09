#ifndef DINAMIC_H
#define DINAMIC_H

#include <iostream>



class PilhaDinamica{
	private:
	struct Node{
		int val;
		Node* next;
	};
	Node* top;
	
	public:
	PilhaDinamica();
	~PilhaDinamica();
	bool Empty();
	void Push(int x);
	void Pop();
	int Top();
	void Clear();
	void Print();
};

#endif 