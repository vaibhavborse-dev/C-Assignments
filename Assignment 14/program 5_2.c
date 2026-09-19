#include<stdio.h>
struct salesmanager
{
	int id;
	char name[20];
	int salary;
	int incentive;
	int target;
};

void store(struct salesmanager *s)
{
	printf("Enter the salesmanager id:");
	scanf("%d",s->id);
	
	printf("Enter the salesmanager name:");
	scanf("%s",s->name);
	
	printf("Enter the salesmanager salary:");
	scanf("%d",&s->salary);
	
	printf("Enter the salesmanager incentive:");
	scanf("%d",&s->incentive);
	
	printf("Enter the target:");
	scanf("%d",&s->target);
}

void display(struct salesmanager *s)
{
	printf("Salesmanager id is %d\n",s->id);
	printf("Salesmanager name is %s\n",s->name);
	printf("Salesmanager salary is %d\n",s->salary);
	printf("Salesmanager incentive is %d\n",s->incentive);
	printf("Salesmanager target is %d\n",s->target);
}

void main()
{
	struct salesmanager s;
	store(&s);
	display(&s);
}
