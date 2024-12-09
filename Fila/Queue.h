#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

#define MAX_SIZE 100

class Queue{
	private:
	int val[MAX_SIZE];
	int head;
	int tail;
	int count;

	public:
	Queue();
	bool Empty();
	bool Full();
	void Append(int x);
	void Serve();
	int Front();
	int Back();
	int Size();
	void Clear();
};

#endif 