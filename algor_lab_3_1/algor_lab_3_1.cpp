//  Lab_3_alg.cpp
//  Довгошиї Анастасії 
//  Лабораторна робота №3.1
//  Розгалуження, задане формулою: функція однієї змінної.
//  Варіант 6

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, A, B;
    cout << "x = "; cin >> x;

    A = 5 * exp(3 * x);

    //СКОРОЧЕНА ФОРМА
    if (x <= -1)
        B = 3 + sin(abs(x));
    else if (-1 < x && x <= 3)
        B = 2 * exp((x / 4) - 1);
    else {
        B = 7 - sqrt(2) * pow(x, 3);
    }

    y = A - B;
    cout << "y = " << y << endl;

    //ПОВНА ФОРМА
    if (x <= -1)
        B = 3 + sin(abs(x));
    else
        if (-1 < x && x <= 3)
            B = 2 * exp((x / 4) - 1);
        else
            B = 7 - sqrt(2) * pow(x, 3);

    y = A - B;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}

