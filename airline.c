#include<stdio.h>
#include<math.h>
#include<string.h>
int main(void)
{
int c,p,i,j,k,date,mon,yr;
int s[10]={};
float time;
char dept[20],arr[20];
printf("**Welcome to Simple Airline Seat Reservations System**\n\n");
printf("Enter the date, month, year and time of departure(Railway time)\n");
scanf("%d%d%d%f",&date,&mon,&yr,&time);
printf("Enter the place of departure and destination\n");
scanf("%s%s",&dept,&arr);
printf("\nEnter the no of tickets you want\n");
scanf("%d",&k);
for(j=0; j<k; j++)
{
printf("\nChoose 1 for First Class and 2 for Economic class\t");
printf("\npress 3 to get out of the booking portal\n");
scanf("%i",&c);
switch(c)
{
case 1:
printf("\nFirst class\n");
printf("\nSeats available are 1,2,3,4,5.\n");
do
{
printf("\nPick a seat:\n\n");
scanf("%i",&p);
s[j]=p;
for(i=0; i<j; i++)
{
if(s[j]==s[i])
{
printf("\n\nSeat taken.\n\n");
break;
}
}
}
while (i!=j);
if(s[j]<=5)
{
printf("Booking confirmed\n");
printf("--------------------------\n");
printf("Date: %d/%d/%d\nTime: %.2f\n",date,mon,yr,time);
printf("Place of departure: %s\nPlace of destination: %s\n",dept,arr);
printf("Class: First class\n");
printf("Seat no : %i\n",s[j]);
printf("--------------------------\n\n");
}
else
printf("\nWrong number!  No seat for you!\n\n");
break;
case 2:
printf("\nEconomical class\n");
printf("Seats available are 6,7,8,9,10.\n");
do
{
scanf("%i",&p);
s[j]=p;
for (i=0; i<j; i++)
{
if (s[j]==s[i])
{
printf("\n\nSeat taken.\n\n");
break;
}
}
}
while (i!=j);
if(s[j]>= 6)
{
printf("Booking is confirmed\n");
printf("--------------------------\n");
printf("Date: %d/%d/%d\nTime: %.2f\n",date,mon,yr,time);
printf("Place of departure: %s\nPlace of destination: %s\n",dept,arr);
printf("Class: Economical class\n");
printf("Seat no : %i\n",s[j]);
printf("--------------------------\n\n");
}
else
printf("\nWrong number!  No seat for you!\n\n");
break;
case 3:
printf("Thank you, Make a next booking to get better ride ");
break;
default:printf("\nEnter a number between 1 and 3");
break;
}
}
return 0;
}
