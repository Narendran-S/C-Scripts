#include<stdio.h>
void main()
{
 float a,b,c;
 printf("\a enter the value of temperature in celsius");
 scanf("%f",&c);
 b=c*9/5+32;
 printf("\nthe value of temp in fahrenhite is%f",b);
 printf("\n enter the value of fahrenhite");
 scanf("%f",&a);
 c=(a-32)*5/9;
 printf("\nthe value of temp in celsius is%f",c);
 getch();
 }



