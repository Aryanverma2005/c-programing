# include<stdio.h>
int main()
{
int x[3][3],i,j,y[3][3],z[3][3],sum=0;
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
scanf("%d",&y[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
z[i][j]=x[i][j]+y[i][j];
sum=z[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",z[i][j]);
}
printf("\n");
}
return 0;
}

