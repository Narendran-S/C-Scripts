#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,b;
printf("Enter a Number to Print its table");
scanf("%d",&a);
for(i=1;i<=10;i++)
{
b=i*a;
printf("\n%d*%d=%d",i,a,b);
}
getch();
}
