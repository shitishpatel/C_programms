#include<stdio.h>
#include<math.h>
int main()
{
        char s[1000000];
        int i,m=0,n,p=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%c",&s[i]);
        }
        for(i=1;i<=n;i++)
        {
                if(s[i]=='D')
                m++;
                else if(s[i]=='U')
                p++;
        }
        printf("%d\n%d\n",m,p);
        printf("%d",abs(m-p));
return 0;
}
