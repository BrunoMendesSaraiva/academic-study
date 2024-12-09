#include <iostream> 
#include "estudoBi.h"

using namespace std;

BinaryTree::BinaryTree() : root(nullptr){}

BinaryTree::~BinaryTree() {
	destroyTree(root);
}

void BinaryTree::insert(int value){
	root=insert(root, value);
}

Node* BinaryTree::insert(Node* node, int value){
	if(node==nullptr){
		return new Node(value);
	}
	if(value < node->value){
		node->left = insert(node->left, value);
	}else{
		node->right = insert(node->right, value);
	}
	return node;
}

void BinaryTree::printInOrder(){
	printInOrder(root);
	cout << endl;
}

void BinaryTree::printInOrder(Node* node){
	if(node != nullptr){
		printInOrder(node->left);
		cout << node->value << " ";
		printInOrder(node->right);
	}
}

void BinaryTree::printInReverse(){
	printInReverse(root);
	cout << endl;
}

void BinaryTree::printInReverse(Node* node){
	if(node != nullptr){
		printInReverse(node->right);
		cout << node->value << " ";
		printInReverse(node->left);
	}
}

bool BinaryTree::search(int value){
	return search(root, value);
}

bool BinaryTree::search(Node* node, int value){
	if(node == nullptr){
				return false;
		}	if(node->value == value){
					return true;
			}else if(value < node-> value){
					return search(node->left, value);
			}else{
				return search(node->right, value);
			}
}

int BinaryTree::countOcurrences(int value){
	return countOcurrences(root, value);
}

int BinaryTree::countOcurrences(Node* node, int value){
	if(node == nullptr){
		return 0;
	}
	int count = (node->value == value) ? 1 : 0;
	count += countOcurrences(node->left, value); 
	count += countOcurrences(node->right, value);
	return count;
}

void BinaryTree::remove(int value){
	root = remove(root, value);
}

Node* BinaryTree::remove(Node* node, int value){
	if(node == nullptr){
		return nullptr;
	}
	if(value < node->value){
		node->left = remove(node->left, value);
		}else if (value > node->value){
			node->right = remove(node->right, value);
		}else{
			if(node->left == nullptr && node->right == nullptr){
				delete node;
				return nullptr;
			}else if (node->left == nullptr){
				Node* temp = node->right;
				delete node;
				return temp;
			}else if (node->right == nullptr){
				Node* temp = node->left;
				delete node;
				return temp;
			}else{
				Node* temp = findMin(node->right);
				node->value = temp->value;
				node->right = remove(node->right, temp->value);
			}
		}
		return node;
}

Node* BinaryTree::findMin(Node* node){
	while(node->left != nullptr){
		node = node->left;
	}
	return node;
}

void BinaryTree::destroyTree(Node* node){
	if(node != nullptr){
		destroyTree(node->left);
		destroyTree(node->right);
		delete node;
	}
}	