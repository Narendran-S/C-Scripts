#include<stdio.h>
#include<conio.h>
void main(){
float b,L,A,D;
printf("Enter the value of wavelength");
scanf("%f",&A);
printf("Enter the value of distance from the point of contact ");
scanf("%f",&L);
printf("Enter the value of Size of the object");
scanf("%f",&D);
b=(A*L)/(2*D);
printf("The fridge width is:%f",b);
getch();
}

