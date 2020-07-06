#include<stdio.h>
#include<conio.h>
void main(){
int a[2][2];
int b[2][2];
int c[2][2];
int i,j;
printf("Enter the 2x2 matrix for A:\n");
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{scanf("%d",&a[i][j]);
}
}
printf("The matrix is:\n");
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{printf("%d  ",a[i][j]);
}
printf("\n");
}
printf("Enter the 2x2 matrix for B:\n");
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{scanf("%d",&b[i][j]);
}
}
printf("The matrix is:\n");
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{printf("%d  ",b[i][j]);
}
printf("\n");
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
c[i][j]=a[i][j]+b[i][j];
}
printf("The Sum matrix is:\n");
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{printf("%d  ",c[i][j]);
}
printf("\n");
}
getch();
}
