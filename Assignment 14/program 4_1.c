#include<stdio.h>
struct hr{
	
	int id;
	char name[20];
	int salary;
	int com;
};

struct hr store()
{
	
	struct hr temp;
	
	printf("Enter the id :");
	scanf("%d",&temp.id);
	
	printf("Enter the name");
	scanf("%s",temp.name);
	
	printf("Enter the salary:");
	scanf("%d",&temp.salary);
	
	printf("Enter the commission:");
	scanf("%d",&temp.com);
	return temp;
}

void display(struct hr temp)
{
	printf("Hr id is :%d\n",temp.id);
	printf("Hr name is :%s\n",temp.name);
	printf("Hr salary is %d\n",temp.salary);
	printf("Hr commission is %d\n",temp.com);
}

void main()
{
	struct hr h;
	h=store();
	display(h);
}
