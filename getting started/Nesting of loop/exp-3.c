#include<stdio.h>
int main()
{
    char another='y';
    int num;
    while(another =='y')
    {
        printf("enter the number:");
        scanf("%d",&num);
        printf("square of the %d number is%d",num,num*num);
        printf("\nWant to enter another no y/n:");
        scanf("%c",&another);
    }
}