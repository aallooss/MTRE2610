//#include <ostream>
#pragma once
using std::ostream;
class IntPair {
private:
    int x, y;
public:
    IntPair();

    IntPair(int a, int b);

    void set(int a, int b);

    int getFirst();

    int getSecond();

    IntPair operator+(IntPair& other) {
        IntPair newPair(getFirst() + other.getFirst(), getSecond() + other.getSecond());
        return newPair;
    };

    friend ostream& operator<<(ostream& stream, IntPair& other);
};


