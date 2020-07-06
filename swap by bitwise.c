#include <stdio.h>
#include <string.h>
void swap(int*, int *);
void main()
{
    int a,b;
    printf("\nEnter two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("\nThe numbers before swapping are Number= %d\tNumber = %d",a,b);
    swap(&a,&b);
    printf("\nThe numbers after swapping are Number= %d\tNumber = %d",a,b);
}
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}
