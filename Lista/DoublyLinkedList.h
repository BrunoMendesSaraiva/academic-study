#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList {
private:
    Node* sentinel;  // Nó sentinela

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void insert(int value);   // Insere no final
    void remove(int value);   // Remove o nó com o valor
    void print() const;       // Imprime os elementos
    void printReverse() const; // Imprime os elementos na ordem inversa
};

#endif
