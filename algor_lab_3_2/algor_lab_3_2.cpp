// lab_3_2_alg.cpp
//  Довгошиї Анастасії
//  Лабораторна робота №3.2
//  Розгалуження, задане формулою: функція з параметрами
//  Варіант 6

#include <iostream>
using namespace std;

int main()
{
	double x, a, b, c, F;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	//СКОРОЧЕНА ФОРМА
	if (c < 0 && b != 0)
		F = a * pow(x, 2) + pow(b, 2) * x;
	else if (c > 0 && b == 0)
		F = (x + a) / (x + c);
	else
		;

	cout << "F = " << F << endl;


	//ПОВНА ФОРМА
	if (c < 0 && b != 0)
		F = a * pow(x, 2) * pow(b, 2) * x;
	else
		if (c > 0 && b == 0)
			F = (x + a) / (x + c);
		else
			F = x / c;
	cout << "F = " << F << endl;
	cin.get();
	return 0;
}
