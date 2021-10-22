#include <stdio.h>
#include<math.h>
int main()
{
    float p,r,t,ci;
    printf("enter principle(amount):");
    scanf("%f",&p);
    printf("enter time:");
    scanf("%f",&t);
    printf("enter rate:");
    scanf("%f",&r);
    ci=p*(pow((1+r/100),t));
    printf("ci=%f",ci);
    return 0;
}
