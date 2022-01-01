# include<stdio.h>
int main ()
{
	int x,y,n;
	scanf("%d%d",&x,&n);
	y=(x>>n);
	printf("%d",y);
	return 0;
}
