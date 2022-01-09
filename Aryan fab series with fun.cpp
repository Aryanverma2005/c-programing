#include<stdio.h>
void fabonaciseries(void)
{
	int x=0,y=1,term,i=1,sum=0;
	printf("Enter the term of series = %d",term);
	scanf("%d",&term);
	printf("%d,%d",x,y);
	while(i<=(term-2))
	{
		sum=x+y;
		printf(",%d",sum);
		x=y;
		y=sum;
		i++;
	}
}
int main()
{
	fabonaciseries();
	return 0;
}
