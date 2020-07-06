#include<stdio.h>
int main(){
int i,j,n,count;
printf("Enter the row what u want:\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("\n");
for(j=1;j<=i;j++){
printf("%d",count%2);
count++;
}
if(i%2==0)
count=1;
else
count=0;
}
return (0);
}
