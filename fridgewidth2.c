#include<stdio.h>
int main(){
float b,A,L,D;
int a;
printf("Enter the choice:1)For unknown wavelength 2)For unknown length 3)For unknown size of the object");
scanf("%d", &a);
switch(a)
{
case1:
     printf("Enter the value of fridge width,length,size of the object");
     scanf("%f%f%f",&b,&L,&D);
     A=(2*b*D)/L;
     printf("Value of Wavelength:%f",A);
     break;
case2:
     printf("Enter the value of fridge width,length,size of the object");
     scanf("%f%f%f",&b,&L,&D);
     L=(2*b*D)/A;
     printf("Value of length:%f",L);
     break;
case3:
     printf("Enter the value of fridge width,length,size of the object");
     scanf("%f%f%f",&b,&L,&D);
     D=(A*L)/(2*b);
     printf("Value of size of the object:%f",D);
     break;
}
return 0;
}

