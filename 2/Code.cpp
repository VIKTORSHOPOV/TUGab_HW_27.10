#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, S, p;
	scanf_s("%lf %lf %lf", &a, &b, &c);
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	if (a + b > c && b + c > a && a + c > b)
	{


		if (a == b == c)
		{
			puts("Ravnostranen");
		}
		else if (a == b || b == c || a == c)
		{
			puts("Ravnobedred");
		}
		else
		{
			puts("Raznostranen");
		}
		printf("S = %.lf2", S);
	}
	else
	{
		puts("Nevalidni danni");
	}


	return 0;
}