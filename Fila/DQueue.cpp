#include <iostream>
#include "DQueue.h"

using namespace std;

Queue::Queue(){
	head = nullptr;
	tail = nullptr;
	count = 0;
}

Queue::~Queue(){
	Clear();
}

bool Queue::Empty(){
	return count == 0;
}

void Queue::Append(int x){
	Node* newNode = new Node;
	if( newNode == nullptr){
		cout<<"falha";
	}
	newNode->val = x;
	newNode->next =nullptr;
	if(Empty()){
		head = tail = newNode;
	}else {
		tail->next = newNode;
		tail = newNode;
	}
	count++;
}

void Queue::Serve(){
	if(Empty()){
		cout << "vazia";
	}
	Node* temp = head;
	head = head->next;
	delete temp;
	count--;

	if(head == nullptr){
		tail = nullptr;
	}
}

int Queue::Front(){
	if(Empty()){
		cout << "vazia";
	}
	return head->val;
}

int Queue::Back(){
	if(Empty()){
		cout << "vazia";
	}
	return tail->val;
}

int Queue::Size(){
	return count;
}

void Queue::Clear(){
	while(!Empty()){
		Serve();
	};
}