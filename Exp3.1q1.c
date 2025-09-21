#include <stdio.h>
int main(){
  int a,b,c,A,B,C;
  printf("Enter the first angle:");
  scanf("%d",&a);
  printf("Enter second angle:");
  scanf("%d",&b);
  printf("Enter third angle:");
  scanf("%d",&c);
  if (a+b+c!=180)
  {
    printf("Its not a triangle");
  }
  else if (a==90 || b==90 || c==90)
{
    printf("Its right angle triangle");
}
  else 
  {
    printf("Enter first side of triangle:");
    scanf("%d",&A);
    printf("Enter second side of triangle:");
    scanf("%d",&B);
    printf("Enter third side of triangle:");
    scanf("%d"&C);
    if (A==B==C)
    {
        printf("Its equilateral triangle");
    }
    else if (A==B || B==C || C==A)
    {
        printf("Its scaler triangle");
    }
else
{
    printf("Its scaler triangle");
}

  }
  


}