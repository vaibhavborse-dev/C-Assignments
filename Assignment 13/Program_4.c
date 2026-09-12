#include<stdio.h>
#include<stdlib.h>
void main()

{
	int *arr,size;
		
	printf("Enter the array elements you want : ");
	scanf("%d",&size);
	
	arr=(int *)malloc(size * sizeof(int));
	
	printf("Enter the array elements:");
	
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int even=0;
	int odd=0;
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
			even=even+1;
		
		if(arr[i]%2!=0)
			odd=odd+1;
		
	}
	printf("Event elements are %d\n",even);
	printf("Odd elements are %d",odd);
}
