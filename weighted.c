#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int x[1000],w[1000],n,z,sum=0,add=0,i;
float s;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
        scanf("%d\n",&x[i]);
        scanf("%d",&w[i]);
}  
for(i=0;i<=n;i++)
{
        add=add+w[i];
} 
for(i=0;i<=n;i++)
{
        z=x[i]*w[i];
        sum=sum+z;
        z==0;
}
/*       s=sum/add;
       printf("%0.1f",s);
    return 0;
}*/
printf("%d",sum);
return 0;
}

