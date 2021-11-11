#include<stdio.h>
int main()
{
int x,b,c;
int num,n;
scanf("%d",&x);
num=x;
b=x%10;
x=x/10;
c=x%10;
x=x/10;
n=b*b*b+c*c*c+x*x*x;
if(num==n)
printf("the given value is armstonger");
else
printf("the given value is not armstonger");
return 0;
}

