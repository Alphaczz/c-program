#include<stdio.h>
int main()
{
    int a=10,b=20;

    swapv(a,b);
    printf("\n a=%d b=%d",a,b);
}   
    swapv(int x,int y)
   {    
        int t;

        t=x;
        x=y;
        y=t;

        printf("/nx=%d y=%d",x,y);
    }
