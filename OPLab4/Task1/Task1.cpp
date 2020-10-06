#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float a, b, c, D, x1, x2, x;

	printf("Введіть значення a: ");
	scanf_s("%f", &a);

	printf("Введіть значення b: ");
	scanf_s("%f", &b);

	printf("Введіть значення c: ");
	scanf_s("%f", &c);

	if (a == 0 || b == 0 || c == 0) {
		printf("Введіть правильні значення змінних");
	}
	else {

		D = pow(b, 2) - 4 * a * c;

		printf("D = %.2f\n", D);

		if (D < 0) {
			printf("Коренів немає");
		}
		else if (D > 0) {
			x1 = (-1 * b - pow(D, 1.0 / 2)) / (2 * a);
			x2 = (-1 * b + pow(D, 1.0 / 2)) / (2 * a);
			printf("x1 = %f\nx2 = %f\n", x1, x2);
		}
		else if (D == 0) {
			x = -1 * (b / (2 * a));
			printf("x = %f", x);
		}
	}
	return 0;
}