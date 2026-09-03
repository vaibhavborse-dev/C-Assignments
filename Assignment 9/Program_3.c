 int sumarr()
{
	int arr[]={54,65,23,12,22,70,45};
	int sum=0;
	for(int i=0;i<7;i++)
	{
		sum=sum+arr[i];
	}
	return sum;
}
void main()
{
	int res;
	res=sumarr();
	printf("%d",res);
}
