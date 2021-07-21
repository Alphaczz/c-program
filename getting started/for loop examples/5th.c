#include<stdio.h>
double square(double x);
double cube(double x); 
int main()
{
    int how_many=0,i,j;
    printf("i want square and cube for 1 to n where n is:");
    scanf("%d",&how_many);
    printf("\nsquare & cube by internal of .1\n");
    for(i=1;i<=how_many;i++)
    for(j=1;j<=10;j++)
    printf(" %lf\t  %lf\t  %lf\t",i+j/10,square(i+j/10),cube(i+j/10));
    printf("\n\n");
    return 0;
};
double square(double x)
{return(x*x);}
double cube( double x)
{return(x*x*x);}