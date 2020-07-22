#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int d,w,m,y,x;
printf("enter the days;");
scanf("d",&x);
y=x/365;
x=x-(365*y);
m=x/30;
x=x-(30*m);
w=x/7;
x=x-(7*w);
d=x;
printf("year=%d\tmonth=%d\tweek=%d\tday=%d",y,m,w,d);
getch();
return 0;
}