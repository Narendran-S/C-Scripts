#include<stdio.h>
#include<conio.h>
void main(){
int hour,minutes,a;
printf("Enter the hour of time\n");
scanf("%d",&hour);
printf("Enter the Minutes of time\n");
scanf("%d",&minutes);
a=(hour*60+minutes);
printf("Total time in minutes is: %d\n",a);
getch();
}
