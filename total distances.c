#include<stdio.h>
#include<conio.h>
struct sum{
float feet,inches;
}s;
void main(){
float a,b;
printf("Enter the distances in feet and inches\n");
scanf("%f%f",&s.feet,&s.inches);
a=s.inches+s.feet*12;
b=s.feet+s.inches/12;
printf("Total distances in feet and inches is %f and %f",b,a);
getch();

}
