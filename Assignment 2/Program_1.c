#include<stdio.h>
void main()
{
	int num1,num2;
	char choice;
	
	printf("ENter the no 1 : ");
	scanf("%d",&num1);
	
	printf("Enter the no 2 : ");
	scanf("%d",&num2);
	
	printf("Enter your choice:( + , - , * , /):");
	scanf(" %c",&choice);
	
	if(choice=='+')
	{
	printf("addition is %d:",num1+num2);
	}
	else if(choice == '-')
	printf("sub is %d", num1-num2);
	
	else if(choice == '*')
	printf("mul is %d",num1*num2);
	
	else if(choice == '/')
	printf("division is %d",num1 /num2);
}
