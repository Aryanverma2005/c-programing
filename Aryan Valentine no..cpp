# include<stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	if ((x^y)==(x+y))
	printf("no. is valentine");
	else
	printf("no. is not valentine");
	return 0;
}


