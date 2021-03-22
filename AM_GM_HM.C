#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int i,n;
 float a[30],sum,am,gm,hm,b,c,add;
 clrscr();
 printf("How many numbers you eant to enter: ");
 scanf("%f",&n);
 printf("series\n");
 for(i=0;i<n;i++)
 {
  printf("num1: \n");
  scanf("%f",&a[i]);
 }
 sum=0;
 gm=1;
 for(i=0;i<n;i++)
 {
  sum=sum+a[i];
 }
 am=(sum/n);
 printf("Arithmatic mean=%f\n",am);
 for(i=0;i<n;i++)
 {
  gm=gm*a[i];
 }
 printf("Geometric mean=%f\n",pow(gm,1/n));
 for(i=0;i<n;i++)
 {
  add=(add+a[i]);
 }
 c=pow(add,-1);
 hm=n*c;
 printf("Harmonic mean=%f\n",hm);
 getch();
}