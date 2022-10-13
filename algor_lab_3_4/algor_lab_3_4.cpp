// lab_3_4_alg.cpp
// Довгошиї Анастасії
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 6

#include <iostream>
using namespace std;
int main()
{
	double x, R; // вхідний аргумент
	double y; // вхідний параметр

	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if ((y >= -R + sqrt(pow(R, 2) - pow((x + R), 2)) && y <= 0) ||
		(y <= sqrt(pow(R, 2) - pow((x - R), 2))))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
