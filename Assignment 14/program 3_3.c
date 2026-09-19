#include<stdio.h>
struct admin{
	
	int id;
	char name[20];
	int salary;
	int allowance;
};

void store(struct admin a[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter the admin details %d\n",i+1);
		
		printf("Enter the admin id:");
		scanf("%d",&a[i].id);
		
		printf("Enter the admin name:");
		scanf("%s",a[i].name);
		
		printf("Enter the admin salary:");
		scanf("%d",&a[i].salary);
		
		printf("Enter the admin allowance:");
		scanf("%d",&a[i].allowance);
			
	}
}

void display(struct admin a[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Admin id is :%d\n",a[i].id);
		printf("Admin name is :%s\n",a[i].name);
		printf("Admin salary is :%d\n",a[i].salary);
		printf("Admin allowance is :%d\n",a[i].allowance);

	}
}

void main()
{
	struct admin a[3];
	store(a,3);
	display(a,3);
}
