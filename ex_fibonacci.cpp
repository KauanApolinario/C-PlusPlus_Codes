#include<stdio.h>
main()
{
int a,b,c,i;
a=1;
b=1;
printf("1 1 ");
for(i=1;i<=18;i++)
{
c = a + b;
a=b;
b=c;
printf("%d ",c);
}
}

