#include<stdio.h>
int main()
{
	int i,j,temp=0,n,m,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(a[i]<=a[j])
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			
		}
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return 0;
}
