#include<stdio.h>
int main()
{
	int a,b,i,j;
	scanf("%d%d",&a,&b);
	int x[a][b];
	for(i=0;i<a;i++)
	{
	    for(j=0;j<b;j++)
		{
			scanf("%d",&x[i][j]);
		}
    } 
for(i=0;i<a;i++)
	{
	    for(j=0;j<b;j++)
		{
			if(i>j)
			{
				printf("%d",x[i][j]);
			}
		}
    } 
    return 0;
}
