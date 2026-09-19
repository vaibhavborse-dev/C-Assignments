#include<stdio.h>

struct time
{
	int hour;
	int min;
	int sec;
};

struct time store()
{
	struct time temp;
	
	printf("Enter the hour : ");
	scanf("%d",&temp.hour);
	
	printf("Enter the minute : ");
	scanf("%d",&temp.min);
	
	printf("Enter the second : ");
	scanf("%d",&temp.sec);
	
	return temp;
}

void display(struct time temp)
{
	printf("Hour is : %d\n",temp.hour);
	printf("Minute is : %d\n",temp.min);
	printf("Second is : %d\n",temp.sec);
}

void main()
{
	struct time t;
	
	t=store();
	display(t);
}
