#include<stdio.h>
#include<conio.h>
void main()
{
int i,size,a[50],num,pos;
clrscr();
printf("Enter the size");
scanf("%d",&size);
printf("enter element of array");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
printf("enetr the position");
scanf("%d",&pos);
printf("enter the number");
scanf("%d",&num);
if(pos<=0||pos>size+1)
printf("invalid position");
else
{
for(i=size-1;i>=pos-1;i--)
{
a[i+1]=a[i];
}
a[pos-1]=num;
size++;
}
for(i=0;i<size;i++)
printf("%d ",a[i]);
getch();
}
