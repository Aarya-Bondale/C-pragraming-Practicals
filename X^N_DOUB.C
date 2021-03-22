#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 double x,n,result;
 clrscr();
 printf("Enter base(x) number: ");
 scanf("%lf",&x);
 printf("Enter an exponent(n): ");
 scanf("%lf",&n);

 //calculate the power
 result=pow(x,n);
 printf("%.1lf^%.1lf=%.2lf",x,n,result);
 getch();
 }