#include<stdio.h>
int main()
{
    int i,j,n,m=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<n;j++)
    {
    m=a[j];
    for(i=1;i<=m;i++)
    {
    	if(i%3!=0&&i%5!=0)
	printf("%d\n",i);
	else if(i%3==0&&i%5==0)
	printf("FizzBuzz\n");
      else if(i%3==0)
    printf("Fizz\n");
    else if(i%5==0)
    printf("Buzz\n");
}
}
    return 0;
    
}
