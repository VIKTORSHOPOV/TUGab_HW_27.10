#include <stdio.h>

int main() {
	char op;
	int num1, num2, result;

	printf("Enter an operator (+, -, *, /): ");
	scanf_s("%c", &op);

	printf("Enter two integers: ");
	scanf_s("%d %d", &num1, &num2);

	switch (op) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		if (num2 != 0) {
			result = num1 / num2;
		}
		else {
			printf("Error: Division by zero!\n");
			return 1;
		}
		break;
	default:
		printf("Invalid operator!\n");
		return 1;
	}

	printf("Result: %d\n", result);

	return 0;
}
