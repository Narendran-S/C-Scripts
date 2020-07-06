#include<stdio.h>
#include<conio.h>
void main(){
int a[10],s=0,p=1;
int i,j;
printf("Enter 10 Numbers:\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
s+=a[i];
p*=a[i];
}
printf("sum of the numbers in array is %d \n Product of the array:%d",s,p);
getch();
}
