#include <stdio.h>

int main() {
    int a = 100;
    float b = 3.14;
    char c = 'Z';

    int *ptr_int = &a;
    float *ptr_float = &b;
    char *ptr_char = &c;

    printf("INT POINTER:\n");
    printf("Original address: %d, value: %d\n", ptr_int, *ptr_int);
    ptr_int++;
    printf("After increment:  %d (value unknown)\n", ptr_int);
    ptr_int--;
    printf("After decrement:  %d, value: %d\n\n", ptr_int, *ptr_int);

    printf("FLOAT POINTER:\n");
    printf("Original address: %d, value: %f\n", ptr_float, *ptr_float);
    ptr_float++;
    printf("After increment:  %d (value unknown)\n", ptr_float);
    ptr_float--;
    printf("After decrement:  %d, value: %f\n\n", ptr_float, *ptr_float);

    printf("CHAR POINTER:\n");
    printf("Original address: %d, value: %c\n", ptr_char, *ptr_char);
    ptr_char++;
    printf("After increment:  %d (value unknown)\n", ptr_char);
    ptr_char--;
    printf("After decrement:  %d, value: %c\n", ptr_char, *ptr_char);

    return 0;
}