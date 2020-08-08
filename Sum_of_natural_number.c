#include<stdio.h>

int main()
{
    int i,num,sum=0;
    printf("Enter last natural number\n");
    scanf("%d",&num);
    // Runs in constant time
    sum=(num*num+num)/2;

    // Runs in linear time
    // for(i=1;i<=num;i++)
    // {
    //     sum=sum+i;
    // }
    printf("%d",sum);
    return 0;
}