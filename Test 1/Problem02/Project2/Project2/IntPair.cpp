#include <iostream>
#include <ostream>
#include "IntPair.h"

IntPair::IntPair() {
    x = 0;
    y = 0;
}

IntPair::IntPair(int a, int b) {
    x = a;
    y = b;
}

void IntPair::set(int a, int b) {
    x = a;
    y = b;
}

int IntPair::getFirst() {
    return x;
}

int IntPair::getSecond() {
    return y;
};

ostream& operator<<(ostream& stream, IntPair& other) {
    stream << "Pair(" << other.getFirst() << ", " << other.getSecond() << ")";
};
