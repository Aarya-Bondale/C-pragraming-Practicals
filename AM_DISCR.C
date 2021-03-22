#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,x[100],f[100],fx[100],sf,sfx,am;
 sf=sfx=0;
 clrscr();
 printf("Enter total number of observations: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Enter the observation %d",i+1);
  scanf("%d",&x[i]);
  printf("Enter the frequency of observation%d: ",i+1);
  scanf("%d",&f[i]);
 }
 for(i=0;i<n;i++)
 {
  sf+=f[i];
  fx[i]=x[i]*f[i];
  sfx+=fx[i];
 }
 printf("Arithmatic mean for discrete data is: %.4f",(float)sfx/(float)sf);
 getch();
}