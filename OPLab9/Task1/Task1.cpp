#include <stdio.h>

int main() {
	int cnt = 1;
	do {
		int even, mult, value, save = 1;
		printf("Input needed numbers: \n");
		scanf_s("%d", &value);
		do {
			if (value % 2 == 0) even = value;
			else even = 1;
			scanf_s("%d", &value);
			even = save * even;
			mult = even;
			save = mult;
		} while (value != 0);
		printf("Mult - %d\n", mult);
		printf("Continue? 1 - yes, 2 - no\n");
		scanf_s("%d", &cnt);
	} while (cnt != 2);
}