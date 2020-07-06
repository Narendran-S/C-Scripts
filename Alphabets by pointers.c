#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
char alph[27];
int x;
char *ptr;
printf("\nPointer: Print all the alphabets:\n");
printf("_______________________________________\n");
ptr=alph;
for(x=0;x<26;x++)
{
*ptr=x+'A';
ptr++;
}
printf("The Alphabets are:\n");
for(x=0;x<26;x++)
{
printf(" %c ",*ptr);
ptr++;
}
printf("\n\n");
return(0);
}
