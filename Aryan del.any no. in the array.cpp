#include<stdio.h>
int main()
{
	int size,i,pos,c;
	scanf("enter the value of size of array =%d",&size);
	int x[size];
	for(i=0;i<size-1;i++ )
	{
		scanf("enter the elements of array %d\n",&x[i]);
	}
	scanf("enter the of %d",&pos);
	for(c=pos-1;c<size-1;c++)
	{
		x[c]=x[c+1];
    }
	for(i=0;i<size;i++)
	{
		printf("%d",x[size]);
	}
	return 0; 
	}
