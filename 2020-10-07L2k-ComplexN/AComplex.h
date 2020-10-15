#pragma once
class AComplex
{
	//Поля
	double re, im;
	char* view = nullptr;
	const double epsilon = 1e-20;
public:
	//Конструктор по умолчанию
	AComplex();
	//Конструктор с параметрами
	AComplex(double re, double im);
	//Конструктор копирования
	AComplex(const AComplex& other);
	//Оператор присваивания
	AComplex& operator=(const AComplex& z2);
private:
	//Создание строкового представления комплексного числа в
	//алгебраической форме записи
	void createView();
public:
	AComplex plus(const AComplex& z2) const;
	AComplex operator+(const AComplex& z2) const;
	AComplex operator-(const AComplex& z2) const;
	AComplex operator-() const;
	AComplex operator+=(const AComplex& z2);
};

