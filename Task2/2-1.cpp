

#include "pch.h"
#include <iostream>

#include <math.h>
using namespace std;
double sum(double eps)
{
	int i = 0;
	double sum = 0;
	double a = pow(-1, i) * (pow(2, i)) / (pow(i, i + 1) + 1);
	while (abs(a) > eps)
	{
		
		a= pow(-1, i) * (pow(2, i)) / (pow(i, i + 1) + 1);
		sum += a;
		i++;

	}
	return sum;
}

void main()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Function summ = " << sum(eps);
}
