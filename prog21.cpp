#include<stdio.h>
#include<stdlib.h> 




int main(void)
{
int board[8][8];
int hor[8]={2,1,-1,-2,-2,-1,1,2};
int ver[8]={-1,-2,-2,-1,1,2,2,1};
int row=0,col=0,i,j,time=1,temp,x,y;
int judge[8][8]={2,3,4,4,4,4,3,2,3,4,6,6,6,6,4,3,4,6,8,8,8,8,6,4,4,6,8,8,8,8,6,4,4,6,8,8,8,8,6,4,4,6,8,8,8,8,6,4,3,4,6,6,6,6,4,3,2,3,4,4,4,4,3,2};


for(i=0;i<=7;i++)
{
                 
                 for(j=0;j<=7;j++)
                 {
                 board[j][i]=0;
                 
                 }
}
board[0][0]=1;
while(true)
{
temp=9;
i=0;
while(i<=7)
 {   if(row+ver[i]>=0&&row+ver[i]<=7&&col+hor[i]>=0&&col+hor[i]<=7)
    {
      if(board[row+ver[i]][col+hor[i]]==0)
      {
        if(temp>judge[row+ver[i]][col+hor[i]])
        {
        temp=judge[row+ver[i]][col+hor[i]];
        x=row+ver[i];
        y=col+hor[i];
        }
      }
    }
    i++;
  }
  time=time+1;
  board[x][y]=time;
  
  if(time==64)
  {break;}
}
for(i=0;i<=7;i++)
{
                 printf("\n");
                 for(j=0;j<=7;j++)
                 {
                 if(board[j][i]>=10)                 
                 printf("%d  ",board[j][i]);
                 else if(board[j][i]<10)                 
                 printf("%d   ",board[j][i]);
                 
                 }
}




system("pause");
return 0;
}

