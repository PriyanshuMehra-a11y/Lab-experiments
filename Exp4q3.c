#include <stdio.h>
int main() {
    int x = 40;  //Accessible everywhere

    {
        int y = 60;  // accessible only within brackets
        printf("Inside inner block:\n");
        printf("x = %d\n", x); 
        printf("y = %d\n", y); 
    }

    printf("\nOutside inner block:\n");
    printf("x = %d\n", x);      // No Error
    // printf("y = %d\n", y);   // Error: y is not accessible here

    return 0;
}