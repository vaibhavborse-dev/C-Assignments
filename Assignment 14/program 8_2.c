#include<stdio.h>

struct distance
{
	int feet;
	int inch;
};

void store(struct distance *d)
{
	printf("Enter the feet:");
	scanf("%d",&d->feet);
	
	printf("Enter the inch:");
	scanf("%d",&d->inch);
}

void display(struct distance *d)
{
	printf("Feet is %d\n",d->feet);
	printf("Inch is %d\n",d->inch);
}

void main()
{
	struct distance d;
	
	store(&d);
	display(&d);
}
