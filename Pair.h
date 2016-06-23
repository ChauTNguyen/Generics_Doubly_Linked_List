//
// Created by Chau Nguyen on 6/22/16.
//

#ifndef GENERIC_DOUBLY_LINKED_LIST_PAIR_H
#define GENERIC_DOUBLY_LINKED_LIST_PAIR_H

#include <iostream>

template <typename T1, typename T2>
class Pair {
    template <typename T3, typename T4>
    friend std::ostream& operator<<(std::ostream& out, const Pair<T3, T4>& pair);
public:
    T1 first;
    T2 second;
    Pair(const T1& newFirst, const T2& newSecond) : first(newFirst), second(newSecond) { };
    ~Pair();
    T1 getFirst() const { return first; }
    T2 getSecond() const { return second; }
};
#endif //GENERIC_DOUBLY_LINKED_LIST_PAIR_H
