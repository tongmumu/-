#include<stdio.h>
#include<math.h>
int main()
{
	int I,a,c;
	printf("请输入当月利润:",I);
	scanf("%d",&I);
	a=I/100000;
	switch(a)
	{
		case 0:c=I*0.1;break;
		case 1:c=10000+(I-100000)*0.075;break;
		case 2:
		case 3:c=25000+(I-200000)*0.05;break;
		case 4:
		case 5:c=45000+(I-400000)*0.03;break;
		case 6:
		case 7:
			case 8:
				case 9:c=51000+(I-600000)*0.015;break;
				case 10:c=57000+(I-1000000)*0.01;break;
				 }
				 printf("应发奖金:%d\n",c) ;
				 return 0;
				 } 
	
