//
// Created by Chau Nguyen on 6/22/16.
//

#include "DoublyLinkedList.h"

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList() {
    count = 0;
    first = nullptr;
    last = nullptr;
}

template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    clear();
    delete first;
    delete last;
    first = last = nullptr;
}

template <typename T>
void DoublyLinkedList<T>::clear() {
    if (count != 0) {
        std::cout << count << std::endl;
        Node<T> *current;

        while (first != nullptr) {
            current = first;
            first = first->getNext();
            delete current;
        }

        last = nullptr;
        count = 0;
    }
}

template <typename T>
bool DoublyLinkedList<T>::isEmpty() const { return (count == 0); }

template <typename T>
size_t DoublyLinkedList<T>::size() const { return count; }

template <typename T>
void DoublyLinkedList<T>::push(const T& obj) {
    if (count == 0) {
        first = last = new Node<T>(obj);
    } else {
        Node<T> *newNode = new Node<T>(obj, last, nullptr);
        last->setNext(newNode);
        last = last->getNext();
    }

    ++count;
}

template <typename T>
void DoublyLinkedList<T>::pushFront(const T& obj) {
    if (count == 0) {
        first = last = new Node<T>(obj);
    } else {
        Node<T> *newNode = new Node<T>(obj, nullptr, first);
        first->setPrev(newNode);
        first = first->getPrev();
    }

    ++count;
}

template <typename T>
void DoublyLinkedList<T>::pop() {
    if (count == 0) {
        std::cout << "List is empty!" << std::endl;
    } else {
        if (count != 1) {
            Node<T> *tmp = last;
            last = last->getPrev();
            last->setNext(nullptr);
            delete tmp;
            tmp = nullptr;
        } else {
            // If (count == 1), first must become nullptr as well because the list will have 0 elements.
            Node<T> *tmp = last;
            first = last = nullptr;
            delete tmp;
            tmp = nullptr;
        }

        --count;
    }
}

template <typename T>
void DoublyLinkedList<T>::popFront() {
    if (count == 0) {
        std::cout << "List is empty!" << std::endl;
    } else {
        if (count != 1) {
            Node<T> *tmp = first;
            first = first->getNext();
            first->setPrev(nullptr);
            delete tmp;
            tmp = nullptr;
        } else {
            Node<T> *tmp = first;
            first = last = nullptr;
            delete tmp;
            tmp = nullptr;
        }

        --count;
    }
}

template <typename T>
void DoublyLinkedList<T>::printForward() const {
    if (count != 0) {
        Node<T> *current = first;

        std::cout << "List contents: ";

        while (current != nullptr) {
            std::cout << current->getData() << " ";
            current = current->getNext();
        }

        std::cout << std::endl;
    } else {
        std::cout << "List is empty!" << std::endl;
    }
}

template <typename T>
void DoublyLinkedList<T>::printReverse() const {
    if (count != 0) {
        Node<T> *current = last;

        std::cout << "List contents (REVERSE): ";

        while (current != nullptr) {
            std::cout << current->getData() << " ";
            current = current->getPrev();
        }

        std::cout << std::endl;
    } else {
        std::cout << "List is empty!" << std::endl;
    }
}