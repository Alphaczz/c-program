#include<stdio.h>

void main()
{
    int n1,n2;
    printf("enter two number:");
    scanf("%d%d",&n1,&n2);
    add(n1,n2);
    return 0;
}
void add(int a, int b)
{
    int c;
    c=a+b;
    printf("sum=%d",c);
    
}