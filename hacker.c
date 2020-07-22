#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,a[100],n,z;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				z=abs(i-j);
				printf("%d",z);
			}
		}
	}
	return 0;
}
