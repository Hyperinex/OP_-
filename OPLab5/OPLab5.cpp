#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleCP(1251);	SetConsoleOutputCP(1251);
	int n;
	printf("Введіть номер завдання: "); scanf_s("%d", &n);
	switch (n) {
	case 1: {
		int m;
		printf("Введіть номер місяця: "); scanf_s("%d", &m);
		switch (m) {
		case 1:  printf("Зима");  break;
		case 2:  printf("Зима");  break;
		case 3:  printf("Весна"); break;
		case 4:  printf("Весна"); break;
		case 5:  printf("Весна"); break;
		case 6:  printf("Літо");  break;
		case 7:  printf("Літо");  break;
		case 8:  printf("Літо");  break;
		case 9:  printf("Осінь"); break;
		case 10: printf("Осінь"); break;
		case 11: printf("Осінь"); break;
		case 12: printf("Зима");  break;
		default: printf("Введіть правильний номер");
		}
	} break;
	case 2: {
		float x, y, fx, a;
		printf("Введіть значення x: ");                                        scanf_s("%f", &x);
		printf("Введіть значення y: ");                                        scanf_s("%f", &y);
		printf("Виберіть вид функції f(x): \n1 - sin(x)\n2 - x^2\n3 - e^x\n"); scanf_s("%f", &fx);
		if (x > y) {
			a = y * pow(fx, 1.0 / 2) + 3 * sin(x);
			printf("a = %f", a);
		}
		else if (x == y) {
			a = x * pow(fabs(fx), 1.0 / 2);
			printf("a = %f", a);
		}
		else {
			a = pow(fabs(fx), 1.0 / 3) + pow(x, 3) / y;
			printf("a = %f", a);
		}
	} break;
	default: printf("Неправильний номер завдання");
	}
}