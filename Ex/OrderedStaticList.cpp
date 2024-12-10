#include "OrderedStaticList.h"
#include <iostream>

using namespace std;

OrderedStaticList::OrderedStaticList() : size(0) {}

bool OrderedStaticList::insert(int value) {
	if(size >= MAX_SIZE){
		cout << "cheia";
		return false;
	}
	int i = size -1;
	while(i >= 0 && data[i] > value){
		data[i + 1] = data[i];
		i--;
	}
	data[i + 1] = value;
	size++;
	return true;
}

bool OrderedStaticList::remove(int value) {
	int index = search(value);
	if( index == -1){
		cout << "não encontrado";
		return false;
	}
	for (int i = index; i< size -1; i++){
		data[i] = data[i + 1];
	}
	size--;
	return true;
}

int OrderedStaticList::search(int value) const {
    for (int i = 0; i < size; ++i) {
        if (data[i] == value) {
            return i;
        }
    }
    return -1;
}

void OrderedStaticList::print() const {
    for (int i = 0; i < size; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << "\n";
}