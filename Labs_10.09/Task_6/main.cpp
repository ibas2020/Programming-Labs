// Лабораторная 1. Задача 6.

#include <iostream>

using namespace std;

int main()
{

    int a, n;                       // a - доля выполненных заданий, n -  переменная для switch.
    string grade;                   // В переменную grade поместим текст оценки.


    cout << "Введите долю выполненных учеником заданий (в процентах): ";        // Ввод.
    cin >> a;

    h*1000+s

    if (a < 40 && a > 0)                        // Ветвление, чтобы определить, в диапазон какой оценки
        n = 0;                                  // попадает введеное число.
    else if (a >= 40 && a < 60)
        n = 1;
    else if (a >= 60 && a < 80)
        n = 2;
    else if (a >= 80 && a <= 100)
        n = 3;
    else {                                                      // Сообщение, если пользователь ввел значение
        cout << "Введите число в диапазоне от 1 до 100.";       // больше 100 или меньше 0.
        return 0;
    }

    switch(n)                                                   // switch, который присвоит grade значение
    {                                                           // в виде текста.
        case 0:
            grade = "Два.";
            break;
        case 1:
            grade = "Три.";
            break;
        case 2:
            grade = "Четыре.";
            break;
        case 3:
            grade = "Пять.";
            break;
    }

    cout << "Доля выполненных учеником заданий: " << a << "%" << endl << "Оценка: " << grade;   // Вывод


}