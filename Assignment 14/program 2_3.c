#include<stdio.h>
struct employee{
	
	int id;
	char name[20];
	int sal;
};

void store(struct employee e[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter the employee %d\n",i+1);
		printf("Enter employee id :");
		scanf("%d",&e[i].id);
		
		printf("Enter the employee name :");
		scanf("%s",e[i].name);
		
		printf("Enter the employee salary :");
		scanf("%d",&e[i].sal);
		
}
}
void display(struct employee e[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("employee id is %d\n",e[i].id);
		printf("employee name is %s\n",e[i].name);
		printf("employee salary is %d\n",e[i].sal);
	}
}

void main()
{
	struct employee e[5];
	store(e,5);
	display(e,5);
}
