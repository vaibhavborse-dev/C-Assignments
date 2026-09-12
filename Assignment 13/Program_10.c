void main()
{
	int *arr,size;
	
	printf("Enter the element of an array :");
	scanf("%d",&size);
	
	arr=(int*)malloc(size * sizeof(int));
	
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++)
	{
	
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{

				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
	  		}
		}
	}
	for(int i=0;i<size;i++)
		printf("%d",arr[i]);
}
