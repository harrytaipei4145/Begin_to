#include<stdio.h>
#include<stdlib.h> 



int q(void)
{
  int a,b,mul;
  a=(rand()%9)+1;  
  b=(rand()%9)+1;
  printf("%d*%d=?",a,b);
  mul=a*b;
  return mul; 
    
}     

int main(void)
{  
 while(true)
 {
  int ans,sum;          
  sum=q();
  
  
  while(true)
  { scanf("%d",&ans);
    if(ans==sum)
    {printf("Very good!");
     break;
    }
    else if(ans!=sum)
    {printf("No.Please try again.");
     continue;
    }  
    
  }
  
  
 } 
      
    system("pause");
    return 0;
    
   


}

   
   
   
    
    
    


