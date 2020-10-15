#include <iostream>

#include "AComplex.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	AComplex z1;
	AComplex z2(3, 5);
	AComplex z3(0, 5);
	AComplex z4(0, 1);
	AComplex z5(0, -1);
	AComplex z6(0, 0);
	AComplex z7(3, 0);
	AComplex z8 = z2.plus(z5);
	AComplex z9 = z2 + z3;
	AComplex z10;
	z10 = -z2;
	
	system("pause");
}