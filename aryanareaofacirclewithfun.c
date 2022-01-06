# include<stdio.h>
int area()
{
float area,r,pi;
scanf("%f",&r);
pi=3.14;
area=(pi*r*r);
return area;
}
int main()
{
float area1;
area1=area();
printf("area=%f",area1);
return 0;
}

