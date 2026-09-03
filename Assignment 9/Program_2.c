
int searcharr()
{
		int arr[]={54,76,87,53,12};
		int no,temp=0;
		printf("Enter the no you want to search :");
		scanf("%d",&no);
		
		for(int i=0;i<5;i++)
		{
			if(no==arr[i])
			{
			
				return i;
				
			}
		
		}
		if(temp==0)
			return 1;
}
void main()
{
		int res;
		res=searcharr();
		
		if(res==1)
			printf("Not found");
		
		else
			printf("Array element Found at %d index",res);
		
		
}
