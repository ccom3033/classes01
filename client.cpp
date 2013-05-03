#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {
	Fraction f(1,2), g(1,3);
	f.add(g).display();
	return 0;
}