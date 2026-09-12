#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr;
	int *brr;
	int *crr;
	int size;
	
	printf("Enter element of an first array");
	scanf("%d",&size);
	
	arr=(int*)malloc(size * sizeof(int));
	brr=(int *)malloc(size * sizeof(int));
	crr=(int *)malloc(size * sizeof(int));
	
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter element of an second array");

	
		for(int i=0;i<size;i++)
			{
				scanf("%d",&brr[i]);
			}
	
		for(int i=0;i<size;i++)
		
		{
			crr[i]=arr[i]+brr[i];
			
		}
	
	for(int i=0;i<size;i++)
	{
		printf("%d\n",crr[i]);
	}
	
	free(arr);
free(brr);
free(crr);
return 0;
}
