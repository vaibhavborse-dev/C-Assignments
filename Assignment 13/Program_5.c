#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *arr,size;
	
	printf("Enter the array element :");
	scanf("%d",&size);
	
	arr=(int *)malloc(size * sizeof(int));
	
	printf("Enter the array element :");
	
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
		
		printf("Alternate elements are :");
	for(int i=0;i<size;i=i+2)
	{
		
		printf("%d\n",arr[i]);
	}
}
