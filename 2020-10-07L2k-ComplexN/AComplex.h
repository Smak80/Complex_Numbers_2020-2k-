#pragma once
#include <ostream>

class AComplex
{
	//����
	double re, im;
	char* view = nullptr;
	const double epsilon = 1e-20;
public:
	//����������� �� ���������
	AComplex();
	//����������� � �����������
	AComplex(double re, double im);
	//����������� �����������
	AComplex(const AComplex& other);

	explicit AComplex(double re);
	//����������
	~AComplex();
	//�������� ������������
	AComplex& operator=(const AComplex& z2);
private:
	//�������� ���������� ������������� ������������ ����� �
	//�������������� ����� ������
	void createView();
public:
	AComplex plus(const AComplex& z2) const;
	AComplex operator+(const AComplex& z2) const;
	AComplex operator-(const AComplex& z2) const;
	AComplex operator-() const;
	AComplex operator*(double k) const;
	AComplex& operator+=(const AComplex& z2);
	bool operator==(const AComplex& z2) const;
	double operator[](char part) const;
	double& operator[](char part);
	friend AComplex operator*(double k, const AComplex& z);
	friend std::ostream& operator<<(std::ostream& out, AComplex& z);
};
