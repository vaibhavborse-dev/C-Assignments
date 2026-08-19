// 7. Print a Floyd’s triangle pattern
// Input: n = 4
// Output:
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include<stdio.h>
void main()
{
	int i,j,n=1;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
}
