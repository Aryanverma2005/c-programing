#include <stdio.h>
int main()
{
    int base,exp;
    long double result = 1.0;
    printf("enter base value:");
    scanf("%d",&base);
    printf("enter exponent vslue");
 scanf("%d",&exp);
    while (exp !=0){
        result*=base;
        --exp;
    }
    printf("ans=%.0Lf",result);
    return 0;
}
