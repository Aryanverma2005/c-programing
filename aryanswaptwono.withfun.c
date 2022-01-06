# include<stdio.h>
void swap(void)
{
int x,y,z;
printf("Enter value of x=");
scanf("%d",&x);
printf("Enter value of y=");
scanf("%d",&y);
z=x;
x=y;
y=z;
printf("x=%d",x);
printf("y=%d",y);
}
int main()
{
swap();
return 0;
}
