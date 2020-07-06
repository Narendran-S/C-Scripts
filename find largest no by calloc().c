#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,n,*a;
printf("Enter the no of Elements");
scanf("%d",&n);
a=(int*)calloc(n,sizeof(int));
if(a==NULL)
{
printf("Error!!! Memory is not allocated");
}
else
{
printf("The Memory is allocated");
}
for(i=0;i<n;i++)
{
printf("Enter the elements");
scanf("%d",&a+i);
}
for(i=1;i<n;i++)
{
if(*a<*(a+i))
*a=*(a+i);
}
printf("Largest elememt is %d\n",*a);
getch();
}
