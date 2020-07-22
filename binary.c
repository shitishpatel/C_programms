#include<stdio.h>
int main()
{
	int a,r,sum=0,s=0,z;
	scanf("%d",&a);
	 while(a!=0)
        {
        r=a%2;
        sum=sum*10+r;
        a=a/2;
        }
       while(sum!=0)
        {
                z=sum%10;
                s=s*10+z;
                sum=sum/10;
        
	}
	printf("%d",s);
	return 0;
}
