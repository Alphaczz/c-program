#include<stdio.h>
int main()
{
    int a=10,b=20;
    swapr(&a,&b);
    printf("\n%d=a\n%d=b",a,b);
}

swapr(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
printf("\n%d=x\n%d=y,x,y");
}