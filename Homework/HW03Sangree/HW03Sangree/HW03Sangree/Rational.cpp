#include "Rational.h"
#include <algorithm>
#include <numeric>

Rational Rational::operator+(Rational r) {
    int temp1 = numer * r.getDenom();
    int temp2 = denom * r.getNumer();
    int denominator = denom * r.getDenom();
    int numerator = temp1 + temp2;
    Rational result(numerator, denominator);
    result.reduce();
    return result;
}

Rational Rational::operator-(Rational r) {
    int temp1 = numer * r.getDenom();
    int temp2 = denom * r.getNumer();
    int denominator = denom * r.getDenom();
    int numerator = temp1 - temp2;
    Rational result(numerator, denominator);
    result.reduce();
    return result;
}
Rational Rational::operator*(Rational r) {
    int numerator = numer * r.getNumer();
    int denominator = denom * r.getDenom();
    Rational result(numerator, denominator);
    result.reduce();
    return result;
}

Rational Rational::operator/(Rational r) {
    int numerator = numer * r.getDenom();
    int denominator = denom * r.getNumer();
    Rational result(numerator, denominator);
    result.reduce();
    return result;
}
Rational Rational::operator+(int x) {
    int numerator = numer + (denom * x);
    Rational result(numerator, denom);
    result.reduce();
    return result;
}

Rational Rational::operator-(int x) {
    int numerator = numer - (denom * x);
    Rational result(numerator, denom);
    result.reduce();
    return result;
}

Rational Rational::operator*(int x) {
    int numerator = numer * x;
    Rational result(numerator, denom);
    result.reduce();
    return result;
}

Rational Rational::operator/(int x) {
    int denominator = denom * x;
    Rational result(numer, denominator);
    result.reduce();
    return result;
}

int GCD(int num, int den) {
    if (num == 0 || den == 0)
        return 0;
    else if (num == den)
        return num;
    else if (num > den)
        return GCD(num - den, den);
    else return GCD(num, den - num);
}

void Rational::reduce() {
    int gcd = GCD(abs(numer), abs(denom));
    numer = numer / gcd;
    denom = denom / gcd;
}

ostream& operator<<(ostream& out, Rational r) {
    out << r.getNumer() << "/" << r.getDenom();
    return out;
}