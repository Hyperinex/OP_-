#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c, d;

	printf("¬вед≥ть ј:");
	scanf_s("%d", &a);
	printf("¬вед≥ть B:");
	scanf_s("%d", &b);
	printf("¬вед≥ть C:");
	scanf_s("%d", &c);
	printf("¬вед≥ть D:");
	scanf_s("%d", &d);

	printf("A = %d, B = %d, C = %d, D = %d\n", a, b, c, d);
	// A to D
	a = a + d;
	d = a - d;
	a = a - d;
	printf("A = %d, D = %d\n", a, d);
	// D to C
	d = d + c;
	c = d - c;
	d = d - c;
	printf("D = %d, C = %d\n", d, c);
	// A to B
	a = a + b;
	b = a - b;
	a = a - b;
	printf("A = %d, B = %d\n", a, b);

	return 0;
}
