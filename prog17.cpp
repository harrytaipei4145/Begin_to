#include<stdio.h>
#include<stdlib.h> 



int main()
{
int a[20];
int b,c=0,i=0,j;

while(i<20)
 {
  b=(rand()%91)+10;
  for(j=0;j<=i;j++)
  {
  if(a[j]==b)
  c=c+1;   
  }
  if(c==0)
  {a[i]=b;
   i++;
  }
  else if(c>0)
  {i=i;
  c=0;}
   
 }
   for(i=0;i<=19;i++)
   {
   printf("%d\n",a[i]);
   }
     
          
    system("pause");
    return 0;
    
    
}
   
    
    
    


