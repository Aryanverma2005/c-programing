# include<stdio.h>
# include<string.h>
int main()
{
	char x[100];
	int len;
	gets(x);
	len=strlen(x);
	printf("%d",len);
	return 0;
}
