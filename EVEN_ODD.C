#include<stdio.h>
#include<conio.h>
main()
{
int a;
printf("Enter any number");
scanf("%d",&a);
if(a%2==0)
{
printf("Entered number %d is even",a);
}
else
{
printf("Entered number %d is odd",a);
}
getch();
}
