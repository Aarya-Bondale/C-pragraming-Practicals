#include<stdio.h>
#include<conio.h>
int main()
{
 int number,n,remainder,binary=0,place=1;
 clrscr();
 printf("Enter a number: ");
 scanf("%d",&number);
 n=number;
 while(n>0)
 {
  remainder=n%2;
  binary+=remainder*place;
  place*=10;
  n/=2;
 }
 printf("Binary equivalent of %d is %d",number,binary);
 getch();
 return 0;
}