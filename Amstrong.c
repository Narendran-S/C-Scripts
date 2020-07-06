#include<stdio.h>
#include<math.h>
int main(){
int num,orginalnumber,remainder,n=0;
float result=0.0;
printf("Enter the number:\n");
scanf("%d",num);
orginalnumber=num;
while(orginalnumber!=0)
{
orginalnumber/=10;
++n;
}
orginalnumber=num;
while(orginalnumber!=0)
{
remainder=orginalnumber%10;
result+=pow(remainder,n);
orginalnumber/=10;
}
if((int)result==num)
printf("%d is Amstrong number",num);
else
printf("%d is not a Amstrong number",num);
return 0;
}
