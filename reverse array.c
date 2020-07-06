#include<stdio.h>
#include<conio.h>
void main(){
int a[5],b[5],i,j;
printf("Enter 5 numbers:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(j=4,i=0;j>=0;j--,i++)
{
b[j]=a[i];
}
printf("the reversed array is\n");
for(i=0;i<5;i++)
printf("%d\n",b[i]);
getch();
}
