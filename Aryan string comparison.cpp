# include<stdio.h>
# include<string.h>
int main()
{
	char x[100],y[100];
	gets(x);
	gets(y);
	if(strcmp(x,y)==0)
	{
	  printf("strings are equal");	
	}
		else
		{
		printf("strings are not equal");
		}
	return 0;
}
