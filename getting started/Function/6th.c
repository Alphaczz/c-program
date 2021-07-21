#include<stdio.h>
int main()
{
    int no1,no2,no3;
    printf("enter three numbers to find out their average:");
    scanf("%d%d%d",&no1,&no2,&no3);
    printf("the average of %d,%d and %d is %d",no1,no2,no3,avg(no1,no2,no3));
     return 0;
}
int avg(int a,int b,int c)
{
    int result;
    result=a+b+c/3;
    return result;
}