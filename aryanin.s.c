#include<stdio.h>
int main()
{
int size,i,a,c;
scanf("%d",&size);
int x[size];
for(i=0;i<-1;i++)
{
scanf("%d",&x[i]);
}
scanf("%d",&a);
for(c=size-2;a<x[c];i--)
{
x[c+1]=x[c];
}
for(i=0;i<size;i++)
{
printf("%d",x[i]);
}
return 0;
}
