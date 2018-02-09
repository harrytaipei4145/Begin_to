#include<stdio.h>
#include<stdlib.h> 




int main(void)
{
 int a[10]={2,6,4,8,10,12,89,68,45,37};
 int j,i,hold,n,pass=0;
 
 printf("Data items in original order\n");
 for(i=0;i<=9;i++)
 {
 printf("%4d",a[i]);
 }
 
 for(j=9;j>=0;j--)
 {n=0;
 hold=a[0];
  for(i=0;i<=j;i++)
  {
  if(hold<a[i])
   {
   hold=a[i];
   n=i;
   }
  }
  a[n]=a[j];
  a[j]=hold;
  if(n<j)
  pass++;
  
 }
 printf("\n");
 for(i=0;i<=9;i++)
 {
 printf("%4d",a[i]);
 }
 printf("\npass:%d",pass);
    system("pause");
    return 0;
    
    
}
 

