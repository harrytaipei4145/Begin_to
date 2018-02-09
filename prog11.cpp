#include<stdio.h>
#include<stdlib.h> 




int main()
{
int a;
     char n;
    
        a=(rand()%90)+65;
    printf("I have selected a character between A and Z.\nTry to guess the character selected by me!\nWhat is your guess?"); 
    while(true)
     {
        scanf("%s",&n);

               
        if(n>a)
        {printf("Way ahead.Please try again.\n");
        continue;}
        else if(n<a)
        {printf("Way behind.Please try again.\n");
        continue;}
        else if(n=a)
        {printf("Great! Your guess is right!\n");
        break;}
     }             
    
    

    
     
     
     
          
    system("pause");
    return 0;
    
    
}
   
    
    
    


