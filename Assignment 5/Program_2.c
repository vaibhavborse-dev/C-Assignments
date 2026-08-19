// 2. Print a right-angled triangle pattern
// Input: n = 5
// Output:
// *
// **
// ***
// ****
// *****

void main()
{
	int i,j,rows;
	printf("It prints right angel triangle pattern:\n");
	printf("Enter the no of rows:");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
