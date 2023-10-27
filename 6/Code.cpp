#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int k;
	double area = 0;
	puts("1 - Triangle\n2 - Square\n3 - Circle\n4 - Rectangle");
	scanf_s("%d", &k);
	switch (k)
	{
	case 1: double side1, height1;
		puts("Solving for Triangle, enter values for side and height: ");
		scanf_s("%lf %lf", &side1, &height1);
		area = side1 * height1 * ((double)1 / 2);
		break;
	case 2:
		double side2;
		puts("Solving for Square, enter value for side: ");
		scanf_s("%lf", &side2);
		area = pow(side2, 2);
		break;
	case 3:
		double radius3;
		puts("Solving for Circle, enter value for radius: ");
		scanf_s("%lf", &radius3);
		area = pow(radius3, 2) * 3.14;
		break;
	case 4:
		puts("Solving for Rectangle, enter value for side1 and side2: ");
		double sideA4, sideB4;
		scanf_s("%lf %lf", &sideA4, &sideB4);
		area = sideA4 * sideB4;
		break;
	default:
		puts("Unsupported Shape index");
		break;
	}

	printf("Area = %.2lf", (k >= 1 && k <= 4) ? area : -1);

	return 0;
}