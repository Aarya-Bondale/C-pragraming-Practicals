#include<stdio.h>
#include<conio.h>
#include<math.h>
long int power(int x,int n);
void main()
{
 int x,n;
 long int p;
 clrscr();
 printf("Enter the value of base(x)");
 scanf("%d",&x);
 printf("Enter value of power(n)");
 scanf("%d",&n);
 power(x,n);
 printf("x^n =%ld",power);
 getch();
}

long int power(int x,int n)
{
 long int sum=1,counter=1;
 if (n==0)
  return(1);
 else
  while(counter<=n)
  {
   sum=sum*x;
   counter++;
  }
 return(sum);
}