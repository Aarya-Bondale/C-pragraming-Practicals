#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int x[100],y[100],xy[100];
 int i,n,ysum,xysum,x_sqry[100],x_sqrysum;
 float mean,var,coe_var;
 clrscr();

 ysum=xysum=x_sqrysum=0;
 //get the number of entries from the user
 printf("Enter the value of n: ");
 scanf("%d",&n);
 //get the values of x and y from the user
 printf("Enter the values of x and y: \n");
 for(i=0;i<n;i++)
 {
  printf("x[%d] and y[%d]: ",i,i);
  scanf("%d%d",&x[i],&y[i]);
 }
 //find the needed data to calculate mean and variance
 for(i=0;i<n;i++)
 {
  xy[i] = x[i] * y[i];
  ysum = ysum + y[i];
  xysum = xysum + xy[i];
  x_sqry[i]= x[i] * x[i] * y[i];
  x_sqrysum= x_sqrysum + x_sqry[i];
 }

 mean=1.0*xysum/ysum;
 var= 1.0*(x_sqrysum / ysum)-(mean * mean);

 //print the result
 printf("Mean of given data is %f",mean);
 printf("variance of given data is %f",var);
 getch();
}