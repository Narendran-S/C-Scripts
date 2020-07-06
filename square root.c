#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
int a,b,c,temp,m1,n1,m2,n2,root1,root2;
printf("Enter the values of a,b,c in a quadratic equation format of\n ax^2+bx+c\n");
scanf("%d%d%d",&a,&b,&c);
temp=(b*b)-(4*a*c);
if(temp<0)
{printf("The roots are imaginary\n");
m1=-b/2*a;
n1=sqrt(-temp)/2*a;
m2=-b/2*a;
n2=sqrt(-temp)/2*a;
printf("root1= %d+i%d\nroot2= %d-i%d",m1,n1,m2,n2);}
if(temp>0)
{root1=(-b+sqrt(temp))/(2*a);
root1=(-b-sqrt(temp))/(2*a);
printf("root1=%d\nroot2=%d",root1,root2);
}
getch();
}
