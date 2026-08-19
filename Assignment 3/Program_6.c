// 6 Check the given number is Perfect number or not.
// Input: n = 28
// Output: Perfect
#include<stdio.h>
void main()
{
	int n,sum=0,i=1;
	
	printf("Enter the no : ");
	scanf("%d",&n);
	
	
	while(i<=n/2)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==n)
	{
		printf("%d is the perfect no ",n);
		
	}
	else
	printf("%d is not perfect",n);
}
