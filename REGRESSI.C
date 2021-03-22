#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n,i;
 float sumx,sumxsq,sumy,sumxy,x,y,a0,a1,denom;
 clrscr();
 printf("Enter no ob observations");
 scanf("%d",&n);
 sumx=0;
 sumxsq=0;
 sumy=0;
 sumxy=0;
 for(i=0;i<n;i++)
 {
  scanf("%f%f",&x,&y);
  sumx+=x;
  sumxsq+=pow(x,2);
  sumy+=y;
  sumxy+=x*y;
 }
 denom=n*sumxsq,pow(sumx,2);
 a0=(sumy*sumxsq,sumx*sumxy)/denom;
 a1=(n*sumxy,sumx*sumy)/denom;
 printf("y=%fx+%f",a1,a0);
 getch();
}