#include<stdio.h>

int main()
{
    int size,i,j,temp;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the array element\n");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    for(i=0;i<size/2;i++)
    {
           temp=a[i];
           a[i]=a[size-1-i];
           a[size-1-i]=temp;
    }
    for(i=0;i<size;i++)
    {
       printf("%d\n",a[i]);   
    }
    return 0;
}