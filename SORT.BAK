#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,j,temp=0,count=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
printf("%d ",a[i]);
}
count=a[n-1];
for(i=0;i<n;i++)
{
if(count==a[i])
count++;
}
getch();
}