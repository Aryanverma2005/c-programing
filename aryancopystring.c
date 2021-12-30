# include<stdio.h>
int main ()
{
int i,count=0;
char x[100],y[100];
scanf("%[^\n]s",x);
for(i=0;x[i]!='\0';i++)
{
count++; 
}
printf("Length of a word = %d",count);
for(i=0;i<count;i++)
{
y[i]=x[i];
}
puts(y);
return 0;
}

