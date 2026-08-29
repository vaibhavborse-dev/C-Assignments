#include <stdio.h>
void leapyear1()
{
	int year=2004;
	if(year %4==0 && year%100!=0 || year %400==0 )
	{
		printf("Year is leap  ");
		
	}
	else printf("Year is not leap");
	printf("\n");
	
}

void leapyear2(int y)
{
	if(y%4==0 && y%100!=0 || y%400==0)
	{
		printf("Year is leap");
	}
	else printf("Year is not leap");
			printf("\n");

}

int leapyear3()
{
	int year=2004;
	if(year %4==0 && year%100!=0 || year %400==0 )
		return 0;
		
	else 
		return 1;
	
	
}
int leapyear4(int y)
{
	if(y%4==0 && y%100!=0 || y%400==0)
		return 0;
		
	else 
		return 1;
}
void  main ()
{
	int res;
	leapyear1();
		leapyear2(1900);
	 		res = leapyear3();
	 		if(res == 0)
	 			printf("Year is leap ");
	 		
	 		else 
	 			printf("Year is not leap ");
	 			
	 		printf("\n");
	 	
	 	    res = leapyear4(2055);
	 		if(res == 0)
	 			printf("Year is leap ");
	 		
	 		else 
	 			printf("Year is not leap ");
	 			
	 			
}
