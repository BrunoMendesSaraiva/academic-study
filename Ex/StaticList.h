#ifndef STATICLIST_H
#define STATICLIST_H

#include <iostream>
#define MAX_SIZE 100

class StaticList{
	private:
	int val[MAX_SIZE];
	int size;

	public:
	StaticList();
	bool Insert(int value);
	bool Remove(int value);
	int Search(int value) const;
	void Print() const;
};

#endif