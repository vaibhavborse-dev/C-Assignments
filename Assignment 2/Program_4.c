#include<stdio.h>
void main()
{
	int marks;
	printf("Enter the percentage");
	scanf("%d",&marks);
	
	if(marks>=75)
	printf("Distinction");
	
	else if(marks>=65)
	printf("First class");
	
	else if(marks>=55)
	printf("Second class");
	
	else if(marks>=45)
	printf("third class");

	else if(marks>=35)
	printf("pass");
	
	else 
	printf("fail");
}
