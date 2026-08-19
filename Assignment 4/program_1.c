//Print armstrong numbers in the given range 1 to n.
  
void main()
{
	int no,rem,sum=0,temp;
	
	printf("Enter the no :");
	scanf("%d",&no);
	temp=no;
	while(no!=0)
	{
		rem=no%10;
		sum=rem*rem*rem+sum;
		no=no/10;
	}
       
       
	if(temp==sum)
	{
		printf("No is Armstrong :");
	 } 
	else
		printf("No is not armstrong: ");
}
