#include<stdio.h>

struct distance
{
	int feet;
	int inch;
};

void store(struct distance d[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter the %d distance detail\n",i+1);
		
		printf("Enter the feet:");
		scanf("%d",&d[i].feet);
		
		printf("Enter the inch:");
		scanf("%d",&d[i].inch);
	}
}

void display(struct distance d[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Distance %d\n",i+1);
		printf("Feet is %d\n",d[i].feet);
		printf("Inch is %d\n",d[i].inch);
	}
}

void main()
{
	struct distance d[2];
	
	store(d,2);
	display(d,2);
}
