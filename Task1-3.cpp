

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
double sum(int n)
{
	double a = 0;
	double sum = 0;
	int i = 0;
	do
	{
		a = pow(-1, i) * (pow(2, i)) / (pow(i, i + 1) + 1);
		sum += a;
		i++;
	} while (i <= n);
	return sum;
}
void main()
{
	int i;
	cout << "Vvedide chislo n";
	cin >> i;
	cout << "Function sum = " << sum(i);
}

