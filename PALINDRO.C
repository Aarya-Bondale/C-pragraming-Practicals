#include<stdio.h>
#include<conio.h>
void main()
{
 int n,revN=0,r,oriN;
 clrscr();
 printf("Enter a number: ");
 scanf("%d",&n);
 oriN=n;
 while (n!=0)
 {
  r=n%10;
  revN=revN*10+r;
  n=n/10;
 }
 if (oriN==revN)
 printf("%d is a palindrome.",oriN);
 else
 printf("%d is not a palindrome.",oriN);
 getch();
}