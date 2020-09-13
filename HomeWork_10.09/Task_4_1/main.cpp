// Домашнее задание №1. Задание №4.1

#include <iostream>

using namespace std;

int main()
{

    int a,b;

    cout << "Введите два числа: ";      // Ввод
    cin >> a >> b;

    if (a >= b)                         // Обычное ветвление сразу с выводом в консоль
        cout << "Min = " << b;
    else
        cout << "Min = " << a;

    return 0;

}