// 4. pyramid pattern
// Input: n = 5
// Output:
// *
// **
// ***
// ****
// *****

void main()
{
	int i,j,row;
	printf("This is pyramid pattern \n");
	
	printf("Enter the rows: ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row-i;j++)
		{
			printf("  ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
