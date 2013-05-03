#include <iostream>
using namespace std;

class Fraction {
private: int num, den;
public:
    Fraction(): num(0), den(1) {}
    Fraction(int n, int d): num(n), den(d) {}
    void display() const;

    void setNum(int n) { num = n; }
    void setDen(int d) { den = d; }
    int  getNum() const { return num;}
    int  getDen() const { return den;}

    Fraction add(const Fraction b);
};