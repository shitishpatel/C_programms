#include<stdio.h>

int main()
{
    int num,i=0,j,a[10];
    printf("Enter the decimal number\n");
    scanf("%d",&num);
    if(num==0)
    {
        printf("0 0");
    }
    while(num)
    {
        a[i]=num%2;
        num=num/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
    return 0;
}