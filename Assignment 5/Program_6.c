// 6. Print a half pyramid using numbers
// Input: n = 5
// Output:
// 1
// 12
// 123
// 1234
// 12345

#include<stdio.h>
void main()
{
	int i,j,rows;
	printf("Enter the no of rows:");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

