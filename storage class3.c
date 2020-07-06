#include <stdio.h>
extern int a=10;
void abc()
{
printf("%d\n",a);
a=a+10;
}

int main()
{
a=a+5;
printf("%d\n",a);
a=a+20;
abc();
printf("%d\n",a);
abc();
a=a+20;
abc();
printf("%d\n",a);
return 0;
}
