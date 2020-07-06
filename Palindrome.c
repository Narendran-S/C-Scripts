#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d=0;
printf("Enter the number:\n");
scanf("%d",&a);
b=a;
while(a>0)
{
c=a%10;
d=(d*10)+c;
a=a/10;
}
if(c==d)
printf("The number is Palindrome\n");
else
printf("The number is not palindrome\n");
getch();
}
