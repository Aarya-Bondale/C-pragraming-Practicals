#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[20],b[20];
 clrscr();
 printf("Enter string1: ");
 gets(a);
 printf("Enter string2: ");
 gets(b);
 printf("Combined string is:%s",strcat(a,b));
 getch();
}