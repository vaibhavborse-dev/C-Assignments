struct admin{
	
	int id;
	char name[20];
	int salary;
	int allowance;
};

void store(struct admin *a)
{
	printf("Enter the admin id:");
	scanf("%d",&a->id);
	
	printf("Enter the admin name :");
		scanf("%s",a->name);
		
	printf("Enter the admin salary :");
		scanf("%d",&a->salary);
	
	printf("Enter the admin allowance :");
		scanf("%d",&a->allowance);
}

void display(struct admin *a)
{
	printf("Admin id is :%d\n",a->id);
	printf("Admin name is %s\n",a->name);
	printf("Admin salary is %d\n",a->salary);
	printf("Admin allowance is %d\n",a->allowance);
	
}
void main()
{
	struct admin e;
	store(&e);
	display(&e);
}

