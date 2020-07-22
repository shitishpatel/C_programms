       #include<stdio.h>
	   int main()
	   {
	   	 int i,n,m;
        scanf("%d\n",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
                scanf("%d",a[i]);
                if(a[i]>=38)
                {
                if((a[i]%5)<=3)
                {
                        m=a[i]/5;
                m++;
                a[i]=m*5;
                }
            
			}
			}
            for(i=0;i<n;i++)
                printf("%d",a[i]);
           
return 0;
}
