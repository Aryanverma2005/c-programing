#include <stdio.h>
int main()
{
  float p,t,r,si;
  printf("enter the principle)(amount),time,and rate::\n");
  scanf("%f%f%f",&p,&t,&r);
  si=(p*t*r)/100;
  printf("\nsi=%.2f",si);
return 0;
}
