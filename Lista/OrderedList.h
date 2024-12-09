#ifndef ORDEREDLIST_H
#define ORDEREDLIST_H

#include <iostream>

struct Node {
    int data;
    Node* next;
};

class OrderedList {
private:
    Node* head;

public:
    OrderedList();
    ~OrderedList();

    void insert(int value);   // Insere de forma ordenada
    void remove(int value);   // Remove o primeiro nó com o valor
    void print() const;       // Imprime os elementos
};

#endif
