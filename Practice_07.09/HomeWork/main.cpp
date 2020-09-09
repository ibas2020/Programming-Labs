/*
Задача на дом. Три переменные: a, b и с. Найти среди них максимальное и минимальное значения
и вывести их в консоль.
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Введите числа a, b и с: ";
    cin >> a >> b >> c;
    if (a > b && a > c)
        if (b > c)
            cout << "max = " << a << ", min = " << c;
        else
            cout << "max = " << a << ", min = " << b;
    else
        if (b > c && b > a)
            if (a > c)
                cout << "max = " << b << ", min = " << c;
            else
                cout << "max = " << b << ", min =" << a;
        else
            if (a > b)
                cout << "max = " << c << ", min = " << b;
            else
                cout << "max = " << c << ", min = " << a;
    return 0;
}
