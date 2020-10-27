#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
	int N, n = 1;
	float s, p = 0;
	printf("1 - while\n2 - for\nNumber = "); scanf_s("%d", &N);
	switch (N) {
	case 1: {
		while(1) {
			s = p + 1 + 1 / pow(n, 2);
			p = s;
			n++;
			printf("%.4f\t", s);
			system("pause");
		}
	} break;
	case 2: {
		for (n = 1; n <= 99; n++) {
			s = p + 1 + 1 / pow(n, 2);
			p = s;
			printf("%.4f\t", s);
			system("pause");
		}
		} break;
	default: printf("Incorrent number");
	}
}