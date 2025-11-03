#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    int *ptr_int = &a;
    float *ptr_float = &b;
    char *ptr_char = &c;

    printf("Integer pointer: Address = %p, Value = %d\n",&ptr_int, *ptr_int);
    printf("Float pointer:   Address = %p, Value = %.2f\n", &ptr_float, *ptr_float);
    printf("Char pointer:    Address = %p, Value = %c\n", &ptr_char, *ptr_char);

    return 0;
}

