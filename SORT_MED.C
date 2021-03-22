#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n,a[50],temp;
 float median;
 clrscr();
 printf("Enter number of items: ");
 scanf("%d",&n);
 printf("Enter %d values\n",n);
 for(i=1;i<=n;i++)
 scanf("%d",&a[i]);
 //sorting
 for(i=1;i<n;i++)
 {
  for(j=1;j<n;j++)
  {
   if(a[j]>=a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 //median
 if(n%2==0)
  median=(a[n/2]+a[n/2+1])/2.0;
 else
  median=a[n/2+1];
  //output
  for(i=1;i<=n;i++)
   printf("%d\t",a[i]);
   printf("\nMedian is %.3f: ",median);
 getch();
}