#include <iostream>
#include <stdio.h>
#include <math.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
int main()
{
	int x, y, z;
	scanf_s("%d %d %d", &x, &y, &z);
	printf("%d", MAX(MAX(x, y), z));
}