#include<stdio.h>
struct salesmanager
{
	int id;
	char name[20];
	int salary;
	int incentive;
	int target;
};

struct salesmanager store()
{
	struct salesmanager sale;
	
	printf("Enter the salesmanager id:");
	scanf("%d",&sale.id);
	
	printf("Enter the salesmanager name:");
	scanf("%s",sale.name);
	
	printf("Enter the salesmanager salary:");
	scanf("%d",&sale.salary);
	
	printf("Enter the salesmanager incentive:");
	scanf("%d",&sale.incentive);
	
	printf("Enter the target:");
	scanf("%d",&sale.target);
	
	return sale;
}

void display(struct salesmanager sale)
{
	printf("Salesmanager id is %d\n",sale.id);
	printf("Salesmanager name is %s\n",sale.name);
	printf("Salesmanager salary is %d\n",sale.salary);
	printf("Salesmanager incentive is %d\n",sale.incentive);
	printf("Salesmanager target is %d\n",sale.target);
}

void main()
{
	struct salesmanager s;
	s=store();
	display(s);
	
}
