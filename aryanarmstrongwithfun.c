# include<stdio.h>
void armstrong(void)
{
int x,a,b,num,rev;
scanf("%d",&x);
num=x;
a=x%10;
x/10;
b=x%10;
x=x/10;
rev=(x*x*x+a*a*a+b*b*b);
if(num==rev)
printf("no. is armstrong");
else
printf("no. is not armstrong");
}
int main()
{
armstrong();
return 0;
}

