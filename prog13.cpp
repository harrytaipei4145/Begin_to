#include<stdio.h>
#include<stdlib.h> 


int i=0;

int q(int n,char a,char b,char c)
{   
if(n==1)
printf("%d:%c-%c\n",++i,a,c);
else
{q(n - 1,a,c,b);
printf("%d:%c-%c\n",++i,a,c);
q(n-1,b,a,c);
}

 
}     

int main(void)
{
 int high;     
 printf("Enter a number:");
 scanf("%d",&high);
 q(high,'1','2','3');
  
 
 
 
 
 
 
 
 
      
    system("pause");
    return 0;
    
   
}

   
   
   
    
    
    


