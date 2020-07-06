#include<stdio.h>
void main()
{
int a;
printf("Enter the number:\n");
scanf("%d",&a);
if(a>=0)
  printf("This number is positive:%d",a);
else
  printf("%d is negative\n:",a);
getch();
}
