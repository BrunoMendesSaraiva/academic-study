#include "Estatica.h"
#include <iostream>

using namespace std;

PilhaEstatica::PilhaEstatica(){ 
	top = -1;
}

bool PilhaEstatica::Empty() { 
	return top == -1; 
}

bool PilhaEstatica::Full(){
	return top == MAX_SIZE -1;
}

void PilhaEstatica::Push(int x){
	if(Full()){
		cout << "cheia";
		return;
	}
	val[top++] = x;
}

void PilhaEstatica::Pop(){
	if(Empty()){
		cout<<"vazia";
		return;
	}
	top--;   
}

int PilhaEstatica::Top(){
	if(Empty()){
		cout << "vazio";
	}
	return val[top];
}

void PilhaEstatica::Clear(){
	top = -1;
}

void PilhaEstatica::Print(){
		if(Empty()){
			cout << "vazia";
			return;
		}
		cout << "elemetos da pilha:";
		for (int i = 0; i <= top; i++){
			cout<<"val[i]"<<" ";
		} 
}