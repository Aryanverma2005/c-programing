#include<stdio.h>
int main()
{
int x[3][3],i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&x[i][j]);
}
}
for(i=0;i<3;i++)
{
if(i%2==0)
{
for(j=0;j<3;j++)
{
printf("%d",x[i][j]);
}
}
else
{
for(j=2;j>=0;j--)
{
printf("%d",x[i][j]);
}
}
printf("\n");
}
return 0;
}

