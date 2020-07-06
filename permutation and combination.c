#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int num)
{
int res=1;
if(num==0||num==1)
{return res;
}
while(num>0)
{res=res*num;
num--;
}
return res;
}
int main(){
int n,r;
int nCr,nPr;
printf("Enter the values of n and r:\n");
scanf("%d%d",&n,&r);
nCr=(1.0*fact(n))/(fact(r)*fact(n-r));
nPr=(fact(n))/(fact(n-r));
printf("The value of perumutation is nPr=%d\nThe value of combination is nCr=%d",nPr,nCr);
return 0;
}
