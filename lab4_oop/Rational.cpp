#include "Rational.h"

Rational::Rational() : nominator(0), denominator(1)
{
	//nominator = 0;
	//denominator = 1;
}

Rational::Rational(int nom, int den) : nominator(nom / NOD(nom,den)), denominator(den / NOD(nom, den))
{
	//int nod = NOD(nom, den);
	//nominator = nom / nod;
	//denominator = den / nod;
}

Rational::Rational(int digit) : nominator(digit), denominator(1)
{
	//nominator = digit;
	//denominator = 1;
}

Rational Rational::operator+ (const Rational& rhs) 
{
	Rational result(
		this->nominator * rhs.denominator + rhs.nominator * this->denominator,
		this->denominator * rhs.denominator
	);

	return result;
}

Rational Rational::operator- (const Rational& rhs) 
{
	Rational result(
		this->nominator * rhs.denominator - rhs.nominator * this->denominator,
		this->denominator * rhs.denominator
	);

	return result;
}

Rational Rational::operator* (const Rational& rhs) 
{
	Rational result(
		this->nominator * rhs.nominator,
		this->denominator * rhs.denominator
	);

	return result;
}

Rational Rational::operator/ (const Rational& rhs) 
{
	Rational result(
		this->nominator * rhs.denominator,
		this->denominator * rhs.nominator
	);

	return result;
}

int Rational::GetNominator() const { return nominator; }
int Rational::GetDenominator() const { return denominator; }

std::istream& operator>>(std::istream& is, Rational& obj) //Потоковый ввод 
{
	is >> obj.nominator >> obj.denominator;

	return is;
}

std::ostream& operator<<(std::ostream& os, const Rational& obj) //Потоковый вывод 
{
	os << obj.GetNominator() << "/" << obj.GetDenominator();

	return os;
}

Rational y1(const Rational& x) 
{
	/*int Nom = x.GetNominator(), Den = x.GetDenominator();
	Rational left_fract(Nom, 3 * Den), right_fract(10 * Den, 2 * Den + 10 * Nom);
	return left_fract - right_fract;*/

	return (Rational(1, 3) * x) - Rational(1) / (Rational(2,10) + x);
}

double y2(double x) {
	return (x / 3) - 1 / (0.2 + x);
}

int NOD(int a, int b)
{
	int r = 0;

	while (true)
	{
		if (b == 0)
			return a;
		else
		{
			r = a % b;
			a = b;
			b = r;
		}
	}
}