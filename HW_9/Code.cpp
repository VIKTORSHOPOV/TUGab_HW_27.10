#include <stdio.h>

int main() {
	double time;

	printf("Enter the time of day (in hours, 0-23): ");
	scanf_s("%lf", &time);

	if (time >= 5 && time < 10) {
		printf("Good morning!\n");
	}
	else if (time >= 10 && time < 17) {
		printf("Good day!\n");
	}
	else if (time < 5 || time >= 17) {
		printf("Good evening!\n");
	}
	else {
		printf("Invalid input. Please enter a time between 0 and 23.\n");
	}

	return 0;
}
