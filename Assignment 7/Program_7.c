#include<stdio.h>
	void voter(int *age)
	{
		if(*age>65)
			printf("Seniour");
			
		else if(*age>=18 && *age<=64)
		{
			printf("Adult");
				}
		else if(*age>=12 && *age<=17)
			printf("Teenager");		
			
		else
			printf("Child");
	}

void main()
{
	int a;
		printf("Enter the age : ");
		scanf("%d",&a);
		
		voter(&a);
}
