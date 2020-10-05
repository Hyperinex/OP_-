#include <stdio.h>
#include <math.h>
#include <windows.h>


int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float m, n;

	printf("¬вед≥ть m: ");
	scanf_s("%f", &m);

	printf("¬вед≥ть n: ");
	scanf_s("%f", &n);

	//pershiy
	float s1;
	s1 = n- -m;

	printf("1) n--m = %f\n", s1);

	//drugiy
	printf("2) m--<n is ");
	(m-- < n) ? (printf("True\n")) : (printf("False\n"));

	//tretiy
	printf("3) n++>m is ");
	(n++>m) ? (printf("True\n")) : (printf("False\n"));

	//chetvertiy
	float s2;
	s2 = m * ++n;
	printf("4) m*++n = %f\n", s2);

	//pyatiy
	float s3;
	s3 = n-- + m;
	printf("5) n--+m = %f\n", s3);

	//shostiy
	float s4;
	s4 = n++ + m++;
	printf("6) n+++m++ = %f\n", s4);

	//final
	printf("m = %f\nn = %f", m,n);

	return 0;
}