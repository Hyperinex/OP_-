#include <stdio.h>

int main()
{
	float x, y;
	printf("Input x: "); scanf_s("%f", &x);
	printf("Input y: "); scanf_s("%f", &y);
	if (y > x + 1) printf("True");
	else if (y < -1 * x + 1 && y <= 1 && x >= 0) printf("True");
	else printf("False");
}