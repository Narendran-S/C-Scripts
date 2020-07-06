#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the value of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
printf("\na= %d",a);
printf("\nb= %d",b);
printf("\nc= %d",c);
if(a>b)
{
    if(a>c)
    {
    printf("\nThe a is biggest among all\n");
    }
    else
    {
    printf("\nThe c is biggest among all\n");
    }
}
else if (b>c)
    printf("\nThe b is biggest among all\n");
else
    printf("\nThe c is biggest among all\n");
getch();
}
