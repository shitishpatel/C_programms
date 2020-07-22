#include<stdio.h>

	
int main()
{
        int i,n,x=0,y=0,j,a[3];
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                for(j=1;j<=3;j++)
                {
                        scanf("%d",&a[j]);
                        
                    }
                }
            for(i=0;i<n;i++)
            {
			
                      x=a[3]-a[1];
                        y=a[3]-a[2];
                        printf("%d\n%d\n",x,y);
        
                        if(x==y)
                        printf("Mouse C\n");
                        if(x>y)
                        printf("Cat B\n");
                        if(y>x)
                        printf("Cat A\n");
        
}
        
        
        
        return 0;
    }
