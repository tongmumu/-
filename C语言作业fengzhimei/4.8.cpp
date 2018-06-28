#include<stdio.h>
int main()
{
int a;
float score;
char grade;
printf("please enter score:");
scanf("%f",&score);
if(score>100)
printf("please enter again:");
else
a=score/10;
switch(a)
{
	case 0:
		case 1:
			case2:
				case 3:
					case 4:
						case 5: grade='E';break;
						case 6: grade='D';break;
						case 7: grade='C';break;
						case 8: grade='B';break;
						case 9: grade='A';break;
					}
					printf("Your grade:%c\n",grade);
					return 0;
				}
							

