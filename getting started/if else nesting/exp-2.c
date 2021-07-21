#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,per;
    printf("Enter the marks of 5 equivalent subjects:");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    per=s1+s2+s3+s4+s5/5;
     if(per>60)
    printf("Passed with first division");
     else
    {
        {
             if(per>=60)
            printf("Passed with second division");
             else
            {
                if(per>=50)
                printf("Passed with third division");
                else
                printf("Fail!");
            }
        }
    }
}