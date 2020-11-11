#include <stdio.h>

int main() {
	int i, j, s;
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 7; j++) {
			s = (i + j) / 2*j;
			printf("s = %d\n", s);
		}
	}
}