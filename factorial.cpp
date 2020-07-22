#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
        int n,a[100],count=0,i,x=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
                x=a[i]%10;
                if(a[i]/x==0)
                count++;
                a[i]=a[i]/10;
        
        printf("%d\n",count);

        }
        return 0;
}
