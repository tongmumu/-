 #include<stdio.h>
 #include<math.h>
 int main()
 {
 	int i,indiv,ten,hundred,thousand,ten_thousand,place;
 	printf("������һ��������5λ����������",i);
 	scanf("%d",&i);
	 if (i>9999)
	 place=5;
	 else  if (i>999)
	 place=4;
	 else  if (i>99)
	 place=3;
	 else  if (i>9)
	 place=2;
  else place=1;
  printf("λ��:%d\n",place);
  printf("ÿλ����Ϊ:");
  ten_thousand=i/10000;
  thousand=(int)(i-ten_thousand*10000)/1000;
  hundred=(int)(i-ten_thousand*10000-thousand*1000)/100;
  ten=(int)(i-ten_thousand*10000-thousand*1000-hundred*100)/10;
  indiv=(int)(i-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
  switch(place)
    {case 5:printf("%d,%d,%d,%d,%d",ten_thousand,thousand,hundred,ten,indiv);
     printf("\n��������Ϊ:");
     printf("%d%d%d%d%d\n",indiv,ten,hundred,thousand,ten_thousand);
     break;
     case 4:printf("%d,%d,%d,%d",thousand,hundred,ten,indiv);
     printf("\n��������Ϊ:");
     printf("%d%d%d%d\n",indiv,ten,hundred,thousand);
     break;
     case 3:printf("%d,%d,%d",hundred,ten,indiv);
     printf("\n��������Ϊ:");
     printf("%d%d%d\n",indiv,ten,hundred);
     break;
     case 2:printf("%d,%d",ten,indiv);
     printf("\n��������Ϊ:");
     printf("%d%d\n",indiv,ten);
     break;
     case 1:printf("%d",indiv);
     printf("\n��������Ϊ:");
     printf("%d\n",indiv);
     break;
      }
  return 0;
 }
