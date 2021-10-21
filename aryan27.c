#include <stdio.h>
int main()
{
    float b,h,a;
    printf("input base of the triangle:");
    scanf("%f",&b);
    printf("enter height of the triangle");
    scanf("%f",&h);
    a=(b*h)/2;
    printf("a=%.2f sq.units",a);
    return 0;
}
