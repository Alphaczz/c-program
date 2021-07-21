#include<stdio.h>
int main()
{
    float i,k,j,n,fact,sum=1;
    printf("ENTER ODD NO:");
    scanf("%f,&n");
    for(i=1;i<=n;i=i+2)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+(1/fact)*sum;

    }
    printf("%f",&sum);
}