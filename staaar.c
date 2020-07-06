#include<stdio.h>
int main(){
float a,b;
float row;
printf("Enter the number of rows:");
scanf("%f",&row);
for(a=1; a<=row; ++a)
{
for(b=1; b<=a; ++b)
{
printf("* ");
}
printf("\n");
}
return 0;
}
