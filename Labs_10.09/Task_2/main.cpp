// Задание №2

#include <iostream>
using namespace std;

int main()
{

    float vklad, days, earnings, percent, years;
    cout << "Введите размер вклада: ";                          // Вводы и выводы
    cin >> vklad;
    cout << "Введите процентную ставку (в процентах): ";
    cin >> percent;
    cout << "Введите количество дней: ";
    cin >> days;

    years = days / 365;
    earnings = vklad * years * (percent / 100);                 // Конечная формула

    cout << "Велечина дохода по вкладу: " << earnings;

    return 0;
}