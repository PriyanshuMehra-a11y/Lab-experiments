#include <stdio.h>
void counterFunction() {
    static int count = 0;  // Static local variable
    count++;
    printf("Function called %d times\n", count);
    }
int main() {
    counterFunction();  // 1st call
    counterFunction();  // 2nd call
    counterFunction();  // 3rd call
    return 0;
} 