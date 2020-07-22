#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,temp=1;
float x,deg,nr,dr,term,s=0;
clrscr();
printf("Enter degree");
scanf("%f",&deg);
printf("\n enter the value of n");
scanf("%d",&n);
x=deg*3.14/180;
nr=x;
dr=1;
s=x;
for(i=2;i<=n;i++)
{
nr=nr*x*x;
dr=dr*(i*2-2)*(i*2-1);
temp=temp*(-1);
term=nr/dr*temp;
s=s+term;
}
printf("\n %f",s);
getch();
}
