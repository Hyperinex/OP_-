#include <stdio.h>
#include <windows.h>

int main() {
	SetConsoleCP(1251); SetConsoleOutputCP(1251);
	int n;
	printf("Введіть число: "); scanf_s("%d", &n);
	switch (n) {
	case 10: printf("десять навчальних завдань");           break;
	case 11: printf("одинадцять навчальних завдань");       break;
	case 12: printf("дванадцять навчальних завдань");       break;
	case 13: printf("тринадцять навчальних завдань");       break;
	case 14: printf("чотирнадцять навчальних завдань");     break;
	case 15: printf("п'ятнадцять навчальних завдань");      break;
	case 16: printf("шістнадцять навчальних завдань");      break;
	case 17: printf("сімнадцять навчальних завдань");       break;
	case 18: printf("вісімнадцять навчальних завдань");     break;
	case 19: printf("дев'ятнадцять навчальних завдань");    break;
	case 20: printf("двадцять навчальних завдань");         break;
	case 21: printf("двадцять одне навчальне завдання");    break;
	case 22: printf("двадцять два навчальних завдання");    break;
	case 23: printf("двадцять три навчальних завдань");     break;
	case 24: printf("двадцять чотири навчальних завдання"); break;
	case 25: printf("двадцять п'ять навчальних завдань");   break;
	case 26: printf("двадцять шість навчальних завдань");   break;
	case 27: printf("двадцять сім навчальних завдань");     break;
	case 28: printf("двадцять вісім навчальних завдань");   break;
	case 29: printf("двадцять дев'ять навчальних завдань"); break;
	case 30: printf("тридцять навчальних завдань");         break;
	case 31: printf("тридцять одне навчальне завдання");    break;
	case 32: printf("тридцять два навчальних завдання");    break;
	case 33: printf("тридцять три навчальних завдання");    break;
	case 34: printf("тридцять чотири навчальних завдань");  break;
	case 35: printf("тридцять п'ять навчальних завдань");   break;
	case 36: printf("тридцять шість навчальних завдань");   break;
	case 37: printf("тридцять сім навчальних завдань");     break;
	case 38: printf("тридцять вісім навчальних завдань");   break;
	case 39: printf("тридцять дев'ять навчальних завдань"); break;
	case 40: printf("сорок навчальних завдань");            break;
	default: printf("Введіть правильне число");
	}
}