#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int x,y,a,b;
printf("Enter the coordinates of the graph:\n");
scanf("%d%d",&x,&y);
if(x>0&&y>0)
printf("The coordinate is 1st quad.");
if(x<0&&y>0)
printf("The coordinate is 2nd quad.");
if(x<0&&y<0)
printf("The coordinate is 3rd quad.");
if(x>0&&y<0)
printf("The coordinate is 4th quad.");

getch();
}
