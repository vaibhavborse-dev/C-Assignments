#include<stdio.h>
struct student
{
	int rollno;
	char name[10];
	int marks;
};

void store(struct student s[],int size)

{
	for(int i=0;i<size;i++)
	{
		printf("\n Enter student %d\n",i+1);
		printf("Enter the rollno :");
		scanf("%d",&s[i].rollno);
		
		printf("Enter the name:");
		scanf("%s",s[i].name);
		
		printf("Enter the marks:");
		scanf("%d",&s[i].marks);
	}	
}
void display(struct student s[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nStudent %d\n",i+1);
		printf("%d",s[i].rollno);
		printf("%s",s[i].name);
		printf("%d",s[i].marks);
	}
}
int  main()
{
	struct student p[5];
	
	store(p,5);
	display(p,5);
	return 0;
}
