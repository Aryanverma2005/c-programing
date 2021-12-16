#include<stdio.h>
int main()
{
float x,y,p,total;
scanf("%f%f",&x,&y);
p=30000;
total=p*(1+(x/100))*(1+(y/100));
printf("population after two yeras=%.0f",total);
return 0;	
}
