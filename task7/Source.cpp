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
	cout << "������� ����� n\n��������� �������� ����� n ���������\n";
	cin >> i;
	cout << "����� sum = " << summ(i);
}
void task2()
{
	double eps;
	cout << "��������� �������� � �������� ��������� \n������� eps =  ";
	cin >> eps;
	cout << "Function summ = " << summ2(eps);
}
void task3()
{
	int n, k = 0;
	cout << "��������� �������� n ������ �������� k ����\n������� n = ";
	cin >> n;
	cout << "������� k = ";
	cin >> k;
	print(n, k);
}
void task4()
{
	double eps;
	cout << "��������� ���������� ����� ������� �������� ������� ������ ��� ����� �������� ��������\n������� eps = ";
	cin >> eps;
	cout << "����� = " << findFirstElement(eps);
}
void task5()
{
	double eps;
	cout << "��������� ���������� ����� ������� �������������� �������� ������� ������ ��� ����� �������� ��������\n������� eps = ";
	cin >> eps;
	cout << "����� = " << findFirstNegativeElement(eps);
}
