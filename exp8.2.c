#include <stdio.h>

int main() {
    int a = 100;
    float b = 3.14;
    char c = 'Z';

    int *ptr_int = &a;
    float *ptr_float = &b;
    char *ptr_char = &c;

    printf("INT POINTER:\n");
    printf("Original address: %p, value: %p\n", ptr_int, *ptr_int);
    ptr_int++;
    printf("After increment:  %p (value unknown)\n", ptr_int);
    ptr_int--;
    printf("After decrement:  %p, value: %p\n\n", ptr_int, *ptr_int);

    printf("FLOAT POINTER:\n");
    printf("Original address: %p, value: %f\n", ptr_float, *ptr_float);
    ptr_float++;
    printf("After increment:  %p (value unknown)\n", ptr_float);
    ptr_float--;
    printf("After decrement:  %p, value: %f\n\n", ptr_float, *ptr_float);

    printf("CHAR POINTER:\n");
    printf("Original address: %p, value: %c\n", ptr_char, *ptr_char);
    ptr_char++;
    printf("After increment:  %p (value unknown)\n", ptr_char);
    ptr_char--;
    printf("After decrement:  %p, value: %c\n", ptr_char, *ptr_char);

    return 0;

}
