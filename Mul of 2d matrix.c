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
printf("Enter the 2x2 matrix for B:\n");
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{scanf("%d",&b[i][j]);
}
}
c[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
c[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1];
c[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
c[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1];
printf("The Product matrix is:\n");
for(i=0;i<2;i++)
{for(j=0;j<2;j++)
{printf("%d  ",c[i][j]);
}
printf("\n");
}
getch();
}
