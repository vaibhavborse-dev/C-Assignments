#include<stdio.h>
void main()
{
	int no;
	
	printf("Enter the no : ");
	scanf("%d",&no);
	
	if(no%3==0 && no%5==0)
	    printf("No are divisible by 3 and 5");
	    
	else if(no%3==0)
	printf("No are divisible by 3");
	
	else if(no%5==0)
		printf("No are divisible by 5");
		
	else 
	printf("no are not divisible ");
}
