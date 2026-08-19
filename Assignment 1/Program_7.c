#include<stdio.h>
void main()
{
	int sal,da,hra,ta;
	printf("Enter the salary");
	scanf("%d",&sal);
	
	if(sal>=5000)
	{
		da=sal*0.10;
		ta=sal*0.15;
		hra=sal*0.25;
		
	}
	else
	{
		
		da=sal*0.15;
		ta=sal*0.25;
		hra=sal*0.30;
	}
	float total=sal+da+ta+hra;
	printf("Total sal is %f",total);
}
