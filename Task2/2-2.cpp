
#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
double sum(double eps)
{
	int i = 0;
	double sum = 0;
	double a = 0;
	do
	{
		a = pow(-1, i) * (pow(2, i)) / (pow(i, i + 1) + 1);
		sum += a;
		i++;
	} while (abs(a) > eps);
	return sum;
}

void main()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Function summ = " << sum(eps);
}
