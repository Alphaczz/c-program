#include<stdio.h>
int main()
{
    int p,n,count;
    float r,si;
    count=1;
    while (count<=3)
    {
         printf("\nEnter the values of P,N & R:");
         scanf("%d %d %f",&p,&n,&r);
         si=(p*n*r)/100;
         printf("simple interest=Rs.%f",si);
         count=count+1;
    }
   
}