// Lab_03_1.cpp 
// < Кобиринка Юрій > 
// Лабораторна робота № 3.1 
// Розгалуження, задане формулою: функція однієї змінної. 
// Варіант 4

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B; // проміжний результат - функціонально змінна частина виразу

    cout << "x = "; cin >> x;

    A = 1 + x;

    // спосіб 1: розгалуження в скороченій формі
    if (x <= 4)
        B = exp(log(2 + 2 * x) + 2 * x;
    if (4 < x && x <= 7)
        B = 1 / tan((1 + x)/9 + 8 * x);
    if (x > 1)
        B = cos(x);
    if (x > 7)
        B = 1 - 7 * x + x * x - 2 * x * x * x;
    y = A + B;
    cout << endl;
    cout << "1) y = " << y << endl;
    // спосіб 2: розгалуження в повній формі
    if (x <= 4)
        B = exp(log(2 + 2 * x) + 2 * x;
    else
    if (4 < x && x <= 7)
        B = 1 / tan((1 + x) / 9 + 8 * x);
    else
    if (x > 1)
        B = cos(x);
    else
    if (x > 7)
        B = 1 - 7 * x + x * x - 2 * x * x * x;
    y = A + B;
    cout << "2) y = " << y << endl;
    cin.get();

    return 0;
}