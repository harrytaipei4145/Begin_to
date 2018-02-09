#include<stdio.h>
#include<stdlib.h> 

int main()
{
    int x,y,i,j=-1;
    printf("Enter an integer:");
    scanf("%u",&x);
    
   
   
   
   for(i=2;i<=x;i++)
   {
    if(x%i==0)
    j=j+1;                
                    
                    
                    }
    if(j==0)
    printf("prime number");
    else if(j>=0)
    printf("composite number");
    else
    printf("neither");
    

    
    system("pause");
    return 0;
    
    
    
}
