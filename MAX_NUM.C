#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,num3;
clrscr();
printf("Enter any 3 variables");
scanf("%d%d%d",&num1,&num2,&num3);
if((num1>num2)&&(num1>num3))
printf("\n%d is maximun",num1);
else if((num2>num3)&&(num2>num1))
printf("\n%d is maximum",num2);
else
printf("\n%d is maximum",num3);
getch();
}
