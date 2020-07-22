#include<stdio.h>
#include<conio.h>
int main ()        //salary calculation
{
float bsal,da,hra,gsal;
clrscr ();
printf("enter the value bsal");
scanf("%f",&bsal);
if(bsal<15000)
{
hra=(10*bsal)/100;
da=(90*bsal)/100;
gsal=bsal+hra+da;
printf(" gsal=%f",gsal);
}
else
{
hra=5000;
da=(98*bsal)/100;
gsal=bsal+hra+da;
printf("gsal=%f",gsal);
}
getch ();
return 0;
}  1111111111111111111111111111111111111111