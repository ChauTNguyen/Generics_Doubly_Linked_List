#include <iostream>
#include <utility>

#include "DoublyLinkedList.h"
#include "DoublyLinkedList.cpp"
#include "Pair.h"
#include "Pair.cpp"

void intNodeTester();
void stringNodeTester();
void stdPairNodeTester();
void myPairNodeTester();

void intListTester();
void stringListTester();
void stdPairListTester();
void myPairListTester();

int main() {
//    intNodeTester();
//    stringNodeTester();
//    stdPairNodeTester();
//    myPairNodeTester();

//    intListTester();
//    stringListTester();
//    stdPairListTester();
    myPairListTester();

    std::cout << "All done." << std::endl;
    return 0;
}

void intNodeTester() {
    Node<int> *intNode = new Node<int>(5, nullptr, nullptr);
    intNode->printData();
    std::cout << "intNode->hasPrev(): " << std::boolalpha << intNode->hasPrev() << std::endl;
    std::cout << "intNode->hasNext(): " << std::boolalpha << intNode->hasNext() << std::endl;

    Node<int> *intNode2 = new Node<int>(6);
    intNode2->printData();

    intNode->setNext(intNode2);
    intNode2->setPrev(intNode);

    std::cout << "intNode->hasPrev(): " << std::boolalpha << intNode->hasPrev() << std::endl;
    std::cout << "intNode->hasNext(): " << std::boolalpha << intNode->hasNext() << std::endl;
    std::cout << "intNode2->hasPrev(): " << std::boolalpha << intNode2->hasPrev() << std::endl;
    std::cout << "intNode2->hasNext(): " << std::boolalpha << intNode2->hasNext() << std::endl;
}

void stringNodeTester() {
    Node<std::string> *stringNode = new Node<std::string>("Hey");
    stringNode->printData();

    std::cout << "stringNode->hasPrev(): " << std::boolalpha << stringNode->hasPrev() << std::endl;
    std::cout << "stringNode->hasNext(): " << std::boolalpha << stringNode->hasNext() << std::endl;
}

void stdPairNodeTester() {
    Node<std::pair<int, int>> *pairNode = new Node<std::pair<int, int>>(std::make_pair<int, int>(3, 2));
    std::cout << "pairNode->getData().first = " << pairNode->getData().first << std::endl;
    std::cout << "pairNode->getData().second = " << pairNode->getData().second << std::endl;

    Node<std::pair<std::string, int>> *pairNode2 = new Node<std::pair<std::string, int>>(std::make_pair<std::string, int>("hi", 5));
    std::cout << "pairNode->getData().first = " << pairNode2->getData().first << std::endl;
    std::cout << "pairNode->getData().second = " << pairNode2->getData().second << std::endl;
}

void myPairNodeTester() {
    Node<Pair<int, int>> *pairNode = new Node<Pair<int, int>>(Pair<int, int>(5, 2));
    std::cout << "pairNode->getData().first = " << pairNode->getData().first << std::endl;
    std::cout << "pairNode->getData().second = " << pairNode->getData().first << std::endl;
    std::cout << pairNode->getData() << std::endl;
    Pair<int, int> pair1 = pairNode->getData();
    std::cout << pair1 << std::endl;
    pairNode->printData();
}

void intListTester() {
    DoublyLinkedList<int> intList;
    std::cout << "Is the list empty? " << std::boolalpha << intList.isEmpty() << std::endl;
    intList.printForward();
    intList.printReverse();
    int num = 5;
    intList.push(num);
    std::cout << "Is the list empty? " << std::boolalpha << intList.isEmpty() << std::endl;
    intList.printForward();
    intList.printReverse();
    std::cout << "intList.size(): " << intList.size() << std::endl;
    intList.push(8);
    intList.printForward();
    intList.printReverse();
    std::cout << "intList.size(): " << intList.size() << std::endl;
    intList.pop();
    intList.printForward();
    intList.printReverse();
    std::cout << "intList.size(): " << intList.size() << std::endl;
    intList.pop();
    intList.printForward();
    intList.printReverse();
    std::cout << "intList.size(): " << intList.size() << std::endl;
    intList.pop();
    intList.printForward();
    intList.printReverse();
    std::cout << "intList.size(): " << intList.size() << std::endl;
    intList.push(3);
    intList.push(5);
    intList.push(6);
    intList.printForward();
    intList.printReverse();
    std::cout << "intList.size(): " << intList.size() << std::endl;
    intList.popFront();
    intList.printForward();
    intList.printReverse();
    std::cout << "intList.size(): " << intList.size() << std::endl;
    intList.pushFront(0);
    intList.printForward();
    intList.printReverse();
    std::cout << "intList.size(): " << intList.size() << std::endl;
    intList.pushFront(1);
    intList.printForward();
    intList.printReverse();
    std::cout << "intList.size(): " << intList.size() << std::endl;
}

void stringListTester() {
    DoublyLinkedList<std::string> stringList;
    stringList.push("hey");
    stringList.push("my");
    stringList.push("name");
    stringList.push("is");
    std::string name = "Chau";
    stringList.push(name);

    std::cout << "Is the list empty? " << std::boolalpha << stringList.isEmpty() << std::endl;
    std::cout << "stringList.size(): " << stringList.size() << std::endl;
    stringList.printForward();
    stringList.printReverse();
}

void stdPairListTester() {
    DoublyLinkedList<std::pair<int, int>> pairList;
    pairList.push(std::make_pair(5, 2));
    pairList.push(std::make_pair(0, 1));
    pairList.push(std::make_pair(1, 0));
    pairList.push(std::make_pair(1, 1));
    std::cout << "pairList.size(): " << pairList.size() << std::endl;
    pairList.clear();
    std::cout << "pairList.size(): " << pairList.size() << std::endl;
    std::cout << "Is the list empty? " << pairList.isEmpty() << std::endl;
}

void myPairListTester() {
    DoublyLinkedList<Pair<int, int>> pairList;
    pairList.push(Pair<int, int>(5, 2));
    pairList.printForward();
    pairList.printReverse();
    pairList.push(Pair<int, int>(3, 4));
    pairList.push(Pair<int, int>(1, 1));
    pairList.push(Pair<int, int>(2, 5));
    pairList.printForward();
    pairList.printReverse();
    pairList.push(make_pair(5, 2));
    pairList.printForward();
    pairList.printReverse();
}