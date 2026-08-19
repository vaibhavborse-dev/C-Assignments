// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong

#include<stdio.h>
void main()
{
	int n,sum,num,original;
	printf("Enter the no :");
	scanf("%d",&n);
	
	original=n;
	while(n!=0)
	{
		num=n%10;
		sum=sum+num*num*num;
		n=n/10;
	}
	if(sum==original)
	printf("%d is armstrong number",original);
	else
	printf("%d is not a armstrong no ",original);
}
