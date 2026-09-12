void main()
{
	int *arr,size;
	
	printf("Enter how many array elements:");
	scanf("%d",&size);
	
	arr=(int *)malloc(size * sizeof(int));
	
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
		
	int i=size-1;
	while(i>=0)
	{
		printf("%d ",arr[i]);
		i--;
	}
}
