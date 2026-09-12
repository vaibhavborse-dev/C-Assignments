#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *arr,size,no;
	int temp=0;
	
	printf("Enter the array elements");
	scanf("%d", &size);

	
	arr=(int*)malloc(size * sizeof(int));
	
	printf("Enter the array element :");
		
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number you want to search in array :");
	scanf("%d",&no);
	
	for(int i=0;i<size;i++)
	{
		if(no==arr[i])
		{
			temp=1;
			break;
		}
	}
	
	if(temp==1)
	{
		printf("Elemet found");
	}
	else printf("Element not found:");
}
