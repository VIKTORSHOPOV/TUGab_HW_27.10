#include <stdio.h>

int main() {
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number >= -10 && number <= 10) {
		if (number < 0) {
			printf("The number is negative.\n");
		}
		else if (number > 0) {
			printf("The number is positive.\n");
		}
		else {
			printf("The number is zero.\n");
		}
	}
	else {
		printf("The number is out of range.\n");
	}

	return 0;
}
