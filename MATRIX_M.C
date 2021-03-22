#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
 clrscr();
 printf("Enter the number of row ");
 scanf("%d",&r);
 printf("Enter the number of column ");
 scanf("%d",&c);
 printf("First matrix elements:");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("Second matrix elements:");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 printf("Multiplication of matrix is:\n  ");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   mul[i][j]=0;
   for(k=0;k<c;k++)
   {
    mul[i][j]+=a[i][k]*b[k][j];
   }
  }
 }
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d\t",mul[i][j]);
  }
  printf("\n");
 }
 getch();
}