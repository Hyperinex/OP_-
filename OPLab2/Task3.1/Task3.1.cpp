#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float dg, rd;
	printf("������ ������:\n");
	scanf_s("%f", &rd);

	if (rd > 0 && rd < 6.28) {
		dg = rd * 180 / 3.14;
		printf("%f ����� - �� %f �������", rd, dg);
	}
	else {
		printf("������ ��������� �����");
	}

	return 0;
}