#include <stdio.h>
#include <stdlib.h>
int main() 
{
  int a,b,c,d,e,f;
  
  
  
  printf("輸入五位數字\n");
  scanf("%d",&a);
  b=a/10000;
  c=a/1000-b*10;
  d=a/100-b*100-c*10;
  e=a/10-b*1000-c*100-d*10;
  f=a-b*10000-c*1000-d*100-e*10;
  
  printf("%d %d %d %d %d",b,c,d,e,f) ; 
  system("pause");	
  return 0;
}
