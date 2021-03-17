
#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
int findFirstNegativeElement(double eps)
{
	int i = 0;
	double count = 0;
	do
	{
		count = pow(-1, i) * (pow(2, i)) / (pow(i, i + 1) + 1);
		i++;
		if (abs(count) < eps && count < 0)
		{
			return i;
		}
	} while (true);
}
void main()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Number = " << findFirstNegativeElement(eps);
}
