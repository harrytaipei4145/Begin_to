#include<stdio.h>
#include<stdlib.h> 



int main()
{
int a[3];
int i,j,temp;

printf("Enter three integers:");

for(i=0;i<=2;i++)
{
  scanf("%d",&a[i]);               
}
for(i=2;i>=0;i--)
{
  for(j=0;j<=i-1;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }                
   else if(a[j+1]>=a[j])
   a[j]=a[j];                
  }               
}
for(i=1;i<=a[0];i++)
{
 printf("***\n");
}
for(i=1;i<=a[1]-a[0];i++)
{
 printf(" **\n");
}
for(i=1;i<=a[2]-a[1];i++)
{
 printf("  *\n");
}

   
     
          
    system("pause");
    return 0;
    
    
}
   
    
    
    


