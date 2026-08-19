// 1. Print a solid square pattern
// Input: n = 4
// Output:

// * * * *
// * * * *
// * * * *
// * * * *

#include<stdio.h>
void main()
{
	
	int i,j,rows,columns;
	printf("Enter the no of rows:");
	scanf("%d",&rows);
	
	printf("Enter the no of columns:");
	scanf("%d",&columns);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=columns;j++)
		{
			printf("* ");	
		}
		printf("\n");
	}
}
