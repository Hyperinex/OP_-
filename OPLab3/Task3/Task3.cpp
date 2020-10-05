#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float a, b, s;
	double ad, bd, sd;

	/*
	float a = 100, b = 0.001, s;
	double ad = 100, bd = 0.001, sd;
	*/

	printf("Введіть значення a float:");
	scanf_s("%f", &a);
	
	printf("Введіть значення b float:");
	scanf_s("%f", &b);
	
	printf("Введіть значення a double:");
	scanf_s("%lf", &ad);

	printf("Введіть значення b double:");
	scanf_s("%lf", &bd);


	s = (pow(a - b, 4) - (pow(a, 4) - 4 * pow(a, 3) * b + 6 * pow(a, 2) * pow(b, 2))) / (pow(b,4) - 4*a*pow(b,3));
	sd = (pow(ad - bd, 4) - (pow(ad, 4) - 4 * pow(ad, 3) * bd + 6 * pow(ad, 2) * pow(bd, 2))) / (pow(bd, 4) - 4 * ad * pow(bd, 3));
	printf("Відповідь у float: %f\nВідповідь у double: %f", s, sd);

	return 0;
}