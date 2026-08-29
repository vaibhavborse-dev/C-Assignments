#include<stdio.h>
int evenodd();

void evenodd1()
{
	int no;
	printf("Enter the no : ");
	scanf("%d",&no);
	
	if(no%2==0)
		printf("No is even :\n");
	else
		printf("NO is odd :\n ");
	

}

void evenodd2(int n)
{

	if(n%2==0)
		printf("\n %d No is even :\n ",n);
	else
		printf("\n %d NO is odd :\n",n);
	
}

int evenodd3()
{
	int no;
	printf("Enter the no : ");
	scanf("%d",&no);
	 

	 if(no%2==0)
	 	return 0;
	 
	 else 
	 	return 1;
}

int evenodd4(int n)
{

	if(n%2==0)
		return 0;
		
	else
		return 1;
	
}

int main()
{

	int result;
	
	evenodd1();//type 1 function
	
		evenodd2(34);//type 2 function 
		
			result=evenodd3();//type 3 function 
			if(result==0)
			{
				printf("No is even :\n");
			}
			else
				printf("No is odd :\n");
				
				result = evenodd4(12);
					if(result == 0)
						printf("NO is even : ");
					
					else printf("No is odd :");
					
					
return 0;
}
