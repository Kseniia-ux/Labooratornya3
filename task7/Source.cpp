#include "pch.h"
#include <iostream>
using namespace std;
double summ(int n)
{
	double a = 0;
	double sum = 0;
	int i = 0;
	while (i <= n)
	{
		a = pow(-1, i) * (pow(2, i)) / (pow(i, i + 1) + 1);
		sum += a;
		cout << "n=" << i << "    " << "f=" << a << "\n";
		++i;
	}
	return sum;
}

double summ2(double eps)
{
	int i = 0;
	double sum = 0;
	double a = pow(-1, i) * (pow(2, i)) / (pow(i, i + 1) + 1);
	while (abs(a) > eps)
	{

		a = pow(-1, i) * (pow(2, i)) / (pow(i, i + 1) + 1);
		sum += a;
		i++;

	}
	return sum;
}

void print(int n, int k)
{
	double count = 0;
	int i = 0;
	while (i <= n)
	{
		count = pow(-1, i) * (pow(2, i)) / (pow(i, i + 1) + 1);
		if ((i + 1) % k == 0)
		{
			i++;
			continue;
		}
		else
		{
			cout << count << " ";
		}
		i++;
	}
}

int findFirstElement(double eps)
{
	int i = 0;
	double count = 0;
	while (true)
	{
		count = pow(-1, i) * (pow(2, i)) / (pow(i, i + 1) + 1);
		i++;
		if (abs(count) < eps)
		{
			break;
		}
	}
	return i+1;
}

int findFirstNegativeElement(double eps)
{
	int i = 0;
	double count = 0;
	while (true)
	{
		count = pow(-1, i) * (pow(2, i)) / (pow(i, i + 1) + 1);
		i++;
		if (abs(count) < eps && count < 0)
		{
			return i;
		}
	}
}

void taskk1()
{
	int i;
	cout << "Введите число n\nПрограмма вычислит сумму n слагаемых\n";
	cin >> i;
	cout << "Сумму sum = " << summ(i);
}
void task2()
{
	double eps;
	cout << "Программа вычислит с заданной точностью \nВведите eps =  ";
	cin >> eps;
	cout << "Function summ = " << summ2(eps);
}
void task3()
{
	int n, k = 0;
	cout << "Программа печатает n членов исключая k член\nВведите n = ";
	cin >> n;
	cout << "Введите k = ";
	cin >> k;
	print(n, k);
}
void task4()
{
	double eps;
	cout << "Программа возвращает номер первого элемента который меньше или равен заданной точности\nВведите eps = ";
	cin >> eps;
	cout << "Номер = " << findFirstElement(eps);
}
void task5()
{
	double eps;
	cout << "Программа возвращает номер первого отрицательного элемента который меньше или равен заданной точности\nВведите eps = ";
	cin >> eps;
	cout << "Номер = " << findFirstNegativeElement(eps);
}
