#pragma once
#include <iostream>

class Rational
{
private:
	int nominator; // Числитель
	int denominator; // Знаменатель

public:
	Rational();

	Rational(int nom, int den);

	Rational(int digit);

	Rational operator+ (const Rational& rhs);

	Rational operator- (const Rational& rhs);

	Rational operator* (const Rational& rhs);

	Rational operator/ (const Rational& rhs);

	int GetNominator() const;
	int GetDenominator() const;

	friend std::istream& operator>> (std::istream& is, Rational& obj);
	friend std::ostream& operator<< (std::ostream& os, const Rational& obj);
};

Rational y1(const Rational& x);

double y2(double x);

int NOD(int a, int b);