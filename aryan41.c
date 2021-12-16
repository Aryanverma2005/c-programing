#include<stdio.h>
int main()
{
float h,e,m,s,ss,average,percentage;
scanf("%f%f%f%f%f",&h,&e,&m,&s,&ss);
average=(h+e+m+s+ss)/5;
percentage=((h+e+m+s+ss)*100)/500;
printf("average=%f\npercentage=%f",average,percentage);
return 0;	
}
