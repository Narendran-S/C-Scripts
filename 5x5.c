#include<stdio.h>
#include<conio.h>
void main(){
int a[5][5],i,j;
printf("Enter the matrix 5x5");
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
{scanf("%d",&a[i][j]);
}
}
printf("The matrix is:\n");
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{printf("%d",a[i][j]);
}
printf("\n");
}
getch();
}
