#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("Enter first number :\n");
 scanf("%d",&a);
 printf("Enter second number :\n");
 scanf("%d",&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\nAfter swapping a= %d and b= %d",a,b);
 getch();
 }