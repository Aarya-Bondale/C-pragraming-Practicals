#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,add,sub,mult,div;
clrscr();
printf("Enter two numbers\n");
scanf("%f%f",&a,&b);
add=a+b;
printf("Addition of two number is:%.2f\n",add);
sub=a-b;
printf("Subtraction of two numbers is:%.2f\n",sub);
mult=a*b;
printf("Multiplication of two numbers is:%.2f\n",mult);
div=a/b;
printf("Division of two numbers is:%.2f\n",div);
getch();
}