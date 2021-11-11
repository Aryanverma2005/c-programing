#include<stdio.h>
int main()
{
int x,a,b,c,rev;
scanf("%d",&x);
b=x%10;
x=x/10;
c=x%10;
x=x/10;
rev=(b*100+c*10+x*1);
printf("%d",rev);
return 0;
}


