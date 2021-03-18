#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	Rational fract1;
	cout << "Демонстация объекта 1 \t=>\t " << fract1 << endl;

	Rational fract2(2, 20);
	cout << "Демонстация объекта 2 \t=>\t " << fract2 << endl;

	Rational fract3(4);
	cout << "Демонстация объекта 3 \t=>\t " << fract3 << endl;
	cout << endl;

	cout << "Сложение объекта 3 и объекта 2	\t=>\t " << fract3 + fract2 << endl;
	cout << "Вычитание объекта 2 из объекта 3\t=>\t " << fract3 - fract2 << endl;
	cout << "Умножение объекта 3 на объект 2	\t=>\t " << fract3 * fract2 << endl;
	cout << "Деление объекта 3 на объект 2	\t=>\t " << fract3 / fract2 << endl;
	cout << endl;

	cout << "Вручную введите данные (делитель и знаменатель) для объекта 1 " << endl;
	cin >> fract1;

	cout << "Вывод данных объекта 1\t=>\t "
		<< "Числитель = " << fract1.GetNominator()
		<< " Знаменатель = " << fract1.GetDenominator()
		<< endl;
	cout << endl;

	cout << "Вывод результата функции y1()\t=>\t" << y1(fract2) << endl;
	cout << "Вывод результата функции y2()\t=>\t" << y2(0.1) << endl;
	cout << "Вывод результата функции NOD()\t=>\t" << NOD(7, 49) << endl;

	return 0;
}