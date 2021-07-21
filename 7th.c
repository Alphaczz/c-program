#include<stdio.h>
int main()
{
    int n1;
    printf("ENTER THE n for factorial:");
    scanf("%d",&n1);
    printf("the factorial of %d is %d",n1,fac(n1));
    return 0;
}
int fac(a)
{
    if(a!=0)
    {
        return a*fac(a-1);
    }
    else
    {
        return 1;
    }
    
}