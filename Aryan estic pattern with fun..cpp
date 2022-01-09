#include<stdio.h>
void esticpattern(void)
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("*");
		}	
		printf("\n");
	}
}
int main()
{
	esticpattern();
	return 0;
}
