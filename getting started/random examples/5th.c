#include<stdio.h>
int main()
{
    int i,j,n,fact,sum=0;
    printf("ENTER ODD NUMBER:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
    }
    printf("%d",sum);
}