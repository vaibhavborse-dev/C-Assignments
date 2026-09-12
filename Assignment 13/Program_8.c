void main()
{
	int *arr,*brr,*crr,size;
	
	printf("Enter the how many elements of an array:");
	scanf("%d",&size);
	
	arr=(int*)malloc(size * sizeof(int));
	brr=(int*)malloc(size * sizeof(int));
	crr=(int*)malloc(2 * size * sizeof(int));
	
	printf("Enter the first array element \n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the second array element \n");

	for(int i=0;i<size;i++)
	{
		scanf("%d",&brr[i]);
	}
	
	for(int i=0;i<size;i++)
	{
		crr[i]=arr[i];
	}
	
	for(int i=0;i<size;i++)
	{
		crr[size+i]=brr[i];
	}
	
	for(int i=0;i<2*size;i++)
	{
		printf("%d ",crr[i]);
	}

}
