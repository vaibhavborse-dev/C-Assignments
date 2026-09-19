#include<stdio.h>

struct student
{
	int rollno;
	char name[10];
	int marks;
};

 struct student store()
{
	struct student temp;
	
	printf("Enter rollno:");
	scanf("%d",&temp.rollno);
	
	printf("Enter name :");
	scanf("%s",temp.name);
	
	printf("Enter marks :");
	scanf("%d",&temp.marks);
	return temp;
	
}
 void display(struct student temp)
{
	printf("roll no :%d\n",temp.rollno);
	printf("Name : %s\n",temp.name);
	printf("Marks : %d\n",temp.marks);
}
void main()
{
	struct student s1;
	s1=store();
	display(s1);
	
}
