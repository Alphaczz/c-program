#include<stdio.h>
int main()
{
    int n,r;
    printf("enter the value of n and r:");
    scanf("%d%d",&n,&r);
    printf("the combination of %d and %d is is %d:",n,r,com(n,r));

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
int com(int b,int c)
{
    return fac(b)/(fac(c)*fac(b-c)); // alway use whole brackets to the denominator...!
}