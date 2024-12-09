#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList() {
    sentinel = new Node{0, nullptr, nullptr};
    sentinel->next = sentinel;
    sentinel->prev = sentinel;
}

DoublyLinkedList::~DoublyLinkedList() {
    Node* current = sentinel->next;
    while (current != sentinel) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    delete sentinel;
}

void DoublyLinkedList::insert(int value) {
    Node* newNode = new Node{value, sentinel, sentinel->prev};
    sentinel->prev->next = newNode;
    sentinel->prev = newNode;
}

void DoublyLinkedList::remove(int value) {
    Node* current = sentinel->next;
    while (current != sentinel && current->data != value) {
        current = current->next;
    }

    if (current != sentinel) {
        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current;
    }
}

void DoublyLinkedList::print() const {
    Node* current = sentinel->next;
    while (current != sentinel) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

void DoublyLinkedList::printReverse() const {
    Node* current = sentinel->prev;
    while (current != sentinel) {
        std::cout << current->data << " ";
        current = current->prev;
    }
    std::cout << std::endl;
}
