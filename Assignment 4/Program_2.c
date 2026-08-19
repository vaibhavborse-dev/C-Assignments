// 2. Print prime numbers in the given range 1 to n
#include<stdio.h>
void main()
{
	
	int no;
	
	printf("Enter the no : ");
	scanf("%d",&no);
	int temp=0;
	for(int i=2;i<no;i++)
	{
		if(no%i == 0)
			{
			temp=1;
			break;
		}
	}
	if(temp==0)
	{
		printf("No is prime ");
		
	}
	else
	printf("no is not prime");
}

