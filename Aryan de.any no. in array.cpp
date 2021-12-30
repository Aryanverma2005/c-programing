#include<stdio.h>
int main()
{
	int i,pos,size,c;
	scanf("%d",&size);
	int x[size];
	for(i=0;i<size-1;i++)
	{
		scanf("%d",&x[i]);
	}
	scanf("%d",&pos);
	for(c=pos-1;c=size-1;c++)
	{
	x[c]=x[c+1];	
	}
	for(i=0;i<size;i++)
	{
		printf("%d",x[i]);
	}
	return 0;
}
