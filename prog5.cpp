#include<stdio.h>
#include<stdlib.h> 

int main()
{
    int x,y=-9999,i=-1,ave;
    
    
    while(x!=9999) 
    {
    printf("Enter an integer:");
    scanf("%d",&x);
    y=x+y;
    i=i+1;
    }
    ave=y/i;
    printf("%d",ave);

    
    system("pause");
    return 0;
    
    
    
}
