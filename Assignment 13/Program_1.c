void main()
{
	int *arr;
	int size,i;
	int min,max;
	
	printf("Enter the elements of array ");
	scanf("%d",&size);
	
	arr=(int*) malloc(size* sizeof(int));
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	max=arr[0];
	
	for(i=0;i<size; i++)
	{
		arr[i]<2;
		
			if(arr[i] < min)
			{
				min=arr[i];
			}
			if(arr[i] > max)
			{
				max=arr[i];
			}
	}
	printf("Minimum element is : %d\n",min);
	printf("Maximum element is : %d\n",max);
	free(arr);
}

