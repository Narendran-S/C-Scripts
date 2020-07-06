#include<stdio.h>
#include<conio.h>
union power
{
int a,b;
}p;
void main()
{
int c=1,i;
printf("Enter the power and base of the term:\n");
scanf("%d%d",&p.a,&p.b);
for(i=1;i<p.b;i++)
{
c=c*p.a;
}
printf("The value is %d ",c);
getch();
}
