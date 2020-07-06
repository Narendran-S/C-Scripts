#include<stdio.h>
#include<conio.h>
void main(){
int addreal,addimg,subreal,subimg,mulreal,mulimg,divreal,divimg,a1,b1,a2,b2;
printf("Enter the first complex number real and imaginary part:\n");
scanf("%d%d",&a1,&b1);
printf("Enter the second complex number real and imaginary part:\n");
scanf("%d%d",&a2,&b2);
addreal=(a1+a2);
addimg=(b1+b2);
subreal=(a1-a2);
subimg=(b1-b2);
mulreal=(a1*a2);
mulimg=(b1*b2);
if(a1>a2)
divreal=(a1/a2);
if(b1>b2)
divimg=(b1/b2);
printf("The sum of the complex number: %d+i%d\n",addreal,addimg);
printf("The difference of the complex number: %d+i%d\n",subreal,subimg);
printf("The product of the complex number: %d+i%d\n",mulreal,mulimg);
printf("The division of the complex number: %d+i%d\n",divreal,divimg);
getch();
}
