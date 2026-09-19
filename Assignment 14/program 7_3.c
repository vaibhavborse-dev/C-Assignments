#include<stdio.h>

struct time
{
	int hour;
	int min;
	int sec;
};

void store(struct time t[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter the %d time detail\n",i+1);
		
		printf("Enter the hour:");
		scanf("%d",&t[i].hour);
		
		printf("Enter the minute:");
		scanf("%d",&t[i].min);
		
		printf("Enter the second:");
		scanf("%d",&t[i].sec);
	}
}

void display(struct time t[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Hour is %d\n",t[i].hour);
		printf("Minute is %d\n",t[i].min);
		printf("Second is %d\n",t[i].sec);
	}
}

void main()
{
	struct time t[2];
	
	store(t,2);
	display(t,2);
}
