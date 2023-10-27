#include <iostream>
#include <stdio.h>
#include <math.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
int main()
{
	double a, b, c;
	scanf_s("%lf %lf %lf", &a, &b, &c);
	double sum = a + b + c;
	double max = MAX(MAX(a, b), c);
	if (sum - max > max)
	{
		puts("Valid Values for a Triangle");
	}
	else
	{
		puts("Invalid Values for a Triangle");
	}
}