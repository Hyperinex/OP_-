#include <stdio.h>

int main()
{
    int num, input = 1, count = 0;
    printf("What number should we count?\n"); 
    scanf_s("%d", &num);
    printf("Input numbers:\n");
    do {
            scanf_s("%d", &input);
            if (input == num) count += 1;
    } while (input != 0);
    printf("Number %d repeats %d times", num, count);
}