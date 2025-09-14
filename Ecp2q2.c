#include <stdio.h>
int main(){
    int c,f;
    printf("Enter temp.in celsius:");
    scanf("%d",&c);
    f=(c*9/5)+32;
    printf("Temp in Fahrenheit is %d",f);
}