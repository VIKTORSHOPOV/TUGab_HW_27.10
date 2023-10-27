#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	if (num1 % num2 == 0)
	{
		puts("The two numbers are not divisible without a remainder");
	}
	printf("Whole: %d  Remainder: %d", num1 / num2, num1 % num2);

}