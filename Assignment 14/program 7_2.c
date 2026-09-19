#include<stdio.h>

struct time
{
	int hour;
	int min;
	int sec;
};

void store(struct time *t)
{
	printf("Enter the hour:");
	scanf("%d",&t->hour);
	
	printf("Enter the minute:");
	scanf("%d",&t->min);
	
	printf("Enter the second:");
	scanf("%d",&t->sec);
}

void display(struct time *t)
{
	printf("Hour is %d\n",t->hour);
	printf("Minute is %d\n",t->min);
	printf("Second is %d\n",t->sec);
}

void main()
{
	struct time t;
	
	store(&t);
	display(&t);
}
