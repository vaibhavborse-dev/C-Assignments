void main()
{
	int arr[]={43,54,51,87,98};
	int min=arr[0],max=arr[0];
	
	for(int i=0;i<5;i++)
	{
		if(arr[i]< min)
		{
			min=arr[i];
		}
		
		if(arr[i]>max)
			max=arr[i];
			
		
	}
	printf("%d",min);
		printf("%d",max);
	
	
	
}
