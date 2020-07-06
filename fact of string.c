#include<stdio.h>
#include<conio.h>
void main(){
char a[3]={'a','b','c'};
int i,j,z;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
for(z=0;z<3;z++)
printf("\n%c\t%c\t%c",a[i],a[j],a[z]);
}
}
getch();
}
