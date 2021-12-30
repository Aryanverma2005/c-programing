# include<stdio.h>
int main ()
{
int i,count=0;
char x[100];
scanf("%[^\n]s",x);
for(i=0;x[i]!=0;i++)
{
count++;
}
printf(" Length of a word is = %d",count);
printf("\n");
for(i=count;i>=0;i--)
{
printf("%c",x[i]);
}
return 0;
}

