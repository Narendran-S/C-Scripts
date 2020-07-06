#include<stdio.h>
#include<stdlib.h>
struct book
{
char code[20];
char name[20];
char date[20];
int cost;
}b;
int seat=60;
void insertdetails();
void viewall();
void find();
void book_ticket();
void main()
{
int ch;
do
{
printf("movie ticket booking\n");
printf("press 1 to insert movie\n");
printf("press 2 to view all movie\n");
printf("press 3 to book ticket\n");
printf("press 0 to exit\n");

printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
insertdetails();
break;
case 2:
system("cls");
viewall();
break;
case 3:
find();
break;
case 4:
bookticket();
break;
case 0:
exit(0);
break;
default:
printf("wrong choice\n");
break;
}
}
while(ch!=0);
}
void insertdetails()
{
FILE*fp;
struct book b;
printf("enter the movie code");
scanf("%s",&b.code);
printf("enter the movie name");
scanf("%s",&b.name);
printf("enter release date");
scanf("%s",&b.date);
printf("enter ticket price");
scanf("%d",&b.cost);
fp=fopen("data.txt","a");
if(fp==NULL)
{
printf("file not found");
}
else
{
fprintf(fp,"%s%s%s%d\n",b.code,b.name,b.date,b.cost);
printf("record inserted successfully");
}
printf("\n");
fclose(fp);
}
void find()
{
struct book b;
FILE*fp;
char ch[20];
printf("enter the movie code");
scanf("%s",&ch);
fp=fopen("data.txt","r");
if(fp==NULL)
{
printf("file does not found");
exit(1);
}
else
{
while(getc(fp)!=EOF)
{
fscanf(fp,"%s%s%s%d",&b.code,&b.name,&b.date,&b .cost);
if(strcmp(b.code,ch)==0)
{
printf("record found\n");
printf("\n\t\tcode:%s",b.code);
printf("\n\t\tmovie name:%s",b.name);
printf("\n\t\tmobie date:%s",b.date);
printf("\n\t\tprice of the ticket:%d",b.cost);
break;
}
}
}
fclose(fp);
}
void viewall()
{
char ch;
FILE*fp;
fp=fopen("data.txt","r");
if(fp==NULL)
{
printf("file does not found");
exit(1);
}
else
{
system("cls");
while((ch==fgetc(fp))!=EOF)
printf("%c",ch);
}
fclose(fp);
}
void bookticket()
{
struct book b;
FILE *fp;
FILE *ufp;
int totalseat,mobile,totalamount;
char name[20];
char ch;
char moviecode[20];
fp=fopen("data.txt","r");
if(fp==NULL)
{
printf("file does not found");
exit(1);
}
else
{
system("cls");
while((ch=fgetc(fp))!=EOF)
printf("%c",ch);
}
fclose(fp);
printf("\n for book ticket choose movie");
printf("\n enter the movie code");
scanf("%s",&moviecode[20]);
fp=fopen("data.txt","r");
if(fp==NULL)
{
printf("file does not found");
exit(1);
}
else
{
while(getc(fp)!=EOF)
{
printf("%s%s%s%d",b.code,b.name,b.date,b.cost);
if(strcmp(b.code,moviecode)==0)
{
printf("\n record found");
printf("\n\t\tcode:%s",b.code);
printf("\n\t\tmovie name:%s",b.name);
printf("\n\t\tdate:%s",b.date);
printf("\n\t\tprice of ticket:%d",b.cost);
}
}
}
printf("\n fill details");
printf("\nyour name");
scanf("%s",&name);
printf("\nmobile number");
scanf("%d",&mobile);
printf("\n total number of tickets");
scanf("%d",&totalseat);
totalamount=b.cost*totalseat;
printf("\n\t\tname:%s",name);
printf("\n\t\tmobile number:%d",mobile);
printf("\n\t\tmovie name:%s",b.name);
printf("\n\t\ttotal seat:%d",totalseat);
printf("\n\t\tcost per ticket:%d",b.cost);
printf("\n\t\ttotal amount:%d",totalamount);


ufp=fopen("oldtransaction.txt","a");
if(ufp==NULL)
{
printf("file not found");
}
else
{
fprintf(ufp,"%s%d%d%d%s%d\n",name,mobile,totalseat,totalamount,b.cost);
printf("record insert successfully to the old record");
}
printf("\n");
fclose(ufp);
fclose(fp);
}
