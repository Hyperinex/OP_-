#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float u, min, max, x, y, z;

	printf("Введіть значення x: ");
	scanf_s("%f", &x);

	printf("Введіть значення y: ");
	scanf_s("%f", &y);

	printf("Введіть значення z: ");
	scanf_s("%f", &z);

	if (x > y && x > z) {
		max = x;
	}
	else if (y > x && y > z) {
		max = y;
	}
	else if (z > x && z > y) {
		max = z;
	}
	if (x < y && x < z) {
		min = x;
	}
	else if (y < x && y < z) {
		min = y;
	}
	else if (z < x && z < y) {
		min = z;
	}

	printf("max = %.2f\nmin = %.2f\n", max, min);

	u = (max - 6 * min) / (cos(x) + max * min);

	printf("u = %f", u);

}