#include <stdio.h>
int fac(int number)
{
    
        if (number == 1 || number == 0)
   {
        return 1;
    }
        else
    {
        return number * fac(number - 1);
    }
}
int main()
{
    int num;
    printf("enter a number of which you want factorial:");
    scanf("%d", &num);
    printf("the factorial of %d is %d:", num, fac(num));
    return 0;
}