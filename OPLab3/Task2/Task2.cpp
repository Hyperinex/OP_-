#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a, x, y;

	printf("������ ����� � �������� ��������:\n");
	scanf_s("%lf", &a);

	y = modf(a, &x);

	printf("�� %.0f ���������� ����� ����� �������� %.0f ���� �� %.0f �������", x, y * 100, x);

	return 0;
}