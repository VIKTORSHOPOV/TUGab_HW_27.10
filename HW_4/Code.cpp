#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%s", (n % 2 == 0) ? "\a\a" : "\a\a\a");


	int a, b;
	scanf_s("%d %d", &a, &b);
	if (a % b > 3)
		printf("%d", a / b + a % b);
	else
		printf("%d", a / b - a % b);

	return 0;
}