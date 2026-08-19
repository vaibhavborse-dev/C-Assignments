// Sum of numbers in given range.
// Find sum of numbers from start to end.
// Input: start = 1, end = 5
// Output: 15
#include<stdio.h>
void main()
{
	int start=5;
	int end=8;
	int sum=0;
	while(start<=end)
	{
		sum=sum+start;
		start++;
	}
	printf("Sum is %d",sum);
}
