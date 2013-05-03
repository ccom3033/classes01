#include "Fraction.h"

Fraction Fraction::add(const Fraction b) {
	Fraction res(num * b.den + b.num * den, den * b.den);
	return res;
}

void Fraction::display() const {
	cout << num << " / " << den << endl;
}