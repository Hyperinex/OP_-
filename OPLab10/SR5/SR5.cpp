#include <stdio.h>

int main()
{
    int n;
    printf("Input number: \n"); 
    scanf_s("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i * j == n) {
                printf("\n%d * %d = %d\n", i, j, n);
            }
        }
    }
}