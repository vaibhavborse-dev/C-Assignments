int swap()
{
	int arr[]={54,65,23,98,22,31,11};
	
	int i,temp;
	for(i=0;i<7;i++)
	{
		for(int j=i+1;j<7;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		
	}
	for(i=0;i<7;i++)
	{
		printf("%d,",arr[i]);
	}
	return 0;
}
void main()
{
	int res;
	res=swap();
	
}
