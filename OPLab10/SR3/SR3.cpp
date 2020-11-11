#include <stdio.h>
#include <math.h>

int main()
{
    int n, nl, x[100], y, sum = 0, max = 0, k = 0;
    printf("How many numbers?\n"); 
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Input number\n"); 
        scanf_s("%d", &x[i]);
        printf("How many digits does it has?\n"); 
        scanf_s("%d", &nl);
        y = x[i];
        for (int j = 0; j < nl; j++) {
            y = abs(y);
            sum = sum + ((y) % 10);
            y = y / 10;
        }
        if (sum > max) { max = sum; k = x[i]; }
        sum = 0;
    }
    printf("Number = %d\nIts sum = %d\n", k, max);
}