#include<stdio.h>
int main()
{
	int i,j,n,m=0,temp=0,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	for(j=1;j<n;j++)
	{
		if(a[i]>a[j])
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	printf("%d",temp);
	}
	
}
	//for(i=0;i<n;i++)
	//printf("%d",a[i]);/*
	/*for(i=0;i<n;i++)
	{
		for(j=1;j<=n;j++)
		{
		if(a[i]==a[j])
	
		m++;

}	}
	printf("%d",m);*/

	return 0;
}
