#include<stdio.h>
#include<conio.h>
void main()
{
int r,b,h;
float circle_area,triangle_area;
clrscr();
printf("Enter value of radius, hight,base");
scanf("%d%d%d",&r,&h,&b);
circle_area=3.14*r*r;
triangle_area=0.5*b*h;
printf("\nArea of circle is %.2f \n Area of triangle is %.2f",circle_area,triangle_area);
getch();
}