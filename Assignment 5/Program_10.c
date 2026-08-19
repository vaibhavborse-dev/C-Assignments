// 10. Print a hollow square with diagonal pattern
// Input: n = 5
// Output:

// * * * * *
// * * *
// * * *
// * * *
// * * * * *

void main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
		   if(i==1||j==1||i==5||j==5||i+j==4||i==3&&j==3||i==4&&j==4)	
			printf("* ");
			else{
				printf("  ");
			}
   		}
   		printf ("\n");
	}
	
}
