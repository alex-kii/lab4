#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	Rational fract1;
	cout << "����������� ������� 1 \t=>\t " << fract1 << endl;

	Rational fract2(2, 20);
	cout << "����������� ������� 2 \t=>\t " << fract2 << endl;

	Rational fract3(4);
	cout << "����������� ������� 3 \t=>\t " << fract3 << endl;
	cout << endl;

	cout << "�������� ������� 3 � ������� 2	\t=>\t " << fract3 + fract2 << endl;
	cout << "��������� ������� 2 �� ������� 3\t=>\t " << fract3 - fract2 << endl;
	cout << "��������� ������� 3 �� ������ 2	\t=>\t " << fract3 * fract2 << endl;
	cout << "������� ������� 3 �� ������ 2	\t=>\t " << fract3 / fract2 << endl;
	cout << endl;

	cout << "������� ������� ������ (�������� � �����������) ��� ������� 1 " << endl;
	cin >> fract1;

	cout << "����� ������ ������� 1\t=>\t "
		<< "��������� = " << fract1.GetNominator()
		<< " ����������� = " << fract1.GetDenominator()
		<< endl;
	cout << endl;

	cout << "����� ���������� ������� y1()\t=>\t" << y1(fract2) << endl;
	cout << "����� ���������� ������� y2()\t=>\t" << y2(0.1) << endl;
	cout << "����� ���������� ������� NOD()\t=>\t" << NOD(7, 49) << endl;

	return 0;
}