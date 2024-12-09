#ifndef DQUEUE_H
#define DQUEUE_H

#include <iostream>

using namespace std;

class Queue{
	private:
		struct Node {      
        int val;      
        Node* next;    
    };
		Node* head;
		Node* tail;
		int count;
		
	public:
	Queue();
	~Queue();
	bool Empty();
	bool Full();
	void Append(int x);
	void Serve();
	int Front();
	int Back();
	int	Size();
	void Clear();
};

#endif

