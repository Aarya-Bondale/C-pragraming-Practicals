#include<stdio.h>
#include<conio.h>
void main()
{
 int n,sum=0,m;
 clrscr();
 printf("Enter a number: ");
 scanf("%d",&n);
 while(n>0)
 {
  m=n%10;
  sum=sum+m;
  n=n/10;
 }
 printf("sum is= %d",sum);
 getch();
}