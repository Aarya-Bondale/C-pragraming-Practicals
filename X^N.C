#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int x,n;
 long int p;
 clrscr();
 printf("Enter the value of base variable\n");
 scanf("%d",&x);
 printf("Enter the value of power\n");
 scanf("%d",&n);
 if (n==0)
 {
  printf("The power of %d^%dis 1",x,n);
 }
 else
 {
  p=pow(x,n);
  printf("The power of %d^%d is %ld",x,n,p);
 }
 getch();
}