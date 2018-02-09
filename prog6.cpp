#include<stdio.h>
#include<stdlib.h> 

int main()
{
    int i;
    float x=-1,y,z=0;

for(i=1;i<=100;i++)
{
  x=x*(-1);
  y=1+2*(i-1);
  z=z+4*x/y;
  printf("%f\n",z);                 
                   }

    
    system("pause");
    return 0;
    
    
    
}
