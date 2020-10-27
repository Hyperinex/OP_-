#include <stdio.h>
#include <math.h>

int main() {
	int N;
	float x, s;
	printf("Choose F(x)\n1 - (2x+1)/(x)^1/2\n2 - (xcos(x))^1/2\n"); scanf_s("%d", &N);
	switch (N) {
	case 1: {
		printf("Choose what to use while - 1, for - 2\n"); scanf_s("%d", &N);
		switch (N) {
		case 1: {
			x = 7;
			while (x >= 7 && x <= 8) {
				s = (2 * x + 1) * sqrt(x);
				x++;
				printf("%f\t", s);
			}
		}break;
		case 2: {
			for (x = 7; x >= 7 && x <= 8; x++) {
				s = (2 * x + 1) * sqrt(x);
				printf("%f\t", s);
			}
		}break;
		default: printf("Incorrect number");
		}
	} break;
	case 2: {
		printf("Choose what to use while - 1, for - 2\n"); scanf_s("%d", &N);
		switch (N) {
		case 1: {
			x = 1;
			while (x >= 1 && x <= 1.5) {
				s = pow(x, 1.0 / 5) * cos(x);
				x = x + 0.1;
				printf("%f\t", s);
			}
		}break;
		case 2: {
			for (x = 1; x >= 1 && x <= 1.5; x = x + 0.1) {
				s = pow(x, 1.0 / 5) * cos(x);
				printf("%f\t", s);
			}
		}break;
		default: printf("Incorrect number");
		}
	} break;
	default: printf("Incorrect number");
	}
}