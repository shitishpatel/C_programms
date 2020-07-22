#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,d,r1,r2;
clrscr();
printf("enter the value of a,b,c of quadratic equation;");
scanf("%f%f%f",&a,&b,&c);
d=(b*b)-4*a*c;
if(d>0)
{
r1=(-b+sqrt(d)/(2*a));
r2=(-b-sqrt(d)/(2*a));
printf("two distict real root r1=%f and r2=%f",r1,r2);
}
else if (d==0)
{
r1=r2=-b/(2*a);
printf("equal roots r1=%f r2=%f",r1,r2);
}
else if(d<0)
{
printf("imaginary rootr1=%f r2=%f",r1,r1);
}
getch();
}