#include<stdio.h>
void main()
{
int a,i,c=1;
printf("Enter a number ");
scanf("%d",&a);
for(i=2;i<=(a-1);i++)
{
if(a%i==0)
c=c+i;
}
if(c==a)
printf("THE number %d is a perfect number",a);
else
printf("%d is not a perfect number",a);
getch();
}
