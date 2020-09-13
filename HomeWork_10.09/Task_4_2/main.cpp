// Домашнее задание №1. Задание №4.2

#include <iostream>

using namespace std;

int main()
{
	
	int a, b, c;
	
	cout << "Введите 3 числа: ";        // Ввод
	cin >> a >> b >> c;
	
	if (a >= b && a >= c)               // Невложенные ветвления сразу с выводом максимального числа
		cout << "Max = " << a;
	else if (b >= c && b >= a)
		cout << "Max = " << b;
	else if (c >= a && c >= b)
		cout << "Max = " << c;
			
	return 0;
}