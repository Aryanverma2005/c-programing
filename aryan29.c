#include <stdio.h>
int main()
{
  float h,e,m,p,c;
  float total,average,percentage;
  printf("enter mark of five subject:\n");
  scanf("%f%f%f%f%f",&h,&e,&m,&p,&c);
  total=h+e+m+p+c;
  average=total/5;
  percentage=(total/500)*100;
  printf("total marks=%.2f\n",total);
  printf("average marks=%.2f\n",average);
  printf("percentage=%.2f\n",percentage);
return 0;
}
