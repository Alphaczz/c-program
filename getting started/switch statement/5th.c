#include<stdio.h>
#define PI 3.14159
int main()
{ 
 float double radius,volume;
  printf("Enter radius:");
  scanf(“%f”, &radius);
  volume= 4 *radius*radius*radius/3 ;
  printf("volume is %f\n\n",volume);
  return 0;
}