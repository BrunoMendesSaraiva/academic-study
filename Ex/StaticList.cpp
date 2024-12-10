#include "StaticList.h"
#include <iostream>

using namespace std;

StaticList::StaticList() : size(0){}

bool StaticList::Insert(int value){
	if (size >= MAX_SIZE){
		cout << "cheia";
		return false;
	}
	val[size++] = value;
	return true;
}

bool StaticList::Remove(int value){
	int index = Search(value);
	if(index == -1){
		cout << "não encontrado";
		return false;
	}
	for (int i = index; i < size - 1; i++){
		val[i] = val[i + 1];
	}
	size--;
	return true;
}

int StaticList::Search(int value) const {
    for (int i = 0; i < size; ++i) {
        if (val[i] == value) {
            return i;
        }
    }
    return -1;
}

void StaticList::Print() const {
    for (int i = 0; i < size; ++i) {
        std::cout << val[i] << " ";
    }	