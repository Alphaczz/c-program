#include<stdio.h>
int main()
{
    int speed;
    printf("enter the speed:");
    scanf("%d",&speed);
    speed=(speed<=65)?(65):(speed<=70)?(70):(90);
    switch (speed)
    {
    case 65:
        printf("No Ticket!");
        break;
    case 70:
        printf("Speeding Ticket!");
        break;
    case 90:
        printf("Extensive ticket!");
        break;        
    default:
        printf("incorrect input");
        break;
    }
    return 0;
}