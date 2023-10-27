#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	double x, y;
	puts("Value for X: ");
	scanf_s("%lf", &x);
	if (x <= 0)
		y = 2;
	else if (x > 0 && x < 1)
		y = x + 2;
	else if (x >= 1 && x <= 2)
		y = 3;
	else if (x > 2 && x < 3)
		y = 5 - x;
	else if (x >= 3)
		y = 2;


	printf("Result = %.2lf", y);

	return 0;
}