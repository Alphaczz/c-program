#include<stdio.h>
int add(int n,int g)
{
    if (n!=0)
    {
        return n+g;
    }
    else
    {
     if (n==0)
     {
         return g;
     }
     else
     {
         return n;
     }
     
    }
}
int sub(int m,int b)
{
    if(m>b)
    {
        return m-b;
    }
    else
    {
        return b-m;
    }
}
int multix(int a,int c)
{
    if(a!=0||c!=0)
    {
        return a*c;
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    int x,y;
    printf("ENTER TWO NUMBERS:");
    scanf("%d%d",&x,&y);
    printf("The sum,sub and mult of %d and %d is %d,%d and %d",x,y,add(x,y),sub(x,y),multix(x,y));
    return 0;
}