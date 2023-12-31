#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, discriminant, root1, root2;

	printf("Enter a, b and c: ");
	scanf_s("%lf %lf %lf", &a, &b, &c);

	discriminant = b * b - 4 * a * c;

	if (discriminant > 0) {
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
	}
	else if (discriminant == 0) {
		root1 = -b / (2 * a);
		printf("root1 = root2 = %.2lf;", root1);
	}
	else {
		puts("Complex solution yet to be implemented...");
	}

	return 0;
}
