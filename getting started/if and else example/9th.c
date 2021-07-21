#include<stdio.h>
int main()
{
    int n;
    printf("enter a number from 0-3:");
    scanf("%d",&n);
    switch (n)
    {
    case 0:
        printf("S\n");
        break;
    case 1:
        printf("H\n");
        break;
        case 2: 
        printf("shi");
        break;
        case 3:
        printf("vam");
        break;
    }        
    return 0;
}