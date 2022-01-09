#include<stdio.h>
void printtable(void)
{
	int a,n,table;
	scanf("%d",&a);
	for(n=1;n<=10;n++)
	table=a*n;
	printf("%d",table);
}
int main()
{
	printtable();
	return 0;
}
