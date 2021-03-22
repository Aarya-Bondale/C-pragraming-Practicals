#include<stdio.h>
#include<conio.h>
void main()
{
 float P,R,T,SI,CI;
 clrscr();
 printf("Enter the principal amount:");
 scanf("%f\n",&P);
 printf("Enter interest:");
 scanf("%f\n",&R);
 printf("Enter time in year:");
 scanf("%f\n",&T);
 SI=(P*R*T)/100.0;
 printf("Simple interest on amount is %.2f\n",SI);
 CI=P*(pow(1+R/100.0,T)-1);
 printf("Compound interest on amount is%.2f",CI);
 getch();

}