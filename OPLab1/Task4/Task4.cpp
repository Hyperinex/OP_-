// Task4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>
#include <windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c, d;
	printf("Введіть значення а: ");
	scanf("%d", &a);
	printf("Введіть значення b: ");
	scanf("%d", &b);
	printf("Введіть значення c: ");
	scanf("%d", &c);
	d = a / b - a / c + a * a;
	printf("Результат: d = %d\n",d);
    return 0;
}

