#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a[100], x[100],y[100],sum=0,add=0,n,i;
float mean,z;
clrscr();
printf("enter the no.\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
mean=sum/n;
printf(" mean %f\n",mean);
for(i=1;i<=n;i++)
{
x[i]=a[i]-mean;
y[i]=x[i]*x[i];
add=add+y[i];
}
z=sqrt(add/n);
printf("SD %f",z);
getch();
}
