#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[100],temp;
 int i,j,len;
 clrscr();
 printf("Enter a string: ");
 gets(str);
 len=strlen(str);

 for(i=0;i<len;i++)
 {
  for(j=0;j<(len-1);j++)
  {
   if(str[j]>str[j+1])
   {
    temp=str[j];
    str[j]=str[j+1];
    str[j+1]=temp;
   }
  }
 }
 printf("\nstring in assending order is:\n%s",str);
 getch();
}