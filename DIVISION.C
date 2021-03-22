//write c program to check whether m is divisible by n
#include<stdio.h>
#include<conio.h>
void main()
{
int m,n;
clrscr();
printf("Enter two numbers");
scanf("%d%d",&m,&n);
if (m%n==0)
{
printf("%d is divisible by %d",m,n);
}
else
{
printf("%d is not divisible by %d",m,n);
}
getch();
}