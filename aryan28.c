#include <stdio.h>
#include<math.h>
int main()
{
  float s,a;
  printf("enter side of an equilateral triangle:");
  scanf("%f",&s);
  a=(sqrt(3)/4)*(s*s);
  printf("area of equilateral triangle=%.2f sq.units",a);
return 0;
}
