#include<stdio.h>
#include<conio.h>
#define max_size 100
void main()
{
 int arr[max_size],size,i,j,temp;
 clrscr();

 printf("Enter size of array: ");
 scanf("%d",&size);

 printf("enter the elements in array: ");
 for(i=0;i<size;i++)
 {
  scanf("%d",&arr[i]);
 }
 for(i=0;i<size;i++)
 {
  for(j=i+1;j<size;j++)
  {
   if(arr[i]>arr[j])
   {
    temp=arr[j];
    arr[j]=arr[i];
    arr[i]=temp;
    }
  }
 }
 printf("Numbers in assending order: ");
 for(i=0;i<size;i++)
 {
  printf("%d  ",arr[i]);
 }
 getch();
}