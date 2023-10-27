#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	if (n % 2 != 0 && n * 2 < 30000)
	{
		n *= 2;
	}
	printf("%d", n);

	return 0;
}