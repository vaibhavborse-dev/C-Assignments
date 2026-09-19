#include<stdio.h>

struct distance
{
	int feet;
	int inch;
};

struct distance store()
{
	struct distance d;
	
	printf("Enter the feet:");
	scanf("%d",&d.feet);
	
	printf("Enter the inch:");
	scanf("%d",&d.inch);
	
	return d;
}

void display(struct distance d)
{
	printf("Feet is %d\n",d.feet);
	printf("Inch is %d\n",d.inch);
}

void main()
{
	struct distance d;
	
	d=store();
	display(d);
}
