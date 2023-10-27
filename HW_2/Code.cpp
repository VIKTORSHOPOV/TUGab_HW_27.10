#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%s", n % 2 == 0 ? "Even" : "Odd");
}