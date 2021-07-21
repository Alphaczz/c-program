#include<stdio.h>
int main()
{
    int age;
    char ms,gen;  
    printf("enter you marital status:");
    scanf("%c",&ms);
    printf("enter your age:");
    scanf("%d",&age);
    printf("enter your gender:");
    scanf("%c",&gen);
    if(ms=='M')
    printf("Driver is issured");
    else 
     {
         if((ms=='N')&&(gen=='m')&&(age>=30))
         printf("Driver is issured");
         else
          {
              if((ms=='N')&&(gen!='m')&&(age>=25))
              printf("Driver is issured");
              else
               {
                   printf("NOT ELIGIBLE!");
               }
          }
     }
}