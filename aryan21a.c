#include <stdio.h>
int main()
{
    float c,f;
    printf("enter the value of fahrenheit");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("%.2f c=%.2f f",c);
    return 0;
}
