
#include "pch.h"
#include <iostream>
#include "math.h"

using namespace std;

double sum(int n)
{
	double a = 0;
	double sum = 0;
	int i = 0;
	while (i<= n)
	{
		a= pow(-1, i) * (pow(2, i)) / (pow(i, i + 1) + 1);
			sum += a;
		cout << "n=" << i << "    " << "f=" << a << "\n";
		++i;
	}
	return sum;
}
void main()
{
	int i;
	cout << "Vvedide chislo n";
	cin >> i;
	cout << "Function sum = " << sum(i);
}
