#include<stdio.h>

int main()
{
        int n,z,a[100],count=0,i,j,x=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
		z=a[i];
        for(j=z;j=0;j/10)
        {
        x=z%10;
        if(a[i]%x==0)
    count++;
    n=z/10;
    z=n;
}
    
        printf("%d %d",a[i],count);
        }
        return 0;
}
