#include<stdio.h>

int main()
{
    int num,i,flag=0;
    printf("Enter that num. ? you want to know prime or not\n");
    scanf("%d",&num);
    for(i=2;i*i<num;i++)
    {
        if(num%i==0)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("%d is not a prime number ",num);
    }
    else
    {
        printf("%d is a prime number ",num);
    }
    return 0;
}