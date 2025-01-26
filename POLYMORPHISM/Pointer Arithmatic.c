#include<stdio.h>

void arithmatic_by_reference(int *a, int *b) {
    printf("Arithmetic Operations of %d and %d.", a, b);
    printf("Addition: %d", *a + *b);
    printf("Subtraction: %d", *a - *b);
    printf("Multiplication: %d", *a * *b);
    printf("Division: %d", *a / *b);
}

int main()
{
    arithmatic_by_reference(10, 20);
}
