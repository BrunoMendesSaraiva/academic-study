#include <iostream>
#include "AVL.h"

using namespace std;

AVL::AVL() : root(nullptr) {}

AVL::~AVL(){
	clear();
}

void AVL::clear() {
    clear(root);
    root = nullptr; 
}

void AVL::clear(Node* node) {
    if (node) {
        clear(node->left);
        clear(node->right);
        delete node;
    }
}

int AVL::getHeight(Node* node){
	return node ? getHeight(node->right) - getHeight(node->left) : 0;
}

void AVL::updateHeight(Node* node){
	if(node){
		node->height = 1 + max(getHeight(node->left), getHeight(node->right));
	}
}

Node* AVL::rotateRight(Node* y){
	Node* x = y->left;
	Node* T2 = x->right;

	x->right = y;
	y->left = T2;
	
	updateHeight(y);
	updateHeight(x);

	return x;
}

Node* AVL::rotateLeft(Node* x){
	Node* y = x->right;
	Node* T2 = y->left;

	y->left = x;
	y->right = T2;
	
	updateHeight(x);
	updateHeight(y);

	return y;
}

