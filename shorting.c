#include<stdio.h>
int main()
{
        int n,temp=0,j,i,k;
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
                        {
                          temp=a[i];
                           a[i]=a[j];
                            a[j]=temp;
							}
											            for(k=0;k<n;k++)
				         printf("%d",a[k]);
                                printf("\n");
        
                    
			
					}
					else
                        {
                        for(k=0;k<n;k++)
                                printf("%d",a[k]);
                                printf("\n");
                            break;
                       }
               }
        
                    }
			
    return 0;

}

