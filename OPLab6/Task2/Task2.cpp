#include <stdio.h>

int main() {
	float x;
	printf("x = "); scanf_s("%f", &x);
	(x > 2 && x < 4) ? printf("True") : printf("False");
}