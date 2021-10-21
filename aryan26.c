#include <stdio.h>
int main()
{
    int a1,a2,a3;
    printf("input two angles of triangle separated by comma:");
    scanf("%d,%d",&a1,&a2);
    a3=180-(a1+a2);
    printf("third angle of the triangle:%d\n",a3);
    return 0;
}
