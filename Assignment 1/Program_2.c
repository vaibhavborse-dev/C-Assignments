#include<stdio.h>
void main()
{
	int first,last,num;
	
	printf("Enter the 3 digit no");
	scanf("%d",&num);
	
	first=num/100;
	last=num%10;
	
	if(first == last)
	{
		printf("no is palindrome");
	}
	else
	printf("is not palindrome");
}
