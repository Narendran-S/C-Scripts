#include<stdio.h>
#include<conio.h>
int main()
{
  int a, b, c;
  printf("Enter two integers\n");
  scanf("%d%d",&a,&b);
  printf("Before Swapping\nFirst integer = %d\nSecond integer = %d\n", a, b);
  c = a;
  a = b;
  b = c;
  printf("After Swapping\nFirst integer = %d\nSecond integer = %d\n", a, b);
  return 0;
  }
