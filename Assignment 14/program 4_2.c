#include<stdio.h>
struct hr{
	
	int id;
	char name[20];
	int salary;
	int com;
};

void store (struct hr *h)
{
	printf("Enter the hr id :");
	scanf("%d",&h->id);
	
	printf("Enter the hr name:");
	scanf("%s",h->name);
	
	printf("Enter the hr salary :");
	scanf("%d",&h->salary);
	
	printf("Enter the hr commission:");
	scanf("%d",&h->com);
}

void display(struct hr *h)
{
	printf("hr id is:%d\n",h->id);
	printf("hr name is %s\n",h->name);
	printf("hr salary is %d\n",h->salary);
	printf("hr commission is %d\n",h->com);
	
}

void main()
{
	struct hr h;
	store(&h);
	display(&h);
}
