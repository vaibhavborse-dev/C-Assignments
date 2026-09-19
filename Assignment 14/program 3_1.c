struct admin{
	
	int id;
	char name[20];
	int salary;
	int allowance;
};

struct admin store()
{
	struct admin temp;
	
	printf("Enter the admin id:");
	scanf("%d",&temp.id);
	
	printf("Enter the admin name :");
		scanf("%s",temp.name);
		
	printf("Enter the admin salary :");
		scanf("%d",&temp.salary);
	
	printf("Enter the admin allowance :");
		scanf("%d",&temp.allowance);
	return temp;
}

void display(struct admin temp)
{
	printf("Admin id is %d\n",temp.id);
	printf("Admin name is %s\n",temp.name);
	printf("Admin salary is %d\n",temp.salary);
	printf("Admin allowance is %d\n",temp.allowance);
}
void main()
{
	struct admin e;
	e=store();
	display(e);
}

