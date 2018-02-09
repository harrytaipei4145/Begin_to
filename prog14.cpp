#include<stdio.h>
#include<stdlib.h> 
int test(char array1[], int left, int right)
{
 int n=0;   
 
 if(right%2==1)
 n++;
 while(right>left)
 {
  
  if(array1[left]==array1[right])
  {
  left++;
  right--;
  continue;
  }
  else if(array1[left]!=array1[right])
  {
  n++;
  break;
  } 
 }
 return(n==0)?1:0;
}   


int main()
{
    char j,k,temp,x=0,y=19,z=0;
    char c[20]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int b[20];
    printf("enter a string\n");
    gets(c);

   for(j=0;j<=19;j++)
    {
   
    b[j]=c[j];
    }
    j=0;
    while(z<=19)
     {
      if(b[j]>122||b[j]<97)
      {
       y--;
       for(k=j;k<=19;k++)
       {
       b[k]=b[k+1];      
       }

      }
      else if(b[j]<=122&&b[j]>=97)
      j++;
      z++;

     }
    
for(j=0;j<=y;j++)
    {
    c[j]=b[j];

    }
  
  printf("%d",test(c,0,y));        
    system("pause");
    return 0;
    
    
}
 



