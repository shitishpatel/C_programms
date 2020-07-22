#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{   clrscr();
	int i,ch,n=5;
	int arr[5];
	printf("enter the array elements ...\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
       a:
	clrscr();
	printf("if you wants to re-enter array elemants press\t\t\t1\nFor printing of array elements press\t\t\t\t2\nFor print the even valued elemants press\t\t\t3\nFor print the odd valued elements press\t\t\t\t4\nFor print the sum and average of array elements press\t\t5\nFor printing of maximum and minimum value of array press\t6\nFor remove the duplicate elements from array press\t\t7\nFor printing the revers of array press\t\t\t\t8\n");
	scanf("%d",&ch);
switch(ch)
{
case 1:
{
clrscr();
printf("Plase re-enter the array elemants....\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
getch();
goto a;
break;
}
case 2:
{
clrscr();
printf("this is your array...\n");
for(i=0;i<n;i++)
printf("%d  ",arr[i]);
getch();
goto a;
break;
}
case 3:
{
clrscr();
printf("This is your even valued elements..\n");
for(i=0;i<n;i++)
if(arr[i]%2==0)
printf("%d ",arr[i]);
else
printf(" * ");
getch();
goto a;
break;
}
case 4:
{
clrscr();
printf("This is your odd valued elements..\n");
for(i=0;i<n;i++)
if(arr[i]%2!=0)
printf("%d ",arr[i]);
else
printf(" * ");
getch();
goto a;
break;
}
case 5:
{
clrscr();
printf("This is your sum and Average...\n");
int sum=0;
float avg;
for(i=0;i<n;i++)
sum=sum+arr[i];
avg=sum/5;
printf("sum=%d\nAverage=%.3f",sum,avg);
getch();
goto a;
break;
}
case 6:
{
clrscr();
int l
for(i=0;i<n;i++)
for(int j=0;j<n-1;j++)
if(arr[i]>arr[j])
arr[i]=l;
printf("maximun=%d\n",l);

break;
getch();
goto a;
break;
}


default :
{
printf("for exit press...");

}
}

getch();
}

