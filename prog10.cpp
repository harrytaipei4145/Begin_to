#include<stdio.h>
#include<stdlib.h> 


int integerPower(int base,int exponent)
{
    int cal=1,i;
    for(i=1;i<=exponent;i++)
    cal*=base;
    return (exponent>0)?cal:2 ;
    
    
    
    
    }

int main()
{

    int a,b;
    printf("Enter two integers:");
    scanf("%d%d",&a,&b);
    if(b>0)
    printf("%d",integerPower(a,b));
    else
    printf("error");
    system("pause");
    return 0;
    
    
    
}
