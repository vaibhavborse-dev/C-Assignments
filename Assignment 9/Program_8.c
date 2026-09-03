int merge()
{
	int arr[5]= {1,2,3,43,5};
		int brr[5]={10,20,30,40,50};

    
    int crr[10],i;
    
    for(i=0;i<5;i++)
    {
    	crr[i]=arr[i];
	}
	

	for(i=5;i<10;i++)
	{
		crr[i]=brr[i-5];
	}
	
	for(i=0;i<10;i++)
		printf("%d,",crr[i]);
	return 0;
}
void main()
{
	int res;
	res=merge();
}
