// Домашняя работа №1. Задание №2.

#include <iostream>

using namespace std;

int main()
{

    int h1, h2, m1, m2, s1, s2, total_1, total_2, total;        // h, m, s - часы, минуты и секунды

    cout << "Введите показания электронных часов (в виде часы минуты секунды): ";       // Ввод
    cin >> h1 >> m1 >> s1;
    cout << "Введите промежуток времени (в виде часы минуты секунды): ";
    cin >> h2 >> m2 >> s2;

    total_1 = h1 * 3600 + m1 * 60 + s1;                 // total - это число секунд
    total_2 = h2 * 3600 + m2 * 60 + s2;
    total = total_1 + total_2;                          // Сумма секунд начального значения и промежутка

    cout << "Показания часов через промежуток времени: " << total / 3600 % 24 << " " << total % 3600 / 60 << " " << total % 3600 % 60;
                                                        // Вывод
    return 0;
}