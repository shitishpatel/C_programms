#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i,j,count=0,flag,temp=0;
printf("Enter number of terms:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(a[i]==a[j])
		count++;
		temp=temp+count;

	}

	if(temp==count)
