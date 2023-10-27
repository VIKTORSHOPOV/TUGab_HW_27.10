#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	double n1, n2;
	scanf_s("%lf %lf", &n1, &n2);
	printf("The bigger number is: %.2lf", (n1 > n2) ? n1 : n2);
}