#include "AComplex.h"

#include <cmath>
#include <cstring>
#include <stdio.h>

AComplex::AComplex() : AComplex(0, 0)
{}

AComplex::AComplex(double re, double im) : re(re), im(im)
{
	// this->re = re;
	// this->im = im;
	createView();
}

AComplex::AComplex(const AComplex& other) : re(other.re), im(other.im)
{
	auto sz = strlen(other.view) + 1;
	view = new char[sz];
	strcpy_s(view, sz, other.view);
}

AComplex& AComplex::operator=(const AComplex& z2)
{
	if (this == &z2) return *this;
	this->re = z2.re;
	im = z2.im;
	auto sz = strlen(z2.view) + 1;
	delete[] view;
	view = new char[sz];
	strcpy_s(view, sz, z2.view);
	return *this;
}

void AComplex::createView()
{
	char* v = new char[256];
	v[0] = 0;
	if (abs(re) > epsilon || abs(im) < epsilon)
	{
		sprintf_s(v, 256, "%g", re);
	}
	if (abs(im) > epsilon)
	{
		auto z = "";
		if (im < 0)
			z = "-";
		else if (abs(re) > epsilon)
			z = "+";
		sprintf_s(v, 256, "%s%s", v, z);
		if (abs(abs(im)-1) > epsilon)
		{
			sprintf_s(v, 256, "%s%g", v, abs(im));
		}
		sprintf_s(v, 256, "%s%c", v, 'i');
	}
	delete[] view;
	auto sz = strlen(v) + 1;
	view = new char[sz];
	strcpy_s(view, sz, v);
	delete[] v;
}

AComplex AComplex::plus(const AComplex& z2) const
{
	AComplex r(re + z2.re, im + z2.im);
	return r;
}

AComplex AComplex::operator+(const AComplex& z2) const
{
	AComplex r(this->re + z2.re, this->im + z2.im);
	return r;
}

AComplex AComplex::operator-(const AComplex& z2) const
{
	AComplex r(this->re - z2.re, this->im - z2.im);
	return r;
}

AComplex AComplex::operator-() const
{
	AComplex r(-this->re, -this->im);
	return r;
}
