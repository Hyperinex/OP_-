#include <stdio.h>
#include <windows.h>

int main() {
	int s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, x = 1;
	while (1) {
		s1  = 1 + x;	m1 = 1 * x;
		s2  = 2 + x;	m2 = 2 * x;
		s3  = 3 + x;	m3 = 3 * x;
		s4  = 4 + x;	m4 = 4 * x;
		s5  = 5 + x;	m5 = 5 * x;
		s6  = 6 + x;	m6 = 6 * x;
		s7  = 7 + x;	m7 = 7 * x;
		s8  = 8 + x;	m8 = 8 * x;
		s9  = 9 + x;	m9 = 9 * x;
		s10 = 10 + x;	m10 = 10 * x;
		printf("1 + %d = %d\t 1 * %d = %d\n", x, s1, x, m1);
		printf("2 + %d = %d\t 2 * %d = %d\n", x, s2, x, m2);
		printf("3 + %d = %d\t 3 * %d = %d\n", x, s3, x, m3);
		printf("4 + %d = %d\t 4 * %d = %d\n", x, s4, x, m4);
		printf("5 + %d = %d\t 5 * %d = %d\n", x, s5, x, m5);
		printf("6 + %d = %d\t 6 * %d = %d\n", x, s6, x, m6);
		printf("7 + %d = %d\t 7 * %d = %d\n", x, s7, x, m7);
		printf("8 + %d = %d\t 8 * %d = %d\n", x, s8, x, m8);
		printf("9 + %d = %d\t 9 * %d = %d\n", x, s9, x, m9);
		printf("10 + %d = %d\t 10 * %d = %d\n", x, s10, x, m10);
		system("pause");
		x++;
	}
}