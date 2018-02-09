#include<stdio.h>
#include<stdlib.h> 

int prime(int n)
{
    int i,x=0;
    for(i=2;i<=n-1;i++)
    {
    if(n%i==0)
    x++;
    }
    if(n==2)
    return 1;
    else if(n>2&&x>=1)
    return 0;
    else if(n>2&&x==0)
    return 1;    
    else if(n<=1)
    return 0;
}
int ok(int z)
{
int f;
 f=z-2;
 while(true)
 {
  if(prime(f)==1)   
   break; 
  else if(prime(f)==0)
  {
  f--;
  continue;
  }
 }
 
 return f;   
}

int main()
{
 int l,j,a,b;
 scanf("%d",&l);
b=l-ok(l);
a=ok(l);
while(true)
{
 if(prime(b)==1)
 {
 printf("%d\n",a);
 printf("%d\n",b);
 break;
 }
 else if(prime(b)==0)
 {
 printf("%d\n",a);

 a=ok(b);
 b=b-a;
}
}

    system("pause");
    return 0;
    
    
}
 

