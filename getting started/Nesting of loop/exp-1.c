s#include<stdio.h>
int main()
{
    int r,c,sum;
    for(r=0;r<=3;r++)
    {
        for(c=0;c<=2;c++)
        {
         sum=r+c;
         printf("r=%d c=%d sum=%d\n",r,c,sum);
        }
    }
}