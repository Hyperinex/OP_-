#include <stdio.h>

int main()
{
    int n, num;
    printf("Input needed number:\n"); 
    scanf_s("%d", &n);
    num = n;
    for (; ;) {
        if (n != 1) {
            if (n % 2 == 0) n = n / 2;
            else if (n % 2 != 0) n = (n * 3 + 1) / 2;
        }
        else break;
    }
    printf("Number = %d\nResult = %d", num, n);
}