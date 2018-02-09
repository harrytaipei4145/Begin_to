#include<stdio.h>
#include<stdlib.h> 




int main(void)
{
    int command,i,j,x=0,z=1,space,m=0,n=0,s;
    int draw[50][50];
    char print[50][50];
    for(i=0;i<=49;i++)
    {
     for(j=0;j<=49;j++)
     {
     draw[i][j]=0;
     }
    }

    while(true)
    {
     printf("command:");
     scanf("%d",&command);
     if(command==9)
     break;
      else if(command==6)
      {
        for(i=0;i<=49;i++)
        {
         printf("\n");
         for(j=0;j<=49;j++)
         {
         if(draw[i][j]==0)
         print[i][j]=' ';
         else if(draw[i][j]==1)
         print[i][j]='*';
         printf("%c",print[i][j]);
         }
        }
        continue;
      }
      else if(command==1)
      {x=0;
       continue;
      }
      else if(command==2)
      {x=1;
       continue;
      }
      else if(command==4)
      {z--;
       if(z==0)
       z=4;
       continue;}
      else if(command==3)
      {z++;
       if(z==5)
       z=1;
       continue;}
      else if(command==5)
      { scanf("%d",&space);
        if(z==2)
        {
         if(m+space>49)
         {printf("ERROR!");
          continue;
          }
          else
          {
            if(x==1)
            for(s=m;s<=m+space;s++)
            {
            draw[s][n]=draw[s][n]*0+1;
            } 
            
          }
           m=m+space;
        }
        else if(z==1)
        {
         if(n+space>49)
         {printf("ERROR!");
          continue;
          }
          else
          {
            if(x==1)
            for(s=n;s<=n+space;s++)
            {
            draw[m][s]=draw[m][s]*0+1;
            } 
          }
          n=n+space; 
        }   
        else if(z==4)
        {
         if(m-space<0)
         {printf("ERROR!");
          continue;
          }
          else
          {
            if(x==1)
            for(s=m;s>=m-space;s--)
            {
            draw[s][n]=draw[s][n]*0+1;
            } 
          } 
          m=m-space;
        }
         else if(z==3)
        {
         if(n-space<0)
         {printf("ERROR!");
          continue;
          }
          else
          {
            if(x==1)
            for(s=n;s>=n-space;s--)
            {
            draw[m][s]=draw[m][s]*0+1;
            } 
          }
            n=n-space;
        }                                   
      }
     
    }  
    
system("pause");
return 0;
}

