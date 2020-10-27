#include <stdio.h>

int main() {
	int n;
	printf("1 - while\n2 - for\nNumber = "); scanf_s("%d", &n);
	switch (n) {
	case 1: {
		int m = 0;
		float s, p = 1500;
		while (m < 12) {
			s = (p + (p * 0, 0076));
			p = s;
			m++;
			printf("%d month(s) - %.2f\n",m, s);
		}
	} break;
	case 2: {
		int m;
		float s, p = 1500;
		for (m = 1; m <= 12; m++) {
			s = (p + (p * 0, 0076));
			p = s;
			printf("%d month(s) - %.2f\n", m, s);
		}
	} break; 
	default: printf("Incorrent number");
	}
}