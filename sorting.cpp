#include<stdio.h>
int main()
{
	int i,j,a[100],m,n,x[100];
	scanf("%d",&m);
	scanf("%d",&a);
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			x=a[i]+a[j];
			x==0;
			if(a==x)
			break;
		}
	}
	printf("%d %d",i,j);
	return 0;
}
