#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a=0;
printf("Enter a number ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
a=a+i;
}
printf("the sum of even numbers in the given range is %d",a);
getch();
}
