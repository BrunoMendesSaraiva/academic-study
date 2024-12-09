#include "Dinâminca.h"
#include <iostream>

using namespace std;

PilhaDinamica::PilhaDinamica(){
	top = nullptr;
}

PilhaDinamica::~PilhaDinamica(){
	Clear();
}

bool PilhaDinamica::Empty(){
	return top == nullptr;
}

void PilhaDinamica::Push(int x){
	Node* newNode = new Node;
	if( newNode == nullptr){
		cout << "memoria insuficiente";
		return;
	}
	newNode->val = x;
	newNode->next = top;
	top = newNode;
}

void PilhaDinamica::Pop(){
	if(Empty){
		cout << "Vazia";
	}
	Node* temp = top; 
	top = top->next;
	delete temp;
}

int PilhaDinamica::Top(){
	if(Empty()){
		cout << "vazia";
		return -1;
	}
	return top->val;
}

void PilhaDinamica::Clear(){
	while(Empty()){
		Pop();
	}
}

void PilhaDinamica::Print(){
	Node* current = top;
	cout << current->val;
	current = current->next;
}