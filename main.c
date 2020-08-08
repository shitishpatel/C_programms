#include<stdio.h>

int main()
{
    int i,size,j;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter the element of a array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[size]);
    }
     int max=0;
     for(i=0;i<size;i++)
     {
        
      if(max<a[i])
      {
           a[i]=max;
      }
     }
     printf("%d",max);
    return 0;
}