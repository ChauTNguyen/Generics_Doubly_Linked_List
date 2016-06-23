//
// Created by Chau Nguyen on 6/22/16.
//

#include "Pair.h"

template <typename T1, typename T2>
std::ostream& operator<<(std::ostream& out, const Pair<T1, T2>& pair) {
    out << "(" << pair.getFirst() << ", " << pair.getSecond() << ")";
    return out;
}

template <typename T1, typename T2>
Pair<T1, T2>::~Pair() { }