#include "pch.h"
#include <iostream>

using namespace std;
void taskk1(), task2(), task3(), task4(),task5();
void menu()
{
	cout << "Задания ЛР3 с циклом Do..While" << endl
		<< "[1] Задание 1 " << endl
		<< "[2] Задание 2" << endl
		<< "[3] Задание 3" << endl
		<< "[4] Задание 4" << endl
		<< "[5] Задание 5" << endl
		<< "[6] Выход" << endl
		<< "Введите номер подпункта: ";
}

int main()
{
	int g;
	setlocale(LC_CTYPE, "rus");
	while (true)
	{
		menu();
		cin >> g;
		system("cls");
		switch (g)
		{
		case 1:
			taskk1();
			break;
		case 2:
			task2();
			break;
		case 3:
			task3();
			break;
		case 4:
			task4();
			break;
		case 5:
			task5();
			break;
		case 6:
			return true;
		}
		system("pause");
	}
}

