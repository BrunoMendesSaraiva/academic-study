#ifndef AVL_H
#define AVL_H
#include <iostream>
#include <algorithm>

using namespace std;

struct Node{
	int key;
	int height;
	Node* left;
	Node* right;

	Node(int val) : key(val), height(1), left(nullptr), right(nullptr){}
};

class AVL
{
	public:
	AVL();
	~AVL();
	Node* insert(Node* root, int key);
	Node* remove(Node* root, int key);
	Node* search(Node* root, int key);
	void clear();

private:
Node* root;
int getHeight(Node* node);
int getBalance(Node* node);
void updateHeight(Node* node);
Node* rotateRight(Node* y);
Node* rotateLeft(Node* x);
Node* getMinValueNode(Node* node);
void clear(Node* node);
};	

#endif