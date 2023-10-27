#include <stdio.h>

int main() {
	int month;

	printf("Enter a month (1-12): ");
	scanf_s("%d", &month);



	int daysInMonth;

	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		daysInMonth = 31;
		break;
	case 4: case 6: case 9: case 11:
		daysInMonth = 30;
		break;
	case 2:
		daysInMonth = 28;
		break;
	default:
		printf("Invalid month.\n");
		return 1;
	}

	printf("Number of days in month %d: %d\n", month, daysInMonth);

	return 0;
}
