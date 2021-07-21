#include<stdio.h>
int main()
{
    int num;
    printf("enter  integer:");
    scanf("%d",&num);
    switch(num%2)
    {
    case 0:
    printf("even");
    break;
    
    default:
    printf("odd");
    break;
    }
}