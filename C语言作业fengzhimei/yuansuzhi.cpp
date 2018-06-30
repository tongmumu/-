#include <stdio.h>
void main()
{
int s1,s2,x,y;
 int a[5][5];
 for (x=0;x<=4;x++)
 {
  for(y=0;y<=4;y++)
  {
   scanf("%d",&a[x][y]);
  }
 }
 s1=a[0][0]+a[1][1]+a[2][2]+a[3][3]+a[4][4];
 s2=a[0][4]+a[1][3]+a[2][2]+a[3][1]+a[4][0];
 printf("S1=%d S2=%d\n",s1,s2);
}
