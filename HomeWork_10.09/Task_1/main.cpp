// Домашняя работа №1. Задание №1.

#include <iostream>

using namespace std;

int main()
{

	float total_cost, S, fuel, fuel_cost;
	
	cout << "Введите расстояние до дачи (в километрах): ";                  // Ввод
	cin >> S;
	cout << "Введите количество бензина, которое потребляет автомобиль на 100 км пробега: ";
	cin >> fuel;
	cout << "Введите цену одного литра бензина: ";
	cin >> fuel_cost;

	total_cost = ((S * 2) / 100) * fuel * fuel_cost;                // Расстояние в одну сторону * 2 = общее расстояние
	
	cout << "Стоимость поездки на автомобиле на дачу (туда и обратно): " << total_cost;     // Вывод

	return 0;
	
}