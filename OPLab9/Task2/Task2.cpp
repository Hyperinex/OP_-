#include <stdio.h>

int main() {
	int N, input;
	do {
		printf("Input N: "); scanf_s("%d", &N);
		if (100 <= N && N <= 999) {
			printf("%d%d%d\n", N % 10, N / 10 % 10, N / 100);
		}
		else printf("Not a three digit number\n");
		printf("Continue? 1 - yes, 2 - no: "); scanf_s("%d", &input);
	} while (input != 2);
}