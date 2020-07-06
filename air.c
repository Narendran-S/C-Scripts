#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
int c,p,i,j,k;
int s[10]={};
printf("**Welcome to Simple Airline Seat Reservations System**\n\n");
printf("\nEnter the no of tickets you want\n");
scanf("%d",&k);
for(j=0; j<k; j++)
{
printf("\nChoose 1 for First Class and 2 for Economic class\t");
printf("\npress 3 to getout of the booking portal\n");
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
printf("\n");
printf("--------------------------\n");
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
if(s[j] >= 6)
{
printf("\n");
printf("--------------------------\n");
printf("Class: Economical class\n");
printf("Seat no : %i\n",s[j]);
printf("--------------------------\n\n");
}
else
printf("\nWrong number!  No seat for you!\n\n");
break;
case 3:
printf("Thank you, Make a next booking to get better ride ");
default:
break;
}
printf("\nYour booking was conformed\n0Thanks for booking a ticket in our travels\n");
}
return 0;
}

