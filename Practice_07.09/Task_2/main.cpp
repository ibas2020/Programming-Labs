// Задача 2. Дано двухзначное число. Вывести значения разрядов десятков и единиц.

#include <iostream>
using  namespace std;

int main() {
    int a, b, c;
    cout << "Введите двухзначное число: ";
    cin >> a;
    if (a / 10 < 10 && a / 10 > 0) {
                                                        // Проверка на то, что пользовтель ввел положительное двухзначное число
        b = a % 10;                                     // Единицы
        c = a / 10;                                     // Десятки
        cout << "Количество десятков = " << c << endl << "Количество единиц = " << b;
    }
    else {

        cout << "Введите, пожалуйста, положительное двухзначное число!";   // Выводит сообщение об ошибке

    }
    return 0;
}
