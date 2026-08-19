//4. Print strong numbers in the given range 1 to n.

void main()
{
	int no,temp,fact,sum=0,rev;
	
	printf("Enter the no : ");
	scanf("%d",&no);
	
	temp=no;
	
	while(no!=0)
	{
		rev=no%10;
		fact=1;
		
		for(int i=1;i<=rev;i++)
		{
			fact=fact*i;
		}
		
		sum=sum+fact;
		no=no/10;
	
	}
	if(temp==sum)
	{
		printf("No is strong :");
	}
	else
	{
		printf("No is not strong:");
	}
}
