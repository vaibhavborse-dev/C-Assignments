//3. Print perfect numbers in the given range 1 to n.
  
void main()
{
	 int no,sum=0;
	 
	 printf("Enter the no : ");
	 scanf("%d",&no);
	 
	for(int i=1;i<no;i++)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
	}
	if(no==sum)
	{
		printf("NO is perfect :");
		
	}
	else 
		printf("No is not perfect:");
}
