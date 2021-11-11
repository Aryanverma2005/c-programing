# include<stdio.h>
int main()
{
char x;
scanf("%c",&x);
switch(x=='a'|| x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
{
case 1: printf("alphabate is vowels");
     break;
case 0: printf("alphabate is consonants");
     break;
}
return 0;
}
