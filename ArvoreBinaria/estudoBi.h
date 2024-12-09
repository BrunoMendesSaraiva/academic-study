#ifndef ESTUDOBI_H
#define ESTUDOBI_H

#include <iostream>	
using namespace std;

class Node {
	public: 
	int value;
	Node* left;
	Node* right;

	Node(int val): value(val), left(nullptr), right(nullptr){}
};

class BinaryTree{
	private: 
	Node* root;
	Node* insert(Node* node, int value);
	void printInOrder(Node* node);
	void printInReverse(Node* node);
	bool search(Node* node, int value);
	int countOcurrences(Node* node, int value);
	Node* remove(Node* node, int value);
	Node* findMin(Node* node);
	void destroyTree(Node* node);

	public:
	BinaryTree();
	~BinaryTree();
	void insert(int value);
	void printInOrder();
	void printInReverse();
	bool search(int value);
	int countOcurrences(int value);
	void remove(int value);
};

#endif