#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float dg, rd;
	printf("¬вед≥ть рад≥ани:\n");
	scanf_s("%f", &rd);

	if (rd > 0 && rd < 6.28) {
		dg = rd * 180 / 3.14;
		printf("%f рад≥ан - це %f градус≥в", rd, dg);
	}
	else {
		printf("¬вед≥ть корректне число");
	}

	return 0;
}