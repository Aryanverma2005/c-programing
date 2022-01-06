# include<stdio.h>
int sum()
{
int x,y,sum;
scanf("%d%d",&x,&y);
sum=x+y;
return sum;
}
int main()
{
int sum1;
sum1=sum();
printf("sum=%d",sum1);
return 0;
}

