#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *arr,size,sum=0,i;
	
	printf("Enter the element you want to array:");
	scanf("%d",&size);
	
	arr=(int*)malloc(size * sizeof(int));
	
	printf("Enter the array element :");
	
	for(i=0; i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum is %d",sum);
	
}
