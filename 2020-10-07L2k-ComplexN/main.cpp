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
	cout << z10['R'] << " " << z10['I'] << endl;
	//cout << z10['A'];
	z10['R'] = 1;
	//cout << z10;
	double k = 2;
	AComplex z11 = z9 * k * k;
	cout << z11 << endl;
	AComplex z12(5.5);
	//AComplex z13 = 13.7;
	//AComplex z13 = { 13, 14 };
	system("pause");
}