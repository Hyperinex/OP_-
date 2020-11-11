#include <stdio.h>

int main() {
    int a, l, k = 0, n, d, y = 1;
    printf("Input lenght of the square's side\n");
    scanf_s("%d", &a);
    n = (a * 2) - 5;
    d = a - 2;
    printf("\n");
    for (int i = 0; i < a; i++) {
        printf("x ");
    }

    for (int i = 0; i < d; i++) {
        printf("\nx");
        for (int j = 0; j < k; j++) {
            printf(" ");
        }
        for (int j = 0; j < y; j++) {
            printf(" ");
        }
        y++;
        printf("x");
        k++;
        for (int j = 0; j < n; j++) {
            printf(" ");
        }
        n -= 2;
        printf("x");
    }
    printf("\n");
    for (int i = 0; i < a; i++) {
        printf("x ");
    }
    printf("\n");
}
