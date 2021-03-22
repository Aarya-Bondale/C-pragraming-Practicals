#include<stdio.h>
#include<conio.h>
int main()
{
float fah,cel;
clrscr();
printf("Enter temperature in fah");
scanf("%f",&fah);
cel=(5.0/9)*(fah-32);
printf("%.2f in fah is %.2f  in celsius",fah,cel);
getch();
return 0;
}