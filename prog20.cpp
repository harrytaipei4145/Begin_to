#include<stdio.h>
#include<stdlib.h> 




int main(void)
{
int board[8][8];
int hor[8]={2,1,-1,-2,-2,-1,1,2};
int ver[8]={-1,-2,-2,-1,1,2,2,1};
int row,col,scan,i,j,time=0;

for(i=0;i<=7;i++)
{
  for(j=0;j<=7;j++)
  {
  board[i][j]=0;
  }               

}

printf("輸入起始水平位置:");
scanf("%d",&col);
printf("輸入起始垂直位置:");
scanf("%d",&row);

while(true)
{
printf("command(print'100'if end):");
scanf("%d",&scan);
 if(scan==100)
 break;
 if(scan>7||scan<0)
 {
 printf("error\n");
 continue;
 }
 if(row+ver[scan]>7||row+ver[scan]<0||col+hor[scan]>7||col+hor[scan]<0)
 {
 printf("error\n");
 continue;
 }


 else if(board[col+ver[scan]][row+hor[scan]]>0)
 {
 printf("error\n");
 continue;
 }
else
{
     row+=ver[scan];
     col+=hor[scan];
     time++;
     board[row][col]=time;
     continue;
}
}
for(i=0;i<=7;i++)
{
                 printf("\n\n");
  for(j=0;j<=7;j++)
  {
  if(board[j][i]<10)
  printf("%d   ",board[j][i]);
  else if(board[j][i]>=10)
  printf("%d  ",board[j][i]);
  }               

}

system("pause");
return 0;
}

