#include <stdio.h>
int main() {
 float BMI,w,h;
printf("Enter the weight in kg:");
scanf("%f",&w);
printf("Enter the height in m:");
scanf("%f",&h);
BMI=w/(h*h);
printf("%f\n",BMI);
if ( BMI<15)
{
    printf("Starvation");
}
else if (15.1<BMI<17.5)
{
    printf("Anorexic");
}
else if (17.6<BMI<18.5)
{
    printf("Underweight");
}
else if (18.6<BMI<24.9)
{
    printf("Ideal");
}
else if (25<BMI<29.9)
{
    printf("Over weight");
}
else if (30<BMI<39.9)
{
    printf("Obese");
}
else
{
    printf("Morbidity obese");
}
}