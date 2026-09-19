#include<stdio.h>
struct employee{
	
	int id;
	char name[10];
	int sal;
};

struct employee store()
{
	struct employee temp;
	
	printf("ENter employee id :");
		scanf("%d",&temp.id);
	
	printf("Enter employee name:");
	scanf("%s",temp.name);
	
	printf("Enter employee salary:");
	scanf("%d",&temp.sal);
	
	return temp;
}

void display(struct employee temp)
{
	printf("Employee id is :%d",temp.id);
	printf("Employee name is :%s",temp.name);
	printf("Employee salary is: %d",temp.sal);
}

void main()
{
	struct employee emp;
	emp=store();
	display(emp);
}
