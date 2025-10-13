#include <stdio.h>
int sum(int a, int b) {
    return a + b;
}
int main() {
    int x, y, c;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    c = sum(x, y);
    printf("%d + %d = %d", x, y, c);
    return 0;
}