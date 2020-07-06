#include<stdio.h>
void main()
{
 int array[20],search,c,n;
 printf("enter the number of elements in array\n");
 scanf("%d",&n);
 printf("enter the %d integer\n",n);
 for (c=0;c<n;c++);
 scanf("%d",&c);
 printf("enter a number to search\n");
 scanf("%d",&search);
 for (c=0;c<n;c++);
 {
  if (array[c]==search)
  {
   printf("%d is present in the location %d.\n",search,c+1);
  }
 }
  if (c==n)
  printf("%d isnt present in the array.\n",search);
}
