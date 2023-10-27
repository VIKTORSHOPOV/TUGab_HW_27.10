#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<windows.h>

int main()
{
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	printf("%10x", (num1 > num2) ? num1 : num2);
	return 0;
}