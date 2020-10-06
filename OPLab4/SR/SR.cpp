#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float x, y;

	printf("Введіть значення x: ");
	scanf_s("%f", &x);

	printf("Введіть значення y: ");
	scanf_s("%f", &y);


	if (x > 2 || x < -2) {
		printf("False");
	}
	else if (y > 4 || y < -4) {
		printf("False");
	}
	else if (x == 0 && y == 0) {
		printf("True");
	}
	else if (x == 0 && y <= 4 || y >= -4) {
		printf("True");
	}
	else if (x == 1 || x == -1 && y == 1 || y == -1) {
		printf("True");
	}
	else if (x == 2 || x == -2 && y == 2 || y == -2) {
		printf("True");
	}
	else if (x == 2 || x == -3 && y == 3 || y == -3) {
		printf("True");
	}
	else if (x == 2 || x == -4 && y == 4 || y == -4) {
		printf("True");
	}
	else printf ("False");

	return 0;
}