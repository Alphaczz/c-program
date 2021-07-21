#include<stdio.h>
int fac(int n)
{
    if (n!=0)
    {
     return n+fac(n-1);
    }
    else
    {
      return n;
    }
    
    
}
int main()
{
    int num1;
    printf("ENTER THe NUMBER :");
    scanf("%d",&num1);
    printf("The sum of %d is %d\n",num1,fac(num1));
    return 0;
}