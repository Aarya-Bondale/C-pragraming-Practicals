#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAXSIZE 10
int main()
{
 float x[MAXSIZE];
 int i,n;
 float mean,variance,std_deviation,coef_variation,sum=0,sum1=0;
 printf("How many numbers you want to enter: ");
 scanf("%d",&n);
 printf("Enter %d real nubers \n",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&x[i]);
 }
 //computing sum of all elements
 for(i=0;i<n;i++)
 {
  sum=sum+x[i];
 }
 //computing mean
 mean=sum/(float)n;
 //computing variance
 for(i=0;i<n;i++)
 {
  sum1=sum1+pow(x[i]-mean,2);
 }
 variance=sum1/(float)n;
 //compoting std_deviation
 std_deviation=sqrt(variance);
 //comupting coef_variation
 coef_variation=std_deviation/mean;
 printf("Mean of all observations: %.2f\n",mean);
 printf("variamce of all observations: %.2f\n",variance);
 printf("standard deviation: %.2f\n",std_deviation);
 printf("coefficient of variation: %.2f\n",coef_variation);
 getch();
 return 0;
 }
