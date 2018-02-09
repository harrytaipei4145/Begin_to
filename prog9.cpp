#include<stdio.h>
#include<stdlib.h> 

int main()
{
    int x,y,i=1,j=1;
    printf("Enter two unsigned integers in the range 1-20:");
    scanf("%u%u",&x,&y);
    
    while(i<=y)
    {
    while(j<=x)
      {
    printf("0");
    j=j+1;
      }
    puts("");    
        i=i+1;  
         j=1;

    }
    
    

    
    system("pause");
    return 0;
    
    
    
}
