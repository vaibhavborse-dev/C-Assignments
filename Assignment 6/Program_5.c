void voter1()
{
	int age;
	printf("Enter the age : ");
	scanf("%d",&age);
	
	if(age >=18)
		printf("Person is eligible to vote : ");
	
	else 
		printf("Person is not eligible to vote ");
		
	printf("\n");
		
}

void voter2(int a)
{
	if(a>=18)
		printf("Person is eligible to vote ");
		
	else printf("Person is not eligible to vote ");
	
	printf("\n");
}

int  voter3()
{
	
	int age;
	printf("Enter the age : ");
	scanf("%d",&age);
	
	if(age >=18)
		return 0;
	
	else 
		return 1;		
	printf("\n");
}

int  voter4(int a)
{
	if(a>=18)
		return 0;
		
	else return 1;
	
	printf("\n");
}
void main()
{
	int res;
	voter1();
	voter2(12);
	
	res=voter3();
		if(res==0)
			printf("Person is eligible to vote ");
			
		else 
			printf("Person is not eligible to vote ");
			
			printf("\n");
			res=voter4(65);
		if(res==0)
			printf("Person is eligible to vote ");
			
		else 
			printf("Person is not eligible to vote ");
}
