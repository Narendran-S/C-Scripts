#include<stdio.h>
#include<conio.h>
int main()
{
float b,A,L,D;
int a;
printf("\nFor unknown wavelength press 1");
printf("\nFor unknown length press 2");
printf("\nFor unknown size of object press 3\n");
scanf("%d",&a);
switch(a)
{
case 1:
printf("Enter the value of fridge width");
scanf("%f",&b);
printf("Enter the value of distance from the point of contact");
scanf("%f",&L);
printf("Enter the value of Size of the object");
scanf("%f",&D);
A=(2*b*D)/L;
printf("Value of wavelength:%f",A);
break;
case 2:
printf("Enter the value of wavelength");
scanf("%f",&A);
printf("Enter the value of fridge width");
scanf("%f",&L);
printf("Enter the value of Size of the object");
scanf("%f",&D);
L=(2*b*D)/A;
printf("Value of length:%f",L);
break;
case 3:
printf("Enter the value of wavelength");
scanf("%f",&A);
printf("Enter the value of distance from the point of contact ");
scanf("%f",&L);
printf("Enter the value of fridge width");
scanf("%f",&D);
D=(A*L)/b;
printf("Value of Size of the object:%f",D);
break;
case 4:
printf("Error for the unknown value");
break;
}
return 0;
}
