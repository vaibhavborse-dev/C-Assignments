#include<stdio.h>
struct hr{
	
	int id;
	char name[20];
	int salary;
	int com;
	
};

void store (struct hr h[],int size)

{
	for(int i=0;i<size;i++)
	{
	
	printf("Enter the Hr %d details\n",i+1);
	
	printf("Enter the hr id :");
	scanf("%d",&h[i].id);
	
	printf("Enter the hr name:");
	scanf("%s",h[i].name);
	
	printf("Enter the hr salary :");
	scanf("%d",&h[i].salary);
	
	printf("Enter the hr commission:");
	scanf("%d",&h[i].com);
}
}
void display(struct hr h[],int size)
{
	for(int i=0;i<size;i++)
	{
	
	printf("hr id is:%d\n",h[i].id);
	printf("hr name is %s\n",h[i].name);
	printf("hr salary is %d\n",h[i].salary);
	printf("hr commission is %d\n",h[i].com);
	
}
}

void main()
{
	struct hr h[2];
	store(h,2);
	display(h,2);
}
