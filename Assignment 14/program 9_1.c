#include<stdio.h>

struct complex
{
	int real;
	int imaginary;
};

struct complex store()
{
	struct complex c;
	
	printf("Enter the real:");
	scanf("%d",&c.real);
	
	printf("Enter the imaginary:");
	scanf("%d",&c.imaginary);
	
	return c;
}

void display(struct complex c)
{
	printf("Real is %d\n",c.real);
	printf("Imaginary is %d\n",c.imaginary);
}

void main()
{
	struct complex c;
	
	c=store();
	display(c);
}
