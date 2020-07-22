#include<stdio.h>
int main()
{
        int n,temp=0,j,i;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
                for(j=i+1;j<n;j++)
                {
                        if(a[i]>a[j])
                        {
                                temp=a[i];
                                a[i]=a[j];
                                a[j]=temp;
                        }
                }
                printf("%d",a[i]);
        }
    
        if(n%2!=0)
        printf("%d",a[(n+1)/2]);
        else
        printf("%d",a[n/2]);

        return 0;

}

