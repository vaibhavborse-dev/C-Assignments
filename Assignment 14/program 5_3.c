#include<stdio.h>
struct salesmanager
{
	int id;
	char name[20];
	int salary;
	int incentive;
	int target;
};

void store(struct salesmanager s[],int size)
{
	for(int i=0;i<size; i++)
	{
		printf("Enter the %d salesmanager detail\n",i+1);
		
			printf("Enter the salesmanager id:");
			scanf("%d",&s[i].id);
			
			printf("Enter the salesmanager name:");
			scanf("%s",s[i].name);
			
			printf("Enter the salesmanager salary:");
			scanf("%d",&s[i].salary);
			
			printf("Enter the salesmanager incentive:");
			scanf("%d",&s[i].incentive);
			
			printf("Enter the target:");
			scanf("%d",&s->target);
	}
}

void display(struct salesmanager s[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Salesmanager id is %d\n",s[i].id);
		printf("Salesmanager name is %s\n",s[i].name);
		printf("Salesmanager salary is %d\n",s[i].salary);
		printf("Salesmanager incentive is %d\n",s[i].incentive);
		printf("Salesmanager target is %d\n",s[i].target);
}
	
}

void main()
{
	struct salesmanager s[2];
	store(s,2);
	display(s,2);
}
