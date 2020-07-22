#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
int n,r;
clrscr();
printf("Enter a no.");
scanf("%d",&n);
r=fact(n);
printf("square of%d",r);
getch();
}
int fact(int n)
{
int i,x,fact=1;
for(i=x;i>=x-1;i--)
{
fact=fact*i;
return fact;
}
}
