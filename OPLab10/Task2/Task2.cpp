#include <stdio.h>

int main() {
	int k, t, b, sum=100;
	for (b = 0; b <= sum / 10; b++) {
		for (k = 0; k <= (sum - b * 10) / 5; k++) {
			t = (sum - b * 10 - k * 5) / 0.5;
			printf("Koriv: %d\nBykiv: %d\nTelyat: %d\n\n", k, b, t);
		}
	}
}