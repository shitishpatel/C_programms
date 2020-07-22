#include<stdio.h>
#include<conio.h>

void main()
{
	int i,arr[100],n,temp,flag=0;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter the elelments of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the integer you want to search:\n");
	scanf("%d",&temp);
	for(i=0;i<n;i++)
	{
		if(arr[i]==temp)
		{
			printf("The given integer is present in the list at position %d\n",i+1);
			flag++;
			break;
		}
		else
			printf("The given integer is not present in the list\n");

	}
	if(flag==0)
	{
		arr[n]=temp;
		n++;
		printf("\nThe new list after adding the new number is ");
		for(i=0;i<n;i++)
		{
			printf(" %d",arr[i]);
		}
	}



	getch();
}