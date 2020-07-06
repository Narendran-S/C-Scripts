#include<stdio.h>
#include<conio.h>
struct student_details
{
int roll;
char name[20];
float score;
}a[3],b[3];
void main()
{
int i,j;
for(i=0;i<3;i++)
{
printf("Enter the rollno\tname\tscore\n");
scanf("%d%s%f",&a[i].roll,a[i].name,&a[i].score);
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(a[i].score>a[j].score)
{
b[i]=a[i];
a[i]=a[j];
a[j]=b[i];
}
}
}
printf("\nRollno\tName\tScore\n");
for(i=0;i<3;i++)
{
printf("\n%d\t%s\t%f",a[i].roll,a[i].name,a[i].score);
}
getch();
}
