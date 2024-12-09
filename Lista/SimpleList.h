#ifndef SIMPLELIST_H
#define SIMPLELIST_H

#include <iostream>

struct Node {
    int data;
    Node* next;
};

class SimpleList {
private:
    Node* head;

public:
    SimpleList();
    ~SimpleList();

    void insert(int value);   // Insere no início
    void remove(int value);   // Remove o primeiro nó com o valor
    void print() const;       // Imprime os elementos
};

#endif
