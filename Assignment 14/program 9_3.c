#include<stdio.h>

struct complex
{
	int real;
	int imaginary;
};

void store(struct complex c[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter the %d complex number detail\n",i+1);
		
		printf("Enter the real:");
		scanf("%d",&c[i].real);
		
		printf("Enter the imaginary:");
		scanf("%d",&c[i].imaginary);
	}
}

void display(struct complex c[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Complex number %d\n",i+1);
		printf("Real is %d\n",c[i].real);
		printf("Imaginary is %d\n",c[i].imaginary);
	}
}

void main()
{
	struct complex c[2];
	
	store(c,2);
	display(c,2);
}
