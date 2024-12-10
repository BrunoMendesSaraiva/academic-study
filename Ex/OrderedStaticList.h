#ifndef ORDEREDSTATICLIST_H
#define ORDEREDSTATICLIST_H

#include <iostream>
#define MAX_SIZE 100 // Tamanho máximo da lista

class OrderedStaticList {
private:
    int data[MAX_SIZE]; // Array para armazenar os elementos
    int size;           // Número de elementos na lista

public:
    OrderedStaticList();           // Construtor
    bool insert(int value);        // Insere um elemento ordenadamente
    bool remove(int value);        // Remove um elemento
    int search(int value) const;   // Busca um elemento e retorna o índice
    void print() const;            // Imprime os elementos
};

#endif
