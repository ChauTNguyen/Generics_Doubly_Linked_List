//
// Created by Chau Nguyen on 6/22/16.
//

#ifndef GENERIC_DOUBLY_LINKED_LIST_DOUBLYLINKEDLIST_H
#define GENERIC_DOUBLY_LINKED_LIST_DOUBLYLINKEDLIST_H

#include <iostream>

template <typename T>
class Node {
private:
    T value;
    Node<T> *prev;
    Node<T> *next;
public:
    Node(const T& newValue, Node *newPrev, Node *newNext)
            : value(newValue), prev(newPrev), next(newNext) {};
    Node(const T& newValue)
            : value(newValue), prev(nullptr), next(nullptr) {};
    ~Node() {};

    T getData() const { return value; }
    Node<T> *getPrev() const { return prev; }
    Node<T> *getNext() const { return next; }

    void setData(const T& newData) { value = newData; }
    void setPrev(Node<T> *newPrev) { prev = newPrev; }
    void setNext(Node<T> *newNext) { next = newNext; }

    void printData() const { std::cout << value << std::endl; }
    bool hasPrev() const { return (prev != nullptr); }
    bool hasNext() const { return (next != nullptr); }
};

template <typename T>
class DoublyLinkedList {
private:
    Node<T> *first;
    Node<T> *last;
    size_t count;
public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    void clear();
    bool isEmpty() const;
    size_t size() const;
    void push(const T &obj);
    void pushFront(const T& obj);
    void pop();
    void popFront();
    void printForward() const;
    void printReverse() const;
};

#endif //GENERIC_DOUBLY_LINKED_LIST_DOUBLYLINKEDLIST_H
