#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a, x, y;

	printf("Введіть число з дробовою частиною:\n");
	scanf_s("%lf", &a);

	y = modf(a, &x);

	printf("На %.0f контрольній роботі можна отримати %.0f балів за %.0f завдань", x, y * 100, x);

	return 0;
}