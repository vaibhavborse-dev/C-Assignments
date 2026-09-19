#include<stdio.h>
struct employee{
	
	int id;
	char name[20];
	int sal;
};

void store(struct employee *e)
{
	printf("Enter the employee id:");
	scanf("%d",&e->id);
	
	printf("Enter the employee name:");
	scanf("%s",e->name);
	
	printf("Enter the employee sal :");
	scanf("%d",&e->sal);
}
void display(struct employee *e)
{
	printf("Employee id is %d\n",e->id);
	printf("Employee name is %s\n",e->name);
	printf("Employee salary is %d\n",e->sal);
}

void main()
{
	struct employee e1;
	store(&e1);
	display(&e1);
}
