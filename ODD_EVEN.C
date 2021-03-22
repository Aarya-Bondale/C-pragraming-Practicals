#include<stdio.h>
#include<conio.h>
int find_num(int);
int main()
{
 int num;
 clrscr();
 printf("Enter the number to checkodd or even\n");
 scanf("%d",&num);
 finf_num(num);
 getch();
 return 0;
}

int find_num(int num)
{
 if(num%2==)
 {
  printf("\n%d is an even number",num);
 }
 else
 {
  printf("\n%d is an odd number",num);
 }
}