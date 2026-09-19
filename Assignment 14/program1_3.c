#include<stdio.h>

struct product
{
	int id;
	char name[20];
	int quantity;
	int price;
};

void store(struct product p[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter the %d product detail\n",i+1);
		
		printf("Enter the product id:");
		scanf("%d",&p[i].id);
		
		printf("Enter the product name:");
		scanf("%s",p[i].name);
		
		printf("Enter the quantity:");
		scanf("%d",&p[i].quantity);
		
		printf("Enter the price:");
		scanf("%d",&p[i].price);
	}
}

void display(struct product p[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Product %d\n",i+1);
		printf("Product id is %d\n",p[i].id);
		printf("Product name is %s\n",p[i].name);
		printf("Product quantity is %d\n",p[i].quantity);
		printf("Product price is %d\n",p[i].price);
	}
}

void main()
{
	struct product p[2];
	
	store(p,2);
	display(p,2);
}
