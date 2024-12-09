#include <iostream>
#include "Queue.h"

using namespace std;

Queue::Queue(){
	head = 0;
	tail = -1;
	count = 0;
}

bool Queue::Empty(){
	return count == 0;
}

bool Queue::Full(){
	 return count == MAX_SIZE;
}

void Queue::Append(int x){
	if(Full()){
		cout << "fila cheia";
	}
	tail = (tail + 1) % MAX_SIZE;
	val[tail] = x;
	count++;
}

void Queue::Serve(){
	if(Empty()){
		cout << "vazia";
	}
	head = (head + 1) % MAX_SIZE;
	count--;
}

int Queue::Front(){
	if(Empty()){
		cout << "vazia";
	}
	return val[head];
}

int Queue::Back(){
	if(Empty()){
		cout << "vazia";
	}
	return val[tail];
}

int Queue::Size(){
	return count;
}

void Queue::Clear(){
	head = 0;
	tail = -1;
	count = 0;
}