#include <stdio.h>
int g=45;
int main(){
    int a,b,c;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    c=g+a+b;
   printf("%d",c);
   return 0;
}