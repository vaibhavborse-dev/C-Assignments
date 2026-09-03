int  evenodd()
{
	int arr[]={56,45,34,22,23,87,89};
    int even=0,odd=0;
	
	for(int i=0;i<7;i++)
	{
		if(arr[i]%2==0)
		{
		
			even=even+1;
			
	}
	
		else
		{
			odd=odd+1;
		
		}
	}
	
	printf("Even numbers is :%d\n",even);
	printf("Odd numbers is : %d",odd);
}
void main()
{
	evenodd();

}
