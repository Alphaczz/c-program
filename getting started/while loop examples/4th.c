#include<stdio.h>
int main()
{
    int repeat=0;
    printf("how are you?\n: ");
    scanf("%d",&repeat);
    printf("i am very\n");
    while(repeat >0)
    {
        printf("very\n");
        repeat--;
    }
    printf("old");
}