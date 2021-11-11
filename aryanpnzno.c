# include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
switch(x>0)
{
case 1: printf("no. is positive");
     break;
case 0:
switch(x<0)
{
case 1: printf("no. is negative");
     break;
case 0: printf("no is equals to zero");
}
}
return 0;
}
