#include <stdio.h>

void updateValues(int *x, float *y, char *z) {
    *x = *x + 10;      
    *y = *y * 2.0;       
    *z = 'Z'; 

}

int main() {
    int a = 5;
    float b = 3.5;
    char c = 'A';

    printf("Before function call:\n");
    printf("a = %d, b = %f, c = %c\n", a, b, c);

    updateValues(&a, &b, &c);

    printf("\nAfter function call:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);

    return 0;

}
