#include<stdio.h>

struct product
{
	int id;
	char name[20];
	int quantity;
	int price;
};

void store(struct product *p)
{
	printf("Enter the product id:");
	scanf("%d",&p->id);
	
	printf("Enter the product name:");
	scanf("%s",p->name);
	
	printf("Enter the quantity:");
	scanf("%d",&p->quantity);
	
	printf("Enter the price:");
	scanf("%d",&p->price);
}

void display(struct product *p)
{
	printf("Product id is %d\n",p->id);
	printf("Product name is %s\n",p->name);
	printf("Product quantity is %d\n",p->quantity);
	printf("Product price is %d\n",p->price);
}

void main()
{
	struct product p;
	
	store(&p);
	display(&p);
}
