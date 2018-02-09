#include <stdio.h>
#include <stdlib.h>
int main() 
{
  float a,b,c,d,e;
  
  
  
  printf("Enter 'Total miles driven per day.'\n");
  scanf("%f",&a);
  printf("Enter 'Cost per gallon of gasoline.'\n");
  scanf("%f",&b);
  printf("Enter 'Average miles per gallon.'\n");
  scanf("%f",&c);
  printf("Enter 'Parking fees per day.'\n");
  scanf("%f",&d);
  printf("Enter 'Tolls per day.'\n");
  scanf("%f",&e);
  printf("Cost:");
  printf("%f",d+e+a/c*b);
  
  
  
  
  
  system("pause");	
  return 0;
}
