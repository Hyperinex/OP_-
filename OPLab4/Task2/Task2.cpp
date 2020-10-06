#include <stdio.h>
#include <math.h>
#include <windows.h>


int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float x, y;

	printf("Введіть значення x: ");
	scanf_s("%f", &x);

	if (x <= 2) {
		y = pow(x, 2) + 4 * x + 5;
		printf("y = %.2f", y);
	}
	else if (x > 2) {
		y = 1 / (pow(x, 2) + 4 * x + 5);
		printf("y = %.2f", y);
	}
	else {
		printf("Неправильне значення x");
	}

	return 0;
}