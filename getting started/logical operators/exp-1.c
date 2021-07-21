#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,per;
    printf("Enter marks of 5 equivalent subjects:");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    per=(s1+s2+s3+s4+s5)/5;
     if(per>=60)
     printf("Passed with first class");
     else
    {
         if((per>=50)&&(per<=59))
         printf("passed with second class");
         else
        {
             if((per>=40)&&(per<50))
             printf("passed with third division");
             else
            {
                printf("FAIL!");
            }
        }
    }


}