#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 float x1,x2,y1,y2,distance;
 clrscr();
 printf("Input x1: ");
 scanf("%f",&x1);
 printf("Input x2: ");
 scanf("%f",&x2);
 printf("Input y1: ");
 scanf("%f",&y1);
 printf("Input y2: ");
 scanf("%f",&y2);
 distance=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
 printf("Distance between two points is: %.4f",sqrt(distance));
 printf("\n");
 getch();
 return 0;
}