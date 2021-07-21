#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if (num%2==0||num%3==0)
    {
        printf("Not a Prime Number");
    }
    else
    {
        printf("%d is a prime number",num);
    }
    
    
}