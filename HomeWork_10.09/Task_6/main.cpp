// Домашнее задание №1. Задание №6

#include <iostream>


using namespace std;

int main()
{

    int a, d, e;
    string e_16;                                // Строки нужны для шеснадцатеричной сс
    string d_16;

    cout << "Введите двухзначное число: ";      // Ввод
    cin >> a;

    if ((a / 10) >= 1 && (a / 10) < 10) {       // Проверка двузначности числа
        d = a / 16;
        e = a % 16;
        d_16 = to_string(d);                    // Переводим десятки в строку

        switch (e) {                            // Свич, чтобы присвоить переменной буквы от A до F

            case 10:
                e_16 = "А";
                break;
            case 11:
                e_16 = "B";
                break;
            case 12:
                e_16 = "C";
                break;
            case 13:
                e_16 = "D";
                break;
            case 14:
                e_16 = "E";
                break;
            case 15:
                e_16 = "F";
                break;
            default:
                e_16 = to_string(e);                        // Если e % 16 < 10, то переменной присваивается число, переведенное в строку
        }
        if (a / 16 == 0)                                                // Проверка, чтобы при выводе не было 0E или подобного
            cout << "Это же число в шеснадцатеричной сс: " << e_16;
        else
            cout << "Это же число в шеснадцатеричной сс: " << d_16 + e_16;
    }

    else                                                // В случае, если пользователь ввел не двузначное число
        cout << "Введите двузначное число!";

    return 0;

}