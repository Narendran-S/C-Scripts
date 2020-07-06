#include<stdio.h>
#include<stdlib.h>
void main(){
FILE *a;
char ch;
int c=1,d=1;
char fname[50];
printf("Enter the file name:\n");
scanf("%s",fname);
a=fopen(fname,"r");
if(a==NULL)
{
printf("The file doesn't exit and not be considered");
}
else
{
ch=fgetc(a);
printf("The content of the file %s are ",fname);
while(ch!=EOF)
{
printf("%c",ch);
if(ch==' '||ch=='\n')
{
c++;
}
else
{
d++;
}
ch=fgetc(a);
}
printf("Number of words in a file %s is %d \n",fname,c-2);
printf("Number of characters in a file %s is %d\n\n",fname,d-1);
}
fclose(a);
}
