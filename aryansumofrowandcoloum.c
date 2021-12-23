#include<stdio.h>
int main()
{
int x[3][3],i,j,sum=0;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&x[i][j]);

}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
sum = sum + x[i][j];
}
printf("%d\n",sum);
sum=0;
}
return 0;
}


