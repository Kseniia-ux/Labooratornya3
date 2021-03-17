
#include "pch.h"
#include <iostream>

#include <math.h>
using namespace std;
int findFirstElement(double eps)
{
	int i;
	double count = 0;
	for (i = 0; ; i++)
	{
		count = pow(-1, i) * (pow(2, i)) / (pow(i, i + 1) + 1);
		if (abs(count) < eps)
		{
			break;
		}
	}
	return i + 1;
}
void main()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Number = " << findFirstElement(eps);
}
