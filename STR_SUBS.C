#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[20];
 char suba[10];
 char *result;
 clrscr();
 printf("Enter a string");
 gets(a);
 printf("Enter string to search");
 gets(suba);
 result=strstr(a,suba);
 if(result==0)
 printf("The given string is not present in original string");
 else
 printf("The given string is present in original string: %s",result);
 getch();
}