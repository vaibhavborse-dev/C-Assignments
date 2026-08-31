void main()
{
	int arr[]={54,76,87,53,12};
	int no,temp=0;
	printf("Enter the no you want to search :");
	scanf("%d",&no);
	
	for(int i=0;i<5;i++)
	{
		if(no==arr[i])
		{
			printf("Element found At %d place",i);
			temp=1;
			break;
			
		}
	
	}
	if(temp==0)
		printf("Element not found");
	
}
