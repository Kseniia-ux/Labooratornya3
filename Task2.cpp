
#include "pch.h"
#include <iostream>
#include <math.h>
   using namespace std;
   double sum(double eps)
   {
	   int i = 0;
	   double a = 0;
	   double sum = 0;
	   a = pow(-1, i) * (pow(2, i)) / (pow(i, i + 1) + 1);
	   for (int i = 0; abs(a) > eps; i++)
	   {
		   a = pow(-1, i) * (pow(2, i)) / (pow(i, i + 1) + 1);
		   sum += a;
		   cout << "n=" << i << "    " << "f=" << a << "\n";
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
