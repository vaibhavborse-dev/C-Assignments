int reverse()
{
	int arr[]={65,76,44,34,23,34};
	
	int brr[6];
	
	int j=0;
	for(int i=5;i>=0;i--)
	{
	  	brr[j]=arr[i];
	  	j++;
	}
	
	for(int i=0;i<6;i++)
	{
		printf("%d,",brr[i]);
	}
	return 0;
}

void main()
{
	int res;
	res=reverse();
	
}
