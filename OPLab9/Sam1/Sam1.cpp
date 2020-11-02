#include <stdio.h>

int main() {
	int cnt=1;
	do {
		int n = 1, pos10 = 0, pos5 = 0, value;
		printf("Input 10 numbers: \n");
		scanf_s("%d", &value);
		do {
			if (value > 10) pos10++;
			if (value > 5) pos5++;
			scanf_s("%d", &value);
			n++;
		} while (n < 10);
		if (pos10 > 4) printf("Karaul!\n");
		else printf("pos10: %d\npos5: %d\n", pos10, pos5);
		printf("Continue? 1 - yes, 2 - no\n");
		scanf_s("%d", &cnt);
	} while (cnt != 2);
}
