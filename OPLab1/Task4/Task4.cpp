// Task4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <math.h>
#include <windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c, d;
	printf("������ �������� �: ");
	scanf("%d", &a);
	printf("������ �������� b: ");
	scanf("%d", &b);
	printf("������ �������� c: ");
	scanf("%d", &c);
	d = a / b - a / c + a * a;
	printf("���������: d = %d\n",d);
    return 0;
}

