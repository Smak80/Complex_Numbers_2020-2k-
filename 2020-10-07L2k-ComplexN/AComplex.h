#pragma once
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
	AComplex operator+=(const AComplex& z2);
};

