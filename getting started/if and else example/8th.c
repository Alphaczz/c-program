#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter a number:");
    scanf("%d",&n);
    printf("the factors of %d\n",n);
    while (i<n)
    {
        if (n%i==0)
        {
            printf("%d\n",i);
            i++;
        }
        else
        {
            i++;
        }
        
        
    }
}
    