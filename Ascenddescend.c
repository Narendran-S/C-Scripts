#include<stdio.h>
int main(){
int n,data[100],i,j,k;
printf("Enter the value of n:\n ");
scanf("%d",&n);
for(i=0;i<n;i++)
 scanf("%d",&data[i]);
for(i=0;i<(n-1);i++)
{for(j=i+1;j<n;j++)
{if(data[i]>data[j])
{k=data[i];
data[i]=data[j];
data[j]=k;
}
}
}
prinf("Ascending order:\n");
for(i=0;i<n;i++)
    printf("%d\n",data[i]);
prinf("\nDescending order:\n");
for(i=n-1;i>=0;i--)
    printf("%d\n",data[i]);
return 0;
}
