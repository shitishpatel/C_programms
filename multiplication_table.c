#include<stdio.h>

int main()
{
    int i,num;
    printf("Enter no. which multiplication table you want to see ");
    scanf("%d",&num);
    printf("The multiplication table of %d is\n",num);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",num,i,i*num);
    }
    
    return 0;
}