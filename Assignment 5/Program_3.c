// 3. Print an inverted right-angled triangle pattern
// Input: n = 5
// Output:

// *****
// ****
// ***
// **
//*

void main()
{
	int i,j,rowcol;
	printf("This is inverted right angle triangle:\n");
	printf("Enter how many rows and columns : ");
	scanf("%d",&rowcol);
	
	for(i=rowcol;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		
		printf("* ");
	}
	
	printf("\n");
}}
