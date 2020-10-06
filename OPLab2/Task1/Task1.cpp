
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a, b, c, d, e, f, g, s, x, y, z;
	float d1, d2, d21, d3, d4, d5, d6;
	float s1, s2, s3;

	printf("¬вед≥ть значенн€ x:\n");
	scanf_s("%f", &x);
	printf("¬вед≥ть значенн€ y:\n");
	scanf_s("%f", &y);
	printf("¬вед≥ть значенн€ z:\n");
	scanf_s("%f", &z);

	s1 = pow(2, (-1 * x)) * (sqrt(x + pow(fabs(y), 1.0 / 4))) * pow(exp(x - 1 / sin(z)), (1.0 / 3)); //метод 1

	d1 = pow(2, -1 * x);
	d2 = sqrt(sqrt(fabs(y)));																		//метод 2
	d3 = x + d2;
	d4 = sqrt(d3);
	d5 = exp(x - 1 / sin(z));
	d6 = pow(d5, 1.0 / 3);
	s2 = d1 * d4 * d6;

	a = pow(2, -1 * x);																				//метод 3
	b = fabs(y);
	c = pow(b, 1.0 / 4);
	d = x + c;
	e = sqrt(d);
	f = exp(x - 1 / sin(z));
	g = pow(f, 1.0 / 3);
	s3 = a * e * g;

	printf("s1 = %f\ns2 = %f\ns3 = %f", s1,s2,s3);

	return 0;
}