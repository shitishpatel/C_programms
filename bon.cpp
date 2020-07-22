#include<stdio.h>
int main()
{
	int m,n,s[1000],a,i,x,z=0;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&s[i]);
	}
	scanf("%d",&a);
	for(i=0;i<m;i++)
	{
		z=z+s[i];
	}
	x=(z-s[n])/2;
	if(x!=a)
	printf("%d",a-x);
	else
	printf("bon appetit");
	return 0;
}
